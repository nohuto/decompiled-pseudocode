/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x1407FC820
 * Callers:
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1407FC284 (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x14066DDE4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066E948 (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(unsigned __int16 *a1, _QWORD **a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v6; // rax
  _QWORD *i; // rdi
  _QWORD **v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  unsigned __int16 *v13[3]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-40h]

  memset_0(v13, 0, 0x48uLL);
  v13[0] = a1;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  v6 = *a2;
  i = 0LL;
  while ( v6 )
  {
    i = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( i )
  {
    v8 = (_QWORD **)i[1];
    v9 = (__int64)i;
    v10 = i;
    if ( v8 )
    {
      v11 = *v8;
      for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
        i = v11;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v10 )
          break;
        v10 = i;
      }
    }
    MiActOnPartitionNodePages(v9, 5u, 0, v13);
    if ( v14 < 0 )
    {
      v4 = v14;
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  return v4;
}
