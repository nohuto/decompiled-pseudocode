/*
 * XREFs of ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x18011B030 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::OnChanged(CBrush **a1)
{
  CEffectIntermediateProducer *v2; // rcx

  v2 = a1[10];
  a1[10] = 0LL;
  if ( v2 )
    CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v2);
  CWindowBackgroundTreatment::UpdateBackdropFlags(a1);
  return 1LL;
}
