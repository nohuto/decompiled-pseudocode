/*
 * XREFs of IopCloseFileObjectExtension @ 0x1403B3340
 * Callers:
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x1403B33A0 (PspHardDereferenceSiloWorker.c)
 */

__int64 *__fastcall IopCloseFileObjectExtension(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx
  void *v3; // rbx

  result = *(__int64 **)(a1 + 208);
  if ( result )
  {
    if ( result != &qword_1400145A0 )
    {
      v2 = result[8];
      if ( v2 )
      {
        *(_DWORD *)(v2 + 4) &= ~1u;
        v3 = *(void **)(v2 + 8);
        if ( v3 )
        {
          PspHardDereferenceSiloWorker(*(_QWORD *)(v2 + 8));
          return (__int64 *)ObfDereferenceObjectWithTag(v3, 0x486C6953u);
        }
      }
    }
  }
  return result;
}
