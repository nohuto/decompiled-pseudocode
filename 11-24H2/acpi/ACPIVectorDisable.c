/*
 * XREFs of ACPIVectorDisable @ 0x140019AD0
 * Callers:
 *     ACPIVectorDisable2 @ 0x140069870 (ACPIVectorDisable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14001A728 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorDisable(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // rcx
  char v6; // dl
  char v7; // dl
  int v9; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v3 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  v5 = v2 & 7;
  v6 = 1 << v5;
  LOBYTE(v5) = 1;
  v7 = ~v6;
  *((_BYTE *)GpeEnable + v3) &= v7;
  *((_BYTE *)GpeCurEnable + v3) &= v7;
  ACPIGpeEnableDisableEvents(v5);
  KeReleaseSpinLock(&GpeTableLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
      v9);
  }
  return 0LL;
}
