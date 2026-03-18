/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1802215F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CResourceWeakRef **this, __int64 a2, __int64 a3)
{
  ReleaseInterface<CWeakReference<CVisual>>(this + 15, a2, a3);
}
