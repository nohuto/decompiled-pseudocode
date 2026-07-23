/*
 * XREFs of ZwExtendSection @ 0x1406A9110
 * Callers:
 *     CmSiExtendSection @ 0x1404AE490 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
