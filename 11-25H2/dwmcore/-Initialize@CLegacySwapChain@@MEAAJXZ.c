/*
 * XREFs of ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1802333E0
 * Callers:
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D3A68 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainD.c)
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802D4880 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::Initialize(CLegacySwapChain *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 64LL))(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v7 = 0LL;
    v8 = 0;
    v5 = *((_QWORD *)this + 3);
    memset(v6, 0, sizeof(v6));
    (*(void (__fastcall **)(char *, _OWORD *))(v5 + 344))((char *)this + 24, v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\global\\LegacySwapChain.h",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
