/*
 * XREFs of Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU @ 0x18020053C
 * Callers:
 *     ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802004D8 (-UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU()
{
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF

  if ( !byte_1808CBB88 )
  {
    v1 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsCloudAndHistoryFeatureAvailable",
      0x10010u,
      0LL,
      &dword_1808CBB8C,
      &v1);
    byte_1808CBB88 = 1;
  }
  return dword_1808CBB8C != 0;
}
