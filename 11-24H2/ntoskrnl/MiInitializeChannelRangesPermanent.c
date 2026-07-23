/*
 * XREFs of MiInitializeChannelRangesPermanent @ 0x140C59954
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void MiInitializeChannelRangesPermanent()
{
  ULONG_PTR v0; // rdi
  void *Pool; // rax
  void *v2; // rbx

  if ( qword_140E2DC68 )
  {
    v0 = 16 * ((unsigned int)(unsigned __int8)byte_140E2DC0B + 2);
    Pool = (void *)MiAllocatePool(0x40uLL, v0, 538996045);
    v2 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140E2DC68, (unsigned int)v0);
      qword_140E2DC68 = v2;
    }
  }
}
