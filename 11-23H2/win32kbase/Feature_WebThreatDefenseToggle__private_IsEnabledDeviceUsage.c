/*
 * XREFs of Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00CFFF4
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     _RegisterLogonProcess @ 0x1C00BE030 (_RegisterLogonProcess.c)
 *     ?ShutdownImWorker@@YAJXZ @ 0x1C00C5340 (-ShutdownImWorker@@YAJXZ.c)
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1C012E150 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 * Callees:
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C00D002C (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 */

__int64 Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) != 0 )
    return Feature_WebThreatDefenseToggle__private_featureState & 1;
  else
    return Feature_WebThreatDefenseToggle__private_IsEnabledFallback(
             (unsigned int)Feature_WebThreatDefenseToggle__private_featureState,
             3LL);
}
