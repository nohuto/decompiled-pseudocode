/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180216D24
 * Callers:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1800F5B80 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x180216CA0 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 16) != 0.0;
}
