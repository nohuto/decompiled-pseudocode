/*
 * XREFs of ?Release@CCortanaShownEventArgs@@UEAAKXZ @ 0x1802CFBB0
 * Callers:
 *     sub_18037CB70 @ 0x18037CB70 (sub_18037CB70.c)
 *     ?Release@CCortanaShownEventArgs@@W7EAAKXZ @ 0x1803BE420 (-Release@CCortanaShownEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCortanaShownEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(this);
}
