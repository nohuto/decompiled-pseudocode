/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18022C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CResourceWeakRef **this)
{
  ReleaseInterface<CWeakReference<CVisual>>(this + 15);
}
