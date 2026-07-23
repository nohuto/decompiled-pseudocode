/*
 * XREFs of MiReferenceCloneProto @ 0x140294790
 * Callers:
 *     MiReferenceExistingCloneProto @ 0x14029447C (MiReferenceExistingCloneProto.c)
 *     MiCreateCombineAnchor @ 0x1402945B4 (MiCreateCombineAnchor.c)
 *     MiIncrementCombinedPte @ 0x1402946E0 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiLockCloneBlockAtDpc @ 0x140207058 (MiLockCloneBlockAtDpc.c)
 *     MiChargeCrossPartitionSharedPage @ 0x140269A90 (MiChargeCrossPartitionSharedPage.c)
 */

__int64 __fastcall MiReferenceCloneProto(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v6; // edi
  int v7; // esi

  v6 = 1;
  v7 = a4 & 1;
  MiLockCloneBlockAtDpc(a3, a2, a3, a4);
  if ( *(_QWORD *)(a3 + 24)
    && (unsigned int)MiChargeCrossPartitionSharedPage(
                       a2,
                       *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174)),
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
