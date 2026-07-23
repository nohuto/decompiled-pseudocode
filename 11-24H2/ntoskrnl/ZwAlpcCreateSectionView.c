/*
 * XREFs of ZwAlpcCreateSectionView @ 0x1406A83B0
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x14063A8C0 (DifZwAlpcCreateSectionViewWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABC10C (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
