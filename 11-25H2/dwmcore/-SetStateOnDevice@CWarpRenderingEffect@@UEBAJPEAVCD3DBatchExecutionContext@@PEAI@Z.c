/*
 * XREFs of ?SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18020E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180148150 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpRenderingEffect::SetStateOnDevice(
        CWarpRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v11; // rax
  int ShaderResourceView; // eax
  unsigned int v13; // edi
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  v5 = 0;
  v14 = 0LL;
  if ( *(_QWORD *)(v4 + 24)
    && (v5 = 1,
        v7 = CDrawListBitmap::GetShaderResourceView(
               (CDrawListBitmap *)(v4 + 16),
               *((const struct RenderTargetInfo **)a2 + 14),
               (struct ID3D11ShaderResourceView **)&v14,
               0LL),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\warprenderingeffect.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    v9 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(v9 + 48)
      && (v11 = v5,
          ++v5,
          ShaderResourceView = CDrawListBitmap::GetShaderResourceView(
                                 (CDrawListBitmap *)(v9 + 40),
                                 *((const struct RenderTargetInfo **)a2 + 14),
                                 (struct ID3D11ShaderResourceView **)&v14 + v11,
                                 0LL),
          v13 = ShaderResourceView,
          ShaderResourceView < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\warprenderingeffect.cpp",
        (const char *)(unsigned int)ShaderResourceView);
      return v13;
    }
    else
    {
      if ( v5 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *))(**((_QWORD **)a2 + 2) + 64LL))(
          *((_QWORD *)a2 + 2),
          0LL,
          v5,
          &v14);
      return 0LL;
    }
  }
}
