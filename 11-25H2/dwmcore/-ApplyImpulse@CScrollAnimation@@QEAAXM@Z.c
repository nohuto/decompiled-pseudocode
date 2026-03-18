/*
 * XREFs of ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802B52EC
 * Callers:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1802A7000 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1802A715C (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::ApplyImpulse(CScrollAnimation *this, float a2)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this);
  *(float *)(v2 + 64) = a2 + *(float *)(v2 + 64);
}
