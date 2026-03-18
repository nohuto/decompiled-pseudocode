/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x14045FF4C
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( KiForceParkingConfiguration && (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 36432) )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) == 0 )
    return 0LL;
  LOBYTE(v1) = *(_QWORD *)(a1 + 36416) != 0LL;
  return v1;
}
