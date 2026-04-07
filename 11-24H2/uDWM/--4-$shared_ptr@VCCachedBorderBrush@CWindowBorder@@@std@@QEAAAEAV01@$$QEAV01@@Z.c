/*
 * XREFs of ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036CD0
 * Callers:
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180036D38 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x1800772F0 (-ValidateVisual@CWindowBorder@@UEAAJXZ.c)
 *     ?OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ @ 0x1800EC7D0 (-OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800389BC (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rbx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v4;
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v5);
  }
  return a1;
}
