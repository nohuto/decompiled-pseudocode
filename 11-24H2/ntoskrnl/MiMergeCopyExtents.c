/*
 * XREFs of MiMergeCopyExtents @ 0x14067C8D4
 * Callers:
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiFormCopyExtents @ 0x14067C234 (MiFormCopyExtents.c)
 *     MiInsertExtentList @ 0x14067C57C (MiInsertExtentList.c)
 *     MiLockFileExtentsExclusive @ 0x1407F0BD8 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407F0C58 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMergeCopyExtents(_QWORD *a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  _QWORD *v4; // r14
  unsigned int **v5; // r15
  unsigned int *v6; // rax
  unsigned int *v7; // rsi
  unsigned int *v9; // rdi
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  unsigned int v12; // edx
  __int64 i; // r8
  unsigned int *v14; // r10
  unsigned int v15; // ebp
  bool v16; // zf
  __int64 v17; // r14
  unsigned int *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r13
  unsigned __int64 v21; // r15
  __int64 v22; // rbx
  KIRQL v23; // al
  __int64 j; // rbx
  __int64 v25; // rdx
  unsigned int v27; // [rsp+90h] [rbp+18h]

  *a4 = 0LL;
  v4 = a1;
  v5 = a4;
  v6 = (unsigned int *)MiFormCopyExtents(a2, 1u);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  v9 = (unsigned int *)v4[14];
  if ( v9 )
  {
    v10 = *v6;
    v11 = *v9;
    v27 = v11;
    v12 = 0;
    if ( *(_QWORD *)&v9[12 * v11] + (unsigned __int64)v9[12 * v11 - 4] > *(_QWORD *)&v6[12 * v10]
                                                                       + (unsigned __int64)v6[12 * v10 - 4] )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225994LL;
    }
    for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
    {
      v14 = &v9[12 * i + 2];
      v15 = v14[6];
      v16 = v12 == v10;
      if ( v12 < v10 )
      {
        v17 = *((_QWORD *)v14 + 5);
        v18 = &v6[12 * v12 + 12];
        do
        {
          v19 = *(v18 - 4);
          if ( v15 >= (unsigned int)v19 )
          {
            v20 = *(_QWORD *)v18;
            v21 = v19 + *(_QWORD *)v18;
            if ( v15 < v21 )
            {
              if ( (unsigned __int64)v15 + v17 <= v21 )
                break;
              v17 += v15 - v19 - v20;
              v15 = v19 + v20;
            }
          }
          ++v12;
          v18 += 12;
        }
        while ( v12 < v10 );
        v4 = a1;
        v16 = v12 == v10;
        v11 = v27;
      }
      if ( v16 )
        KeBugCheckEx(0x1Au, 0x1485uLL, (ULONG_PTR)v9, (ULONG_PTR)v6, (ULONG_PTR)&v9[12 * i + 2]);
    }
    v5 = a4;
  }
  v22 = *v4;
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*v4 + 72LL));
  v4[14] = v7;
  MiReleaseSpinLockExclusive((_DWORD *)(v22 + 72), v23);
  MiLockFileExtentsExclusive();
  if ( v9 )
  {
    for ( j = 0LL; (unsigned int)j < *v9; j = (unsigned int)(j + 1) )
    {
      v25 = (__int64)&v9[12 * j + 2];
      if ( *(_QWORD *)(v25 + 32) != 0x8000000000000000uLL )
        RtlAvlRemoveNode(&qword_140E2D8D0, v25);
    }
  }
  MiInsertExtentList(v7);
  MiUnlockFileExtentsExclusive();
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v5 = v7;
  return 0LL;
}
