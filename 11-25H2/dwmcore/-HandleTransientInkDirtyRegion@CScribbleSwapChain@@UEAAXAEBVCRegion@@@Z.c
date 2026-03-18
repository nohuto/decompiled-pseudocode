/*
 * XREFs of ?HandleTransientInkDirtyRegion@CScribbleSwapChain@@UEAAXAEBVCRegion@@@Z @ 0x18023BA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScribbleSwapChain::HandleTransientInkDirtyRegion(CScribbleSwapChain *this, const struct CRegion *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 29) + 192LL))((char *)this - 232);
  (*(void (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)v3 + 160LL))(v3, a2);
}
