/*
 * XREFs of MiDuplicatePartitionNodeTree @ 0x14068B3B4
 * Callers:
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 * Callees:
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14068B150 (MiDeletePartitionPageNodes.c)
 */

__int64 __fastcall MiDuplicatePartitionNodeTree(unsigned __int64 *a1, _QWORD **a2)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v5; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  v2 = *a2;
  i = 0LL;
  while ( v2 )
  {
    i = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( i )
  {
    v5 = (_QWORD **)i[1];
    v6 = i;
    v7 = i;
    if ( v5 )
    {
      v8 = *v5;
      for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
        i = v8;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v7 )
          break;
        v7 = i;
      }
    }
    if ( !(unsigned int)MiAddRangeToPartitionTree(a1, v6[3] & 0x3FFFFFFFFFFFFFFFLL, v6[4], 4) )
    {
      MiDeletePartitionPageNodes(a1);
      return 0LL;
    }
  }
  return 1LL;
}
