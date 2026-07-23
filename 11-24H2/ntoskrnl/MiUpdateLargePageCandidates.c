/*
 * XREFs of MiUpdateLargePageCandidates @ 0x14021F840
 * Callers:
 *     MiMirrorZeroFreeListsCallback @ 0x14041D1E0 (MiMirrorZeroFreeListsCallback.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 */

__int64 __fastcall MiUpdateLargePageCandidates(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0;
  v4 = (*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
  v5 = *((_QWORD *)qword_140E300C8 + v4);
  if ( !*(_BYTE *)(v5 + 16102) )
    return 0LL;
  v6 = *((_QWORD *)qword_140E300C8 + v4);
  if ( a2 )
  {
    if ( a3 <= 0 )
    {
      if ( a2 != 2 )
      {
        MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, a2, 0LL, &v9);
        if ( (v9 & 0x1FF80000) == 0xFF80000LL && _bittest64(&KeFeatureBits, 0x25u) )
          MiRecordLargePageCandidate(v5, BugCheckParameter2, 0LL, 1LL);
        return 0LL;
      }
      MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, 2LL, 0LL, &v8);
      if ( (v8 & 0xFC00) != 0x7C00LL )
        return 0LL;
      _InterlockedDecrement64((volatile signed __int64 *)(57216LL * (unsigned int)MiPageToNode(BugCheckParameter2)
                                                        + *(_QWORD *)(v5 + 16)
                                                        + 57120));
      return 0LL;
    }
    else if ( a2 == 2 )
    {
      MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, 2LL, 1LL, &v8);
      if ( (v8 & 0xFC00) != 0x8000LL )
        return 0LL;
      return MiRecordLargePageCandidate(v5, BugCheckParameter2, 1LL, 8LL);
    }
    else
    {
      MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, a2, 1LL, &v9);
      if ( (v9 & 0x1FF80000) != 0x10000000LL || !_bittest64(&KeFeatureBits, 0x25u) )
        return 0LL;
      return MiRecordLargePageCandidate(v5, BugCheckParameter2, 0LL, 8LL);
    }
  }
  else
  {
    MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, 0LL, a3 > 0, 0LL);
    return 0LL;
  }
}
