/*
 * XREFs of ?SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z @ 0x1802DAB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetSDRBoost(CStereoRenderTargetBitmap *this, float a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 120LL))(*((_QWORD *)this + 8));
  CRenderTargetBitmap::SetSDRBoost(this, a2);
}
