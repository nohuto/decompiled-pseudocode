/*
 * XREFs of MiAddRun @ 0x1407EB344
 * Callers:
 *     MiAddRuns @ 0x1407EB45C (MiAddRuns.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddRun(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  void *Pool; // rax
  __int64 v12; // r14
  void *v14; // rsi
  __int64 v15; // rcx

  v3 = *a2;
  if ( *a2
    && (v6 = a2[2],
        v7 = *(_QWORD *)(a1 + 24),
        v8 = *(_QWORD *)(v6 + 8 * v3 - 8) % v7,
        ((*(_QWORD *)(v6 + 8 * v3 - 8) / v7) & 0x3FFFFF) + v8 + 1 == (a3 & 0x3FFFFF))
    && v8 != v7 - 1 )
  {
    ++*(_QWORD *)(v6 + 8 * v3 - 8);
  }
  else
  {
    v9 = a2[1];
    if ( v3 == v9 )
    {
      v10 = 2LL;
      if ( v9 )
        v10 = 2 * v9;
      Pool = (void *)MiAllocatePool(0x40uLL, 8 * v10, 1883793741);
      v12 = (__int64)Pool;
      if ( !Pool )
        return 3221225626LL;
      v14 = (void *)a2[2];
      if ( v14 )
      {
        memmove(Pool, (const void *)a2[2], 8 * a2[1]);
        ExFreePoolWithTag(v14, 0);
      }
      a2[2] = v12;
      a2[1] = v10;
    }
    v15 = *a2;
    *(_QWORD *)(a2[2] + 8 * v15) = (*(_QWORD *)&a3 & 0x3FFFFFLL) << 30;
    *a2 = v15 + 1;
  }
  return 0LL;
}
