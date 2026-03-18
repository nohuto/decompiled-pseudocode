/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x14001C880
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x14001CA1C (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // rax
  __int64 v3; // rbx
  char v5; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // bl
  KIRQL v9; // bl
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_140075488;
  v3 = a1 + 216;
  v5 = 0;
  v6 = byte_140075488;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      61,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v5,
      (__int64)v2,
      v11);
  }
  dword_140089138 = 0;
  pszDest = 0;
  FreeDataBuffs(v3, 1u);
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(a1, ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes, a1);
  *(_DWORD *)(v1 + 544) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 384);
  *(_DWORD *)(v1 + 384) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), 0, 1);
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v9);
  return 0LL;
}
