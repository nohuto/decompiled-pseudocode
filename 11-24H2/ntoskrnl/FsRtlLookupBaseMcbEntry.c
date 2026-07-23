/*
 * XREFs of FsRtlLookupBaseMcbEntry @ 0x1403FD860
 * Callers:
 *     FsRtlLookupLargeMcbEntry @ 0x1403FD7D0 (FsRtlLookupLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupBaseMcbEntry(
        PBASE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  int v7; // ebp
  signed int v8; // r11d
  signed int v9; // r10d
  unsigned int v12; // ebx
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // edx
  unsigned int v16; // eax
  _DWORD *Mapping; // r9
  int v18; // edx
  int v19; // eax
  LONGLONG v21; // r9

  v7 = 0;
  v8 = 0;
  v9 = Mcb->PairCount - 1;
  v12 = Vbn;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v8 > v9 )
        return 0;
      v13 = (v9 + v8) / 2;
      v14 = v13;
      if ( v13 )
      {
        v15 = v13 - 1;
        v16 = *((_DWORD *)Mcb->Mapping + 2 * (int)(v13 - 1));
      }
      else
      {
        v16 = 0;
        v15 = -1;
      }
      if ( v12 >= v16 )
        break;
      v9 = v15;
    }
    Mapping = Mcb->Mapping;
    if ( v12 <= Mapping[2 * (int)v14] - 1 )
      break;
    v8 = v14 + 1;
  }
  if ( Lbn )
  {
    v18 = Mapping[2 * v14 + 1];
    if ( v18 == -1 )
    {
      *Lbn = -1LL;
    }
    else
    {
      if ( (_DWORD)v14 )
        v19 = Mapping[2 * (unsigned int)(v14 - 1)];
      else
        v19 = 0;
      *Lbn = v12 + v18 - v19;
    }
  }
  if ( SectorCountFromLbn )
    *SectorCountFromLbn = *((_DWORD *)Mcb->Mapping + 2 * v14) - v12;
  if ( StartingLbn )
  {
    v21 = *((unsigned int *)Mcb->Mapping + 2 * v14 + 1);
    if ( (_DWORD)v21 == -1 )
      *StartingLbn = -1LL;
    else
      *StartingLbn = v21;
  }
  if ( SectorCountFromStartingLbn )
  {
    if ( (_DWORD)v14 )
      v7 = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v14 - 1));
    *SectorCountFromStartingLbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * v14) - v7);
  }
  if ( Index )
    *Index = v14;
  return 1;
}
