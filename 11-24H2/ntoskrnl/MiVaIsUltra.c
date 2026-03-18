/*
 * XREFs of MiVaIsUltra @ 0x140395710
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140E35EE8 && a1 >= qword_140E35EE8 && a1 < qword_140E35EE8 + (qword_140E35EF8 << 30);
}
