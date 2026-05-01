/*
 * XREFs of _DSA_MergeSort2 @ 0x1806833D8
 * Callers:
 *     _DSA_MergeSort2 @ 0x1806833D8 (_DSA_MergeSort2.c)
 *     _DSA_MergeSort @ 0x1806834E4 (_DSA_MergeSort.c)
 * Callees:
 *     _DSA_MergeSort2 @ 0x1806833D8 (_DSA_MergeSort2.c)
 *     _DSA_MergeThem @ 0x180683590 (_DSA_MergeThem.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DSA_MergeSort2(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx

  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      v7 = a2 + 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 24))(
             *(_QWORD *)(a1 + 8) + (int)(a2 * *(_DWORD *)(a1 + 16)),
             *(_QWORD *)(a1 + 8) + (int)((a2 + 1) * *(_DWORD *)(a1 + 16)),
             *(_QWORD *)(a1 + 32)) > 0 )
      {
        memcpy_0(
          *(void **)(a1 + 40),
          (const void *)(*(_QWORD *)(a1 + 8) + (int)(a2 * *(_DWORD *)(a1 + 16))),
          *(int *)(a1 + 16));
        memmove_0(
          (void *)(*(_QWORD *)(a1 + 8) + (int)(a2 * *(_DWORD *)(a1 + 16))),
          (const void *)(*(_QWORD *)(a1 + 8) + (int)(v7 * *(_DWORD *)(a1 + 16))),
          *(int *)(a1 + 16));
        memcpy_0(
          (void *)(*(_QWORD *)(a1 + 8) + (int)(v7 * *(_DWORD *)(a1 + 16))),
          *(const void **)(a1 + 40),
          *(int *)(a1 + 16));
      }
    }
    else
    {
      v6 = (unsigned int)((int)a3 / 2);
      DSA_MergeSort2(a1, a2, v6);
      DSA_MergeSort2(a1, (unsigned int)v6 + a2, a3 - (unsigned int)v6);
      DSA_MergeThem(a1, a2, a3);
    }
  }
}
