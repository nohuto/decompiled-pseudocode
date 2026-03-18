/*
 * XREFs of MiInsertCopyExtents @ 0x14066FB30
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1407DFDAC (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiFormCopyExtents @ 0x14066F894 (MiFormCopyExtents.c)
 *     MiInsertExtentList @ 0x14066FBDC (MiInsertExtentList.c)
 *     MiLockFileExtentsExclusive @ 0x1407E0768 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407E07E8 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertCopyExtents(__int64 a1, _DWORD *a2, signed int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // rbp
  __int64 i; // rdi
  __int64 v9; // rdx

  v3 = a3;
  result = MiFormCopyExtents(a1, a3);
  v6 = result;
  if ( result )
  {
    MiLockFileExtentsExclusive();
    if ( a2 )
    {
      v7 = (unsigned __int64 *)((char *)&unk_140E2D548 + 8 * v3);
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        v9 = (__int64)&a2[12 * i + 2];
        if ( *(_QWORD *)(v9 + 32) != 0x8000000000000000uLL )
          RtlAvlRemoveNode(v7, v9);
      }
    }
    MiInsertExtentList(v6);
    MiUnlockFileExtentsExclusive();
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
    return v6;
  }
  return result;
}
