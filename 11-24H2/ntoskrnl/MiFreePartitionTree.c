/*
 * XREFs of MiFreePartitionTree @ 0x14068B6B0
 * Callers:
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionNodePages @ 0x14068B574 (MiFreePartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionTree(unsigned __int16 *a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  bool v4; // bl
  int v6; // ebp
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = 0;
  v6 = 0;
  while ( 1 )
  {
    v10 = *a2;
    if ( !*a2 )
      return (unsigned int)v6;
    RtlAvlRemoveNode(a2, *a2);
    if ( a4 )
    {
      v6 = MiFreePartitionNodePages(a1, v10, a3);
      if ( v6 < 0 )
        break;
    }
    MiDeletePartitionPageNode((PVOID *)v10);
  }
  v11 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_13;
  while ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < (v11[3] & 0x3FFFFFFFFFFFFFFFuLL) )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_13;
LABEL_11:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_11;
  v4 = 1;
LABEL_13:
  RtlAvlInsertNodeEx(a2, (unsigned __int64)v11, v4, (_QWORD *)v10);
  return (unsigned int)v6;
}
