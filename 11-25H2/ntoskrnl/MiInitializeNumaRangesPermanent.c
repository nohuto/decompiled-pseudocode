/*
 * XREFs of MiInitializeNumaRangesPermanent @ 0x140C3C6E4
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void *MiInitializeNumaRangesPermanent()
{
  void *result; // rax
  unsigned int v1; // edi
  void *v2; // rbx

  result = &unk_140E2D8C0;
  if ( qword_140E2D8E0 != &unk_140E2D8C0 )
  {
    v1 = 16 * (dword_140E2D884 + 2);
    result = (void *)MiAllocatePool(0x40uLL, v1, 538996045);
    v2 = result;
    if ( result )
    {
      result = memmove(result, qword_140E2D8E0, v1);
      qword_140E2D8E0 = v2;
    }
  }
  return result;
}
