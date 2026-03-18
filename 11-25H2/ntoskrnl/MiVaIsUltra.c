/*
 * XREFs of MiVaIsUltra @ 0x14041B6C0
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140E35CA8 && a1 >= qword_140E35CA8 && a1 < qword_140E35CA8 + (qword_140E35CB8 << 30);
}
