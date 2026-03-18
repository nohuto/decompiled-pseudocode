/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x18020A9A4
 * Callers:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1800DF790 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18020A920 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 16) != 0.0;
}
