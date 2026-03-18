/*
 * XREFs of ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180220A10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x18006CBB8 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
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
