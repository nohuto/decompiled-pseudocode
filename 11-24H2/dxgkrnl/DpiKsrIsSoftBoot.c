/*
 * XREFs of DpiKsrIsSoftBoot @ 0x140250F80
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140217710 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiKsrGetSavedAdapterState @ 0x140250EA4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x140251140 (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

bool DpiKsrIsSoftBoot()
{
  bool result; // al

  result = 0;
  if ( qword_1401612C0 )
    return *(_BYTE *)(qword_1401612C0 + 28) == 0;
  return result;
}
