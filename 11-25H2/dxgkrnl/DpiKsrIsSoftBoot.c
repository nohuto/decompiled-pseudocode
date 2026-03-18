/*
 * XREFs of DpiKsrIsSoftBoot @ 0x14024A150
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiKsrGetSavedAdapterState @ 0x14024A074 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x14024A310 (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

bool DpiKsrIsSoftBoot()
{
  bool result; // al

  result = 0;
  if ( qword_14015E300 )
    return *(_BYTE *)(qword_14015E300 + 28) == 0;
  return result;
}
