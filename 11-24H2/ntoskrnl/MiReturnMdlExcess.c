/*
 * XREFs of MiReturnMdlExcess @ 0x140671F10
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiReturnMdlCharges @ 0x1403A8ECC (MiReturnMdlCharges.c)
 *     MiInitializeMdlBatchPages @ 0x140413004 (MiInitializeMdlBatchPages.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnMdlExcess(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  int v6; // ecx
  char v7; // bp
  int v8; // eax
  __int64 Pool; // rax
  __int64 v10; // rdi

  v2 = *(unsigned int **)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 48) * ((unsigned __int64)v2[10] >> 12);
  v5 = *(_QWORD *)(a1 + 32) - v4;
  v6 = (*(_DWORD *)(a1 + 148) >> 3) & 1;
  v7 = v6 | 2;
  if ( (*(_BYTE *)(a1 + 148) & 0x10) == 0 )
    v7 = v6;
  if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    MiReturnMdlCharges(*(_QWORD *)a1, v5, v7);
  if ( !v4 )
    goto LABEL_6;
  v8 = *(_DWORD *)(a1 + 56);
  if ( (v8 & 4) != 0 )
  {
    if ( (v8 & 0x40) == 0 )
      MiInitializeMdlBatchPages(a1, a2);
    MiFreePagesFromMdl((ULONG_PTR)v2, 0, v7, 0);
LABEL_6:
    if ( (*(_DWORD *)(a1 + 148) & 1) == 0 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( (*(_DWORD *)(a1 + 148) & 1) == 0 && *(_QWORD *)(a1 + 48) == 1LL && v5 > 0x800 )
  {
    Pool = MiAllocatePool(0x40uLL, 8 * v4 + 48, 1768189261);
    v10 = Pool;
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      *(_WORD *)(Pool + 10) = 0;
      *(_DWORD *)(Pool + 40) = (_DWORD)v4 << 12;
      *(_QWORD *)(Pool + 32) = 0LL;
      *(_WORD *)(Pool + 8) = 8 * (v4 + 6);
      *(_DWORD *)(Pool + 44) = 0;
      memmove((void *)(Pool + 48), (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v4);
      *(_WORD *)(v10 + 10) = *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v10;
    }
  }
}
