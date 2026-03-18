/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x14001C620
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rbp
  int v3; // r12d
  unsigned int v4; // esi
  __int64 *v5; // r14
  int v6; // edx
  const char *v8; // r8
  const char *v9; // rcx
  char v10; // r15
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *i; // rdx
  __int64 v14; // rdx
  char v15; // r8
  const char *v16; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = byte_1400753E8;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v8 = byte_1400753E8;
  v9 = byte_1400753E8;
  v10 = 1;
  if ( v1 )
  {
    v11 = v1[1];
    v6 = (int)v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v1[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      10,
      75,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      (v3 != 1) + 4,
      v6,
      (__int64)v8,
      (__int64)v9);
  if ( v3 != 1 )
  {
    *(_DWORD *)(a1 + 212) = 5;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 212) = 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  for ( i = (_QWORD *)v1[52]; i; i = (_QWORD *)*i )
  {
    if ( (*(_BYTE *)(i[1] + 16LL) & 0x10) == 0 )
    {
      v10 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v10 )
  {
    v4 = -1073741823;
    goto LABEL_18;
  }
  v5 = (__int64 *)v1[58];
  if ( v5 )
  {
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v4 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  }
  v15 = 0;
  v16 = byte_1400753E8;
  if ( v1 )
  {
    v14 = v1[1];
    v15 = (char)v1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      10,
      76,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v4,
      v15,
      (__int64)v2,
      (__int64)v16);
  }
  result = 259LL;
  if ( v4 != 259 )
  {
    v4 = 0;
LABEL_18:
    ACPIDeviceCompleteGenericPhase(v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
