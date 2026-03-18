/*
 * XREFs of MiInitializeNumaRangesPermanent @ 0x140C4D9E8
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void *MiInitializeNumaRangesPermanent()
{
  void *result; // rax
  unsigned int v1; // edi
  void *v2; // rbx

  result = &unk_140E2DB00;
  if ( qword_140E2DB20 != &unk_140E2DB00 )
  {
    v1 = 16 * (dword_140E2DAC4 + 2);
    result = (void *)MiAllocatePool(0x40uLL, v1, 538996045);
    v2 = result;
    if ( result )
    {
      result = memmove(result, qword_140E2DB20, v1);
      qword_140E2DB20 = v2;
    }
  }
  return result;
}
