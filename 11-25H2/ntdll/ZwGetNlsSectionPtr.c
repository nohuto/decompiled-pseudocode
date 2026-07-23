/*
 * XREFs of ZwGetNlsSectionPtr @ 0x180165250
 * Callers:
 *     RtlpInitCodePageTables @ 0x1800AFD0C (RtlpInitCodePageTables.c)
 *     RtlpGetNormalization @ 0x1800C12A4 (RtlpGetNormalization.c)
 *     RtlpInitUppercaseTables @ 0x1800FB994 (RtlpInitUppercaseTables.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  NTSTATUS result; // eax

  result = 258;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
