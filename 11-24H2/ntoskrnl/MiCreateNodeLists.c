/*
 * XREFs of MiCreateNodeLists @ 0x1407E9860
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiDescribePageRun @ 0x1407E99CC (MiDescribePageRun.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateNodeLists(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  __int64 Pool; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  PVOID *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]

  v2 = 0LL;
  P[1] = P;
  v15 = 0LL;
  P[0] = P;
  v5 = 0;
  do
  {
    if ( (int)MiDescribePageRun(P, *(_QWORD *)(a2 + 16LL * v5 + 16), *(_QWORD *)(a2 + 16LL * v5 + 24)) < 0 )
      goto LABEL_10;
    ++v5;
  }
  while ( v5 != *(_DWORD *)a2 );
  Pool = MiAllocatePool(0x40uLL, 8 * ((unsigned int)v15 + 6LL + 2LL * (unsigned int)(v15 - 1)), 1817013581);
  if ( !Pool )
    goto LABEL_10;
  v2 = Pool + 16;
  *(_QWORD *)(Pool + 8) = 1LL;
  *(_QWORD *)Pool = a1;
  *(_DWORD *)(Pool + 16) = v15;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v2 + 16);
  v9 = (_QWORD *)(v2 + 16 * ((unsigned int)v15 + 1LL));
  *(_QWORD *)(v2 + 8) = v7;
  while ( 1 )
  {
    v10 = (PVOID *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v11 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_15:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v11 + 8) = P;
    *v8 = v10[2];
    v8[1] = v10[3];
    v8 += 2;
    *v9++ = v10[4];
    ExFreePoolWithTag(v10, 0);
  }
  while ( v10 != P )
  {
    if ( v10[1] != P )
      goto LABEL_15;
    v12 = *v10;
    if ( *((PVOID **)*v10 + 1) != v10 )
      goto LABEL_15;
    P[0] = *v10;
    v12[1] = P;
    ExFreePoolWithTag(v10, 0);
LABEL_10:
    v10 = (PVOID *)P[0];
  }
  return v2;
}
