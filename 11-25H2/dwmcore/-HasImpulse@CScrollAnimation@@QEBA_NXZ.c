/*
 * XREFs of ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1800F5B80
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1800F5A4C (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CScrollAnimation::HasImpulse(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this);
  return CMotion::HasImpulse(v1);
}
