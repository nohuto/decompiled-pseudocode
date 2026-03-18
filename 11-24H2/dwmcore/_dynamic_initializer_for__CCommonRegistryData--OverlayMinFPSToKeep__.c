/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayMinFPSToKeep__ @ 0x1800078D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x180212F10 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayMinFPSToKeep__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"OverlayMinFPSToKeep", 10LL, 0LL);
  CCommonRegistryData::OverlayMinFPSToKeep = result;
  return result;
}
