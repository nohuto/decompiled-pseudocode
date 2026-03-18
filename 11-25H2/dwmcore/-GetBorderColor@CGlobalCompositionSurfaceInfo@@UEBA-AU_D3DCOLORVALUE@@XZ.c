/*
 * XREFs of ?GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18021EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800A25A0 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CGlobalCompositionSurfaceInfo::GetBorderColor(
        CGlobalCompositionSurfaceInfo *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct ISwapChainRealization *SwapChainRealization; // rax
  __int128 *v4; // rax
  __int128 v5; // xmm0
  struct _D3DCOLORVALUE *result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(this);
  if ( SwapChainRealization )
  {
    v4 = (__int128 *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)SwapChainRealization
                                                                                           + 112LL))(
                       SwapChainRealization,
                       &v7);
  }
  else
  {
    v4 = &v7;
    v7 = 0LL;
  }
  v5 = *v4;
  result = retstr;
  *(_OWORD *)&retstr->r = v5;
  return result;
}
