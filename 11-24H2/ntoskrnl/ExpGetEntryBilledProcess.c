/*
 * XREFs of ExpGetEntryBilledProcess @ 0x140403330
 * Callers:
 *     ExQueryPoolBlockSize @ 0x140652E50 (ExQueryPoolBlockSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetEntryBilledProcess(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 3);
  if ( (v1 & 8) == 0 )
    return -1LL;
  if ( (v1 & 4) != 0 )
    a1 += -16LL * (unsigned __int8)*(_WORD *)a1;
  return a1 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(a1 + 8);
}
