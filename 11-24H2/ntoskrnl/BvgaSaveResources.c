/*
 * XREFs of BvgaSaveResources @ 0x140C1C478
 * Callers:
 *     BvgaDriverInitialize @ 0x140C1C310 (BvgaDriverInitialize.c)
 * Callees:
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void BvgaSaveResources()
{
  const void **v0; // rbx
  unsigned __int64 v1; // rsi
  unsigned int *v2; // rdi
  void *Pool2; // rax
  const void *v4; // rbp

  v0 = (const void **)ResourceList;
  v1 = 4LL;
  v2 = (unsigned int *)&ResourceSize;
  while ( v1 < 0x1C )
  {
    if ( *v0 )
    {
      Pool2 = (void *)ExAllocatePool2(0x40uLL, *v2, 0x6D427642uLL);
      v4 = Pool2;
      if ( !Pool2 )
        KeBugCheck(0x7Du);
      memmove(Pool2, *v0, *v2);
      *v0 = v4;
    }
    v1 += 4LL;
    ++v2;
    ++v0;
  }
}
