/*
 * XREFs of Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU @ 0x18049F724
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU()
{
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF

  if ( !byte_180991508 )
  {
    v1 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsClipboardSignalProducingFeatureAvailable",
      0x10u,
      0LL,
      &dword_18099150C,
      &v1);
    byte_180991508 = 1;
  }
  return dword_18099150C != 0;
}
