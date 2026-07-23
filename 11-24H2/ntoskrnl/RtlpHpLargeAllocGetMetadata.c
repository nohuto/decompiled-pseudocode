/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x140459080
 * Callers:
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpHpExtrasSetPresent @ 0x140602064 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  v2 = a1 + 72;
  result = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && result )
    result ^= v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  while ( result )
  {
    v7 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v7 )
    {
      v6 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 <= v7 )
        return result;
      v6 = *(_QWORD *)(result + 8);
    }
    if ( v5 && v6 )
      result ^= v6;
    else
      result = v6;
  }
  return result;
}
