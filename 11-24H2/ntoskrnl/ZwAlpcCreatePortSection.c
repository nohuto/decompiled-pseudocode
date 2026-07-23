/*
 * XREFs of ZwAlpcCreatePortSection @ 0x1406A8370
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14063A400 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABC10C (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
