/*
 * XREFs of ZwQuerySection @ 0x1406A7DD0
 * Callers:
 *     CmSiGetSectionLength @ 0x14048CB20 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x140644990 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
