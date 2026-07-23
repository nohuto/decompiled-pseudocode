/*
 * XREFs of ArbpBuildAllocationStack @ 0x1407043D0
 * Callers:
 *     ArbTestAllocation @ 0x140704250 (ArbTestAllocation.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ArbpBuildAlternative @ 0x140704528 (ArbpBuildAlternative.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r14
  int v4; // edi
  __int64 *v5; // r8
  int v6; // ebx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edi
  __int64 Pool2; // rbp
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *i; // rbx
  unsigned __int64 j; // rbp

  v3 = (unsigned int)(a3 + 1);
  v4 = 0;
  v5 = (__int64 *)*a2;
  v6 = 0;
  while ( a2 != v5 )
  {
    v9 = *((_DWORD *)v5 + 4);
    v10 = v6;
    if ( v9 )
      v4 += v9 << 6;
    else
      v3 = (unsigned int)(v3 - 1);
    v5 = (__int64 *)*v5;
    ++v6;
    if ( !v9 )
      v6 = v10;
  }
  v11 = 80 * v3 + v4;
  if ( *(_DWORD *)(a1 + 104) < v11 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, v11, 0x41627241u);
    if ( !Pool2 )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = Pool2;
    *(_DWORD *)(a1 + 104) = v11;
  }
  memset_0(*(void **)(a1 + 112), 0, v11);
  v14 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    v15 = v14 + 80 * v3;
  else
    v15 = 0LL;
  for ( i = (__int64 *)*a2; a2 != i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) )
    {
      *(_QWORD *)(v14 + 32) = i;
      *(_DWORD *)(v14 + 48) = *((_DWORD *)i + 4);
      *(_QWORD *)(v14 + 56) = v15;
      *(_QWORD *)v14 = 1LL;
      for ( j = i[3]; j < i[3] + 32 * (unsigned __int64)*((unsigned int *)i + 4); j += 32LL )
      {
        result = ArbpBuildAlternative(a1, j, v15);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v15 + 32) = 0;
        v15 += 64LL;
      }
      v14 += 80LL;
    }
  }
  *(_QWORD *)(v14 + 32) = 0LL;
  return 0LL;
}
