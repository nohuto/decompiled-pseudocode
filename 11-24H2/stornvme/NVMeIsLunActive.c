/*
 * XREFs of NVMeIsLunActive @ 0x14000D630
 * Callers:
 *     NVMeReenumerateNameSpaceCompare @ 0x14002A208 (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x14002A95C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x14002AC14 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeIsLunActive(__int64 a1)
{
  return a1 && *(_QWORD *)(a1 + 56) && *(_DWORD *)(a1 + 52) && (*(_DWORD *)(a1 + 20) & 4) == 0;
}
