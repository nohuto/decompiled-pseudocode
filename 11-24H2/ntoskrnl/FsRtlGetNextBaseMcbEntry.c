/*
 * XREFs of FsRtlGetNextBaseMcbEntry @ 0x1404016B0
 * Callers:
 *     FsRtlGetNextLargeMcbEntry @ 0x140401640 (FsRtlGetNextLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlGetNextBaseMcbEntry(
        PBASE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  int v7; // r11d
  __int64 v8; // r9
  int v9; // ecx
  int v10; // ecx

  if ( RunIndex >= Mcb->PairCount )
    return 0;
  v7 = 0;
  v8 = RunIndex - 1;
  if ( RunIndex )
    v9 = *((_DWORD *)Mcb->Mapping + 2 * v8);
  else
    v9 = 0;
  *(_DWORD *)Vbn = v9;
  *((_DWORD *)Vbn + 1) = (v9 != -1) - 1;
  v10 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex + 1);
  *(_DWORD *)Lbn = v10;
  *((_DWORD *)Lbn + 1) = (v10 != -1) - 1;
  if ( RunIndex )
    v7 = *((_DWORD *)Mcb->Mapping + 2 * v8);
  *SectorCount = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * RunIndex) - v7);
  return 1;
}
