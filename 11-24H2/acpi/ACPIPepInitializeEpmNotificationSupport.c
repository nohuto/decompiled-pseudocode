/*
 * XREFs of ACPIPepInitializeEpmNotificationSupport @ 0x1400A1328
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIPepCleanupEpmNotificationSupport @ 0x1400A0FF4 (ACPIPepCleanupEpmNotificationSupport.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIPepInitializeEpmNotificationSupport(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  PVOID v4; // rdi
  unsigned int v5; // r8d
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r14d
  char i; // r11
  unsigned int v10; // eax
  int v11; // eax
  int v12; // r10d
  __int64 result; // rax
  __int64 v14; // rcx
  PVOID v15; // rdi
  signed __int32 v16; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  __int128 v20; // [rsp+68h] [rbp+7h] BYREF
  __int128 v21; // [rsp+78h] [rbp+17h]
  __int128 v22; // [rsp+88h] [rbp+27h]

  v18 = 0LL;
  v1 = a1 + 160;
  v16 = 0;
  P = 0LL;
  *(_DWORD *)(a1 + 264) = -1;
  *(_DWORD *)(a1 + 268) = -1;
  v3 = *(_QWORD *)(a1 + 760);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = PEP_NOTIFICATIONS_DSM_EPM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v3, (unsigned int)&v19, 0, 0, (__int64)&v20, (__int64)&P) >= 0 )
  {
    v4 = P;
    if ( *((_WORD *)P + 1) == 3 )
    {
      v5 = *((_DWORD *)P + 6);
      if ( v5 )
      {
        v6 = 0LL;
        v7 = 0;
        v8 = 0;
        for ( i = 0; ; i += 8 )
        {
          v10 = 4;
          if ( v5 < 4 )
            v10 = v5;
          if ( (unsigned int)v6 >= v10 )
            break;
          v11 = v7;
          v12 = *(unsigned __int8 *)(v6 + *((_QWORD *)P + 4)) << i;
          if ( v5 >= 4 )
            v11 = v8;
          v6 = (unsigned int)(v6 + 1);
          v7 = v11 | v12;
          v16 = v7;
          v8 = v7;
        }
      }
    }
    AMLIFreeDataBuffs((__int64)P);
    ExFreePoolWithTag(v4, 0x52706341u);
  }
  result = (__int64)&v16;
  if ( _bittest(&v16, 1u) )
  {
    result = (__int64)&v16;
    if ( _bittest(&v16, 2u) )
      *(_BYTE *)(v1 + 97) = 1;
  }
  if ( *(_BYTE *)(v1 + 97) )
  {
    v14 = *(_QWORD *)(a1 + 760);
    P = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    LODWORD(v20) = 1;
    v22 = 0LL;
    WORD5(v20) = 1;
    LODWORD(v22) = 4;
    DWORD2(v21) = 2;
    v19 = PEP_NOTIFICATIONS_DSM_EPM_UUID;
    if ( (int)ACPIAmliEvaluateDsm(v14, (unsigned int)&v19, 0, 1, (__int64)&v20, (__int64)&P) >= 0 )
    {
      v15 = P;
      if ( *((_WORD *)P + 1) == 1 )
        *(_DWORD *)(v1 + 100) = *((_DWORD *)P + 4);
      AMLIFreeDataBuffs((__int64)v15);
      ExFreePoolWithTag(v15, 0x52706341u);
    }
    result = (unsigned int)(*(_DWORD *)(v1 + 100) - 1);
    if ( (unsigned int)result > 1 )
    {
      *(_BYTE *)(v1 + 97) = 0;
    }
    else
    {
      AcpiGetDriverProxyEndpoint(&v18, (__int64)ACPIPepEffectivePowerModeCallback);
      result = PoRegisterForEffectivePowerModeNotifications(
                 *(unsigned int *)(v1 + 100),
                 v18,
                 v1,
                 v1 + 112,
                 *(_QWORD *)(a1 + 768));
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v1 + 97) = 0;
        return ACPIPepCleanupEpmNotificationSupport(a1);
      }
    }
  }
  return result;
}
