/*
 * XREFs of RootHub_DetectLinkErrorState @ 0x14000AEF8
 * Callers:
 *     Controller_CheckHealth @ 0x14000CDC4 (Controller_CheckHealth.c)
 * Callees:
 *     RootHub_DetectPortInComplianceMode @ 0x14000ADC8 (RootHub_DetectPortInComplianceMode.c)
 *     RootHub_DetectPortInInactiveState @ 0x14000B09C (RootHub_DetectPortInInactiveState.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_DetectLinkErrorState(__int64 a1)
{
  char v1; // r12
  unsigned int v2; // esi
  unsigned int v3; // r13d
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rcx
  int Ulong; // eax
  __int64 v13; // rcx
  char v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v15 = 0;
  v1 = 0;
  v2 = 1;
  v3 = *(_DWORD *)(a1 + 16);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v16 = result;
  if ( v3 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 48);
      v7 = v2 - 1;
      v8 = 120 * v7;
      if ( *(_BYTE *)(v6 + 120 * v7 + 13) != 2 )
      {
        v9 = *(_QWORD *)(a1 + 40) + 16 * v7;
        v14 = 0;
        if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
        {
          Controller_LowerAndTrackIrql();
          v14 = 1;
        }
        v10 = *(_QWORD *)(a1 + 48);
        DynamicLock_Acquire(*(_QWORD *)(v10 + v8 + 24));
        v11 = v16;
        *(_BYTE *)(v10 + v8 + 32) = v14;
        Ulong = XilRegister_ReadUlong(v11, v9);
        v13 = *(_QWORD *)(a1 + 48);
        v15 = Ulong;
        LOBYTE(v10) = *(_BYTE *)(v13 + v8 + 32);
        *(_BYTE *)(v13 + v8 + 32) = 0;
        DynamicLock_Release(*(_QWORD *)(v13 + v8 + 24));
        if ( (_BYTE)v10 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        if ( RootHub_DetectPortInComplianceMode(a1, v2, &v15)
          || (result = RootHub_DetectPortInInactiveState(a1, v2, &v15), (_BYTE)result) )
        {
          v1 = 1;
          result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v6 + v8 + 100), 1);
          *(_BYTE *)(v6 + v8 + 104) = 1;
        }
      }
      ++v2;
    }
    while ( v2 <= v3 );
    if ( v1 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4,
          11,
          268,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BD90)(UcxDriverGlobals, *(_QWORD *)a1);
    }
  }
  return result;
}
