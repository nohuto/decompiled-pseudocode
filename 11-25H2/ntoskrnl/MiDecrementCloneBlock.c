/*
 * XREFs of MiDecrementCloneBlock @ 0x140224FE8
 * Callers:
 *     MiDecrementCombinedPteEx @ 0x140224E9C (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x140224F2C (MiDecrementCloneBlockReference.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 * Callees:
 *     MiUpdateCloneReducedCommit @ 0x1402D1164 (MiUpdateCloneReducedCommit.c)
 *     MiDeleteMergedPte @ 0x14033FD38 (MiDeleteMergedPte.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x14033FE5C (MiLockCloneBlockAtDpc.c)
 */

__int64 __fastcall MiDecrementCloneBlock(__int64 a1, __int64 a2, __int64 a3, char a4, _DWORD *a5)
{
  __int64 v8; // r15
  unsigned int v9; // ebx
  int v10; // r10d
  __int64 v11; // rax
  unsigned int v12; // edi

  *a5 = 0;
  if ( a2 )
    v8 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a2 + 174));
  else
    v8 = a1;
  v9 = 0;
  MiLockCloneBlockAtDpc(a3);
  if ( (a4 & 2) == 0 || *(_QWORD *)(a3 + 24) == 1LL )
  {
    v10 = 5;
    if ( v8 != a1 && (*(_QWORD *)(a3 + 8))-- == 1LL )
      v9 = 5;
    if ( (a4 & 1) != 0 && !MiUpdateCloneReducedCommit(a3, 0LL) )
      v9 |= 2u;
    v11 = *(_QWORD *)(a3 + 24) - 1LL;
    *(_QWORD *)(a3 + 24) = v11;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = 4;
    if ( !v11 )
    {
      *a5 = 1;
      if ( (a4 & 4) != 0 )
      {
        *(_QWORD *)a3 = CLFS_LSN_NULL_EXT;
        goto LABEL_8;
      }
      v12 = MiDeleteMergedPte(a1, a3);
      v10 = 5;
    }
    if ( v12 == 3 )
    {
      if ( (a4 & 1) != 0 )
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
    if ( (a4 & 1) != 0 )
      v12 = v10;
LABEL_10:
    MiReturnCloneCharges(a1, v9);
    return v12;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  return 2LL;
}
