/*
 * XREFs of MmKcsanGetIgnoredRangeList @ 0x14067ADFC
 * Callers:
 *     KcsanInitSystem @ 0x1405AB210 (KcsanInitSystem.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     MiKcsanPopulateHierarchy @ 0x14067ABA0 (MiKcsanPopulateHierarchy.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

unsigned __int64 *MmKcsanGetIgnoredRangeList()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 *result; // rax
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  char *v8; // r15

  v0 = 9LL;
  result = (unsigned __int64 *)ExAllocatePool2(0x48uLL, 0x98uLL, 0x6152634Bu);
  v2 = result;
  if ( result )
  {
    *result = 9LL;
    MiKcsanPopulateHierarchy((__int64)(result + 1), 0LL);
    v3 = qword_140E38C68;
    v4 = qword_140E38C68 + qword_140E38C70 - 1;
    v2[9] = qword_140E38C68;
    v2[10] = v4;
    MiKcsanPopulateHierarchy((__int64)(v2 + 11), v3);
    qsort(v2 + 1, 9uLL, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
    v5 = 1LL;
    v6 = v2 + 2;
    v7 = v2 + 3;
    v8 = (char *)(v2 + 5);
    do
    {
      if ( *v6 == *v7 )
      {
        *v6 = v7[1];
        memmove(v7, v8, v0 - v5 - 1);
        --v0;
        --v5;
        v6 -= 2;
        v7 -= 2;
        v8 -= 16;
      }
      ++v5;
      v6 += 2;
      v7 += 2;
      v8 += 16;
    }
    while ( v5 < v0 );
    *v2 = v0;
    return v2;
  }
  return result;
}
