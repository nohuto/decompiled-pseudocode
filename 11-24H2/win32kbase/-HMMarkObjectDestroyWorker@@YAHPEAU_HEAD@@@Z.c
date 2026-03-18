/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140041EC4
 * Callers:
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 *     HMUnlockDestroyObject @ 0x1401475B0 (HMUnlockDestroyObject.c)
 * Callees:
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B5E44 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401B6020 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1401B6074 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HMMarkObjectDestroyWorker(struct _HEAD *a1)
{
  __int64 v2; // rbx
  char v3; // al

  v2 = HMPheFromObjectWorker();
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v2, a1);
  }
  else if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_BYTE *)(v2 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3035LL);
    if ( (HIWORD(*(_DWORD *)a1) & 0x7FFF) != *(_WORD *)(v2 + 26) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3036LL);
  }
  v3 = *(_BYTE *)(v2 + 25) | 1;
  *(_BYTE *)(v2 + 25) = v3;
  if ( !*((_DWORD *)a1 + 2) )
    return 1LL;
  *(_BYTE *)(v2 + 25) = v3 & 0xFD;
  return 0LL;
}
