/*
 * XREFs of PfSnPreallocatePrefetchHeader @ 0x140952458
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnPreallocatePrefetchHeader(__int64 *a1)
{
  size_t v2; // rdi
  char *Pool2; // rax
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rdx
  int v9; // edi
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = (unsigned int)(68 * *(_DWORD *)(*a1 + 88));
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v4 = *a1;
  v5 = 0;
  a1[7] = (__int64)Pool2;
  if ( *(_DWORD *)(v4 + 88) )
  {
    do
    {
      v6 = 56LL * v5++;
      v7 = a1[7] + v6;
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) |= 0x200000000uLL;
      v4 = *a1;
    }
    while ( v5 < *(_DWORD *)(*a1 + 88) );
  }
  v8 = &Pool2[56 * *(unsigned int *)(v4 + 88)];
  a1[8] = (__int64)v8;
  a1[9] = (__int64)&v8[8 * *(unsigned int *)(v4 + 88)];
  memset_0(Pool2, 0, v2);
  v9 = *(_DWORD *)(*a1 + 88) + *(_DWORD *)(*a1 + 120);
  v10 = (void *)ExAllocatePool2(0x100uLL);
  a1[14] = (__int64)v10;
  if ( !v10 )
    return 3221225626LL;
  memset_0(v10, 0, (unsigned int)(24 * v9));
  *((_DWORD *)a1 + 31) = v9;
  v11 = ExAllocatePool2(0x100uLL);
  a1[10] = v11;
  if ( !v11 )
    return 3221225626LL;
  v12 = ExAllocatePool2(0x40uLL);
  a1[11] = v12;
  return v12 != 0 ? 0 : 0xC000009A;
}
