/*
 * XREFs of ACPIVectorDisconnect @ 0x140069890
 * Callers:
 *     ACPIVectorDisconnect2 @ 0x1400699C0 (ACPIVectorDisconnect2.c)
 *     ACPIEcDisconnectGpeVector @ 0x14009C934 (ACPIEcDisconnectGpeVector.c)
 * Callees:
 *     ACPIGpeIndexToByteIndex @ 0x140019870 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     ACPIGpeInstallRemoveIndex @ 0x140060F98 (ACPIGpeInstallRemoveIndex.c)
 */

__int64 __fastcall ACPIVectorDisconnect(char *P)
{
  KIRQL v2; // bp
  unsigned int v3; // r8d
  __int64 v4; // rdx
  char v5; // bl

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      14,
      13,
      (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids);
  v2 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  v3 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex() + GpeMap);
  if ( v3 < GpeVectorTableSize )
  {
    v4 = 2LL * v3;
    *((_QWORD *)GpeVectorTable + v4 + 1) = 0LL;
    *((_BYTE *)GpeVectorTable + 8 * v4) = GpeVectorFree;
    GpeVectorFree = v3;
  }
  v5 = ACPIGpeInstallRemoveIndex(*(unsigned int *)P, 2, 0, P + 25);
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLock(&GpeTableLock, v2);
  if ( v5 )
    ExFreePoolWithTag(P, 0);
  return v5 == 0 ? 0xC0000001 : 0;
}
