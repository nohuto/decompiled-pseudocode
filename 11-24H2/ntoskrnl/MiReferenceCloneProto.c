/*
 * XREFs of MiReferenceCloneProto @ 0x1402F99D8
 * Callers:
 *     MiCreateCombineAnchor @ 0x1402F97FC (MiCreateCombineAnchor.c)
 *     MiIncrementCombinedPte @ 0x1402F9928 (MiIncrementCombinedPte.c)
 *     MiReferenceExistingCloneProto @ 0x1404636A8 (MiReferenceExistingCloneProto.c)
 * Callees:
 *     MiLockCloneBlockAtDpc @ 0x14023EF08 (MiLockCloneBlockAtDpc.c)
 *     MiChargeCrossPartitionSharedPage @ 0x14036DFA8 (MiChargeCrossPartitionSharedPage.c)
 */

__int64 __fastcall MiReferenceCloneProto(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // esi

  v6 = 1;
  v7 = a4 & 1;
  MiLockCloneBlockAtDpc(a3);
  if ( *(_QWORD *)(a3 + 24)
    && (unsigned int)MiChargeCrossPartitionSharedPage(
                       a2,
                       *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174)),
                       a3,
                       v7) )
  {
    ++*(_QWORD *)(a3 + 24);
    if ( v7 )
      ++*a5;
  }
  else
  {
    v6 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  return v6;
}
