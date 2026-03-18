/*
 * XREFs of MiReferenceCloneProto @ 0x14023AF4C
 * Callers:
 *     MiCreateCombineAnchor @ 0x14023AD70 (MiCreateCombineAnchor.c)
 *     MiIncrementCombinedPte @ 0x14023AE9C (MiIncrementCombinedPte.c)
 *     MiReferenceExistingCloneProto @ 0x1402CF578 (MiReferenceExistingCloneProto.c)
 * Callees:
 *     MiChargeCrossPartitionSharedPage @ 0x1402CF2DC (MiChargeCrossPartitionSharedPage.c)
 *     MiLockCloneBlockAtDpc @ 0x14033FE5C (MiLockCloneBlockAtDpc.c)
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
                       *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174)),
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
