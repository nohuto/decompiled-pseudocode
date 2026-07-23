/*
 * XREFs of FsRtlLookupLastBaseMcbEntry @ 0x140437E10
 * Callers:
 *     FsRtlLookupLastLargeMcbEntry @ 0x14057CF30 (FsRtlLookupLastLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntry(PBASE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ULONG PairCount; // r9d
  _DWORD *Mapping; // r11
  _DWORD *v6; // rbx
  int v7; // edi
  LONGLONG v8; // rax
  int v9; // edx

  PairCount = Mcb->PairCount;
  if ( !PairCount )
    return 0;
  Mapping = Mcb->Mapping;
  v6 = &Mapping[2 * PairCount - 2];
  v7 = v6[1];
  v8 = 0xFFFFFFFFLL;
  if ( v7 != -1 )
  {
    if ( PairCount == 1 )
      v9 = 0;
    else
      v9 = Mapping[2 * PairCount - 4];
    v8 = (unsigned int)(v7 + *v6 - v9 - 1);
  }
  *Lbn = v8;
  *Vbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * (Mcb->PairCount - 1)) - 1);
  return 1;
}
