/*
 * XREFs of MiInitializeChannelRangesPermanent @ 0x140C464E4
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void MiInitializeChannelRangesPermanent()
{
  ULONG_PTR v0; // rdi
  void *Pool; // rax
  void *v2; // rbx

  if ( qword_140E2D8E8 )
  {
    v0 = 16 * ((unsigned int)(unsigned __int8)byte_140E2D88B + 2);
    Pool = (void *)MiAllocatePool(0x40uLL, v0, 538996045);
    v2 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140E2D8E8, (unsigned int)v0);
      qword_140E2D8E8 = v2;
    }
  }
}
