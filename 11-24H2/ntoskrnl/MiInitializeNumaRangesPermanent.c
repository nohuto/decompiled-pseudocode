/*
 * XREFs of MiInitializeNumaRangesPermanent @ 0x140C4FB84
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void *MiInitializeNumaRangesPermanent()
{
  void *result; // rax
  unsigned int v1; // edi
  void *v2; // rbx

  result = &unk_140E2DC40;
  if ( qword_140E2DC60 != &unk_140E2DC40 )
  {
    v1 = 16 * (dword_140E2DC04 + 2);
    result = (void *)MiAllocatePool(0x40uLL, v1, 538996045);
    v2 = result;
    if ( result )
    {
      result = memmove(result, qword_140E2DC60, v1);
      qword_140E2DC60 = v2;
    }
  }
  return result;
}
