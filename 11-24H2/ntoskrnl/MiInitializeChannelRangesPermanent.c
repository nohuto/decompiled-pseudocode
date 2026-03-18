/*
 * XREFs of MiInitializeChannelRangesPermanent @ 0x140C577C4
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void MiInitializeChannelRangesPermanent()
{
  ULONG_PTR v0; // rdi
  void *Pool; // rax
  void *v2; // rbx

  if ( qword_140E2DB28 )
  {
    v0 = 16 * ((unsigned int)(unsigned __int8)byte_140E2DACB + 2);
    Pool = (void *)MiAllocatePool(0x40uLL, v0, 538996045);
    v2 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140E2DB28, (unsigned int)v0);
      qword_140E2DB28 = v2;
    }
  }
}
