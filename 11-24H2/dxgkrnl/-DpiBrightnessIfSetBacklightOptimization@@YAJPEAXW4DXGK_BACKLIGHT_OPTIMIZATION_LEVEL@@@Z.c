/*
 * XREFs of ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1402CC140
 * Callers:
 *     <none>
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1402CC214 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessIfSetBacklightOptimization(
        struct _DEVICE_OBJECT *a1,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a2)
{
  char *DeviceExtension; // rbp
  char *v3; // rsi
  int v7; // ebx

  DeviceExtension = (char *)a1->DeviceExtension;
  v3 = 0LL;
  if ( *((_WORD *)DeviceExtension + 2405) == 2 )
    v3 = DeviceExtension + 4808;
  if ( !v3 )
    return 3221225659LL;
  v7 = -1073741661;
  KeWaitForSingleObject(DeviceExtension + 4536, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)v3 + 9) )
  {
    v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v7 >= 0 )
    {
      v7 = DpiBrightnessSetBacklightOptimizationHelper(a1, a2);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)DeviceExtension + 81, 0);
  return (unsigned int)v7;
}
