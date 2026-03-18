/*
 * XREFs of ACPIDevicePowerProcessGenericPhase @ 0x140025F9C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x140026ACC (ACPIDeviceCompleteRequest.c)
 *     ACPIIsPowerRequestBlocked @ 0x140027704 (ACPIIsPowerRequestBlocked.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIDevicePowerProcessGenericPhase(__int64 *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int64 *v4; // rdi
  char v7; // bp
  __int64 *v9; // r15
  __int64 *v10; // rbx
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v16; // rax
  __int64 **v17; // rcx
  __int64 **v18; // rax
  unsigned __int16 v19; // [rsp+70h] [rbp+18h]

  v19 = a3;
  v4 = (__int64 *)*a1;
  v7 = 1;
  while ( v4 != a1 )
  {
    v9 = (__int64 *)*v4;
    v10 = v4;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 52, 1, 1);
    v12 = v11;
    if ( v11 >= a3 )
      ACPIInternalError(0xC17D7uLL);
    _mm_lfence();
    v13 = *(_QWORD *)(a2 + 8LL * v11);
    if ( v13 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)v4 + 52, 1, v11);
      v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 8LL * *((int *)v4 + 12)))(v4);
      a3 = v19;
      if ( v14 < 0 )
      {
        v12 = 0;
        v4 = v9;
        goto LABEL_10;
      }
    }
    else
    {
      v4 = v9;
      if ( v11 == 1 )
      {
        if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v10) )
        {
LABEL_9:
          v7 = 0;
          if ( v12 == 2 )
            goto LABEL_12;
          goto LABEL_10;
        }
        v16 = (__int64 *)*v10;
        if ( *(__int64 **)(*v10 + 8) != v10
          || (v17 = (__int64 **)v10[1], *v17 != v10)
          || (*v17 = v16,
              v16[1] = (__int64)v17,
              v10[12] = (__int64)a1,
              v18 = (__int64 **)qword_14008B018,
              *(__int64 **)qword_14008B018 != &AcpiPowerBlockedOnDependencyList) )
        {
          __fastfail(3u);
        }
        *v10 = (__int64)&AcpiPowerBlockedOnDependencyList;
        v10[1] = (__int64)v18;
        *v18 = v10;
        qword_14008B018 = (__int64)v10;
      }
      else if ( v11 )
      {
        goto LABEL_9;
      }
LABEL_10:
      a3 = v19;
      if ( a4 == 1 && !v12 )
      {
LABEL_12:
        ACPIDeviceCompleteRequest(v10);
        a3 = v19;
      }
    }
  }
  return v7 == 0 ? 0x103 : 0;
}
