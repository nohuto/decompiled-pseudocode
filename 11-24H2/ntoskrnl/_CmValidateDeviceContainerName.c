/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1408B5474
 * Callers:
 *     _CmContainerListGenericObjectCallback @ 0x140819CB0 (_CmContainerListGenericObjectCallback.c)
 *     _PnpDispatchDeviceContainer @ 0x1408B3940 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1408B53BC (_CmGetDeviceContainerRegKeyPath.c)
 * Callees:
 *     wcscmp @ 0x1404FD6E0 (wcscmp.c)
 *     PnpIsValidGuidString @ 0x1408B5960 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned __int8)PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
