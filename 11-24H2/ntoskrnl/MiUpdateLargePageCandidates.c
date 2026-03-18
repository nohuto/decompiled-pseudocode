/*
 * XREFs of MiUpdateLargePageCandidates @ 0x14026A2B0
 * Callers:
 *     MiMirrorZeroFreeListsCallback @ 0x140429090 (MiMirrorZeroFreeListsCallback.c)
 * Callees:
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     MiRecordLargePageCandidate @ 0x1403096C4 (MiRecordLargePageCandidate.c)
 */

__int64 __fastcall MiUpdateLargePageCandidates(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = (*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
  if ( !*(_BYTE *)(*((_QWORD *)qword_140E2FF88 + v4) + 16102LL) )
    return 0LL;
  v5 = *((_QWORD *)qword_140E2FF88 + v4);
  if ( a2 )
  {
    if ( a3 <= 0 )
    {
      if ( a2 == 2 )
        goto LABEL_5;
    }
    else if ( a2 == 2 )
    {
LABEL_5:
      MiUpdateLargePageCandidateValue(v5, BugCheckParameter2, 2LL);
      return 0LL;
    }
    MiUpdateLargePageCandidateValue(v5, BugCheckParameter2, a2);
    return 0LL;
  }
  MiUpdateLargePageCandidateValue(v5, BugCheckParameter2, 0LL);
  return 0LL;
}
