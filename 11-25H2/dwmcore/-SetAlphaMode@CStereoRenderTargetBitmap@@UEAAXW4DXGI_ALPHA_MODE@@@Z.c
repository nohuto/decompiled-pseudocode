/*
 * XREFs of ?SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802E3D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetAlphaMode(CStereoRenderTargetBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
  CRenderTargetBitmap::SetAlphaMode(this, a2);
}
