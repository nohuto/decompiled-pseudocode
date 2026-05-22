/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A17C8
 * Callers:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801A1948 (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A1C70 (--$_Uninitialized_move@PEAUCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@YAPEA.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801A5210 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&__::_1_::catch$0 @ 0x1801D16C3 (_std--vector_CandidateIdentity_std--allocator_CandidateIdentity___--_Emplace_reallocate_Candidat.c)
 * Callees:
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801A2034 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<CandidateIdentity>>(CandidateIdentity *this, CandidateIdentity *a2)
{
  CandidateIdentity *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CandidateIdentity::`scalar deleting destructor'(v3, 0);
      v3 = (CandidateIdentity *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
  return result;
}
