/*
 * XREFs of MiDecrementCloneBlock @ 0x140294E14
 * Callers:
 *     MiDecrementCombinedPteEx @ 0x140294CC8 (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x140294D58 (MiDecrementCloneBlockReference.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140205D9C (MiDeleteMergedPte.c)
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x140207058 (MiLockCloneBlockAtDpc.c)
 *     MiUpdateCloneReducedCommit @ 0x14026A19C (MiUpdateCloneReducedCommit.c)
 */

__int64 __fastcall MiDecrementCloneBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  char v5; // r12
  __int64 v8; // r15
  char v9; // bl
  int v10; // r10d
  __int64 v11; // rax
  unsigned int v12; // edi

  v5 = a4;
  *a5 = 0;
  if ( a2 )
  {
    a2 = *(unsigned __int16 *)(a2 + 174);
    v8 = *((_QWORD *)qword_140E300C8 + a2);
  }
  else
  {
    v8 = a1;
  }
  v9 = 0;
  MiLockCloneBlockAtDpc(a3, a2, a3, a4);
  if ( (v5 & 2) == 0 || *(_QWORD *)(a3 + 24) == 1LL )
  {
    v10 = 5;
    if ( v8 != a1 && (*(_QWORD *)(a3 + 8))-- == 1LL )
      v9 = 5;
    if ( (v5 & 1) != 0 && !MiUpdateCloneReducedCommit(a3, 0) )
      v9 |= 2u;
    v11 = *(_QWORD *)(a3 + 24) - 1LL;
    *(_QWORD *)(a3 + 24) = v11;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = 4;
    if ( !v11 )
    {
      *a5 = 1;
      if ( (v5 & 4) != 0 )
      {
        *(_QWORD *)a3 = CLFS_LSN_NULL_EXT;
        goto LABEL_8;
      }
      v12 = MiDeleteMergedPte(a1, (__int64 *)a3);
      v10 = 5;
    }
    if ( v12 == 3 )
    {
      if ( (v5 & 1) != 0 )
      {
        v9 &= ~2u;
        v12 = v10;
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
      }
      else if ( v8 != a1 )
      {
        v12 = 4;
        v9 &= ~1u;
      }
      goto LABEL_10;
    }
LABEL_8:
    if ( (v5 & 1) != 0 )
      v12 = v10;
LABEL_10:
    MiReturnCloneCharges(a1, v9);
    return v12;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  return 2LL;
}
