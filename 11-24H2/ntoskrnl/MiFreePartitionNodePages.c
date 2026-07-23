/*
 * XREFs of MiFreePartitionNodePages @ 0x14068B574
 * Callers:
 *     MiFreePartitionTree @ 0x14068B6B0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 * Callees:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFreePartitionNodePages(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edx
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+34h] [rbp-44h]
  unsigned int v10; // [rsp+38h] [rbp-40h]

  memset_0(v8, 0, 0x48uLL);
  v6 = 4;
  v8[0] = a1;
  if ( (a3 & 4) != 0 )
  {
    v6 = (a3 & 0x20 | 0x10) >> 4;
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 2;
    v9 = 2;
    if ( (a3 & 0x30) != 0x30 )
      v6 = 0;
  }
  MiActOnPartitionNodePages(a2, v6, a3, v8);
  return v10;
}
