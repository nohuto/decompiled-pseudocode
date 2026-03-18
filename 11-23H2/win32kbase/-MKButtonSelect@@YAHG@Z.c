/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C01B6170
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0207214 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  gwMKCurrentButton = a1;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
