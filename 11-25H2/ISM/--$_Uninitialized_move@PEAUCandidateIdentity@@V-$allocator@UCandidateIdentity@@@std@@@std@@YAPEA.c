/*
 * XREFs of ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A1C70
 * Callers:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801A1948 (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A17C8 (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<CandidateIdentity *>(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v3; // rbx
  char *v4; // r8
  __int64 v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = (char *)a3 - a1;
    v5 = a1 + 24;
    do
    {
      *v3 = 0LL;
      *(_QWORD *)&v4[v5 - 8] = 0LL;
      *(_QWORD *)&v4[v5] = 0LL;
      *v3 = *(_OWORD *)(v5 - 24);
      v3[1] = *(_OWORD *)(v5 - 8);
      *(_QWORD *)(v5 - 8) = 0LL;
      v3 = (_OWORD *)((char *)v3 + 40);
      *(_QWORD *)v5 = 7LL;
      *(_WORD *)(v5 - 24) = 0;
      *(_DWORD *)&v4[v5 + 8] = *(_DWORD *)(v5 + 8);
      v5 += 40LL;
    }
    while ( v5 - 24 != a2 );
  }
  std::_Destroy_range<std::allocator<CandidateIdentity>>((CandidateIdentity *)v3, (CandidateIdentity *)v3);
  return v3;
}
