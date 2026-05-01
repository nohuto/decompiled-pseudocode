/*
 * XREFs of _DSA_MergeThem @ 0x180683590
 * Callers:
 *     _DSA_MergeSort2 @ 0x1806833D8 (_DSA_MergeSort2.c)
 * Callees:
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void *__fastcall DSA_MergeThem(__int64 a1, int a2, int a3)
{
  int v5; // r12d
  char *v6; // rsi
  int v7; // ebp
  int v8; // r15d
  int i; // r13d
  int v10; // eax
  int v11; // edx
  char *v12; // rcx
  void *result; // rax

  v5 = a3 / 2;
  v6 = (char *)(*(_QWORD *)(a1 + 8) + a2 * *(_DWORD *)(a1 + 16));
  memcpy_0(*(void **)(a1 + 40), v6, a3 / 2 * *(_DWORD *)(a1 + 16));
  v7 = 0;
  v8 = v5;
  for ( i = 0; ; ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(a1 + 24))(
            *(_QWORD *)(a1 + 40) + v7 * *(_DWORD *)(a1 + 16),
            &v6[v8 * *(_DWORD *)(a1 + 16)],
            *(_QWORD *)(a1 + 32));
    v11 = *(_DWORD *)(a1 + 16);
    v12 = &v6[i * v11];
    if ( v10 > 0 )
      break;
    result = memcpy_0(v12, (const void *)(*(_QWORD *)(a1 + 40) + v7 * v11), v11);
    if ( ++v7 == v5 )
      return result;
LABEL_6:
    ;
  }
  memmove_0(v12, &v6[v8 * v11], v11);
  if ( ++v8 != a3 )
    goto LABEL_6;
  return memcpy_0(
           &v6[(i + 1) * *(_DWORD *)(a1 + 16)],
           (const void *)(*(_QWORD *)(a1 + 40) + v7 * *(_DWORD *)(a1 + 16)),
           *(_DWORD *)(a1 + 16) * (a3 - (i + 1)));
}
