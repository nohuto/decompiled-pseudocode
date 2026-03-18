/*
 * XREFs of DpiEnableSharedGraphicsPowerInterface @ 0x140235C04
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiEnableSharedGraphicsPowerInterface(__int64 a1)
{
  __int64 v1; // rcx
  NTSTATUS v2; // eax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v1 + 5816) )
  {
    v2 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 5800), 1u);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL, v2);
      WdLogGlobalForLineNumber = 4293;
    }
  }
}
