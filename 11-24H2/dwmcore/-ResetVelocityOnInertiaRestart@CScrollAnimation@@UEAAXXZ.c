/*
 * XREFs of ?ResetVelocityOnInertiaRestart@CScrollAnimation@@UEAAXXZ @ 0x1802AB740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::ResetVelocityOnInertiaRestart(CScrollAnimation *this)
{
  *((_BYTE *)this + 328) |= 1u;
}
