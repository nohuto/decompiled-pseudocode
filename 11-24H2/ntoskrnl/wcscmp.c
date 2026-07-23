/*
 * XREFs of wcscmp @ 0x1404FD6E0
 * Callers:
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     _CmValidateDeviceContainerName @ 0x1408B5474 (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A99C50 (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x140BAF008 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *Str2;
  v3 = *Str1 - v2;
  if ( !v3 )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      v3 = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}
