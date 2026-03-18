/*
 * XREFs of ReadRawMouseThrottlingThresholds @ 0x14009E160
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14009E198 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadRawMouseThrottlingThresholds(struct _UNICODE_STRING *a1)
{
  CMouseSensor *v2; // rcx

  v2 = *(CMouseSensor **)(W32GetUserSessionState(a1) + 3144);
  if ( v2 )
    CMouseSensor::ReadRawMouseThrottlingThresholds(v2, a1);
}
