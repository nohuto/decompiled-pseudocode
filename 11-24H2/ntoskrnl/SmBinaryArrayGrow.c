/*
 * XREFs of SmBinaryArrayGrow @ 0x140499C40
 * Callers:
 *     SmHpBufferAlloc @ 0x140381B00 (SmHpBufferAlloc.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char *__fastcall SmBinaryArrayGrow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  char *v6; // rdi
  __int64 v7; // rsi
  ULONG_PTR v9; // r15
  char *Pool2; // rax

  v2 = 0LL;
  v3 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v5 = a2 ^ (1 << v4);
  if ( v4 < 0x20 )
  {
    v6 = *(char **)(v3 + 8 * a1);
    v7 = (unsigned int)a1;
    if ( !v6 )
    {
      v9 = (unsigned int)(16 * (1 << a1));
      Pool2 = (char *)ExAllocatePool2(0x40uLL, v9, 0x41426D73u);
      v6 = Pool2;
      if ( !Pool2 )
        return (char *)v2;
      memset_0(Pool2, 0, (unsigned int)v9);
      *(_QWORD *)(v3 + 8 * v7) = v6;
    }
    return &v6[16 * v5];
  }
  return (char *)v2;
}
