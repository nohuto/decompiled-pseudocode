/*
 * XREFs of ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802E379C
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802C5FAC (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 * Callees:
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x180043910 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006C940 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CSecondaryCrossAdapterIndirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1802E3690 (--0CSecondaryCrossAdapterIndirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Te.c)
 */

__int64 __fastcall CSecondaryCrossAdapterIndirectBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8,
        struct CMILPoolResource *a9)
{
  struct CMILPoolResource *v9; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  CSecondaryD2DBitmap *v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx

  v9 = a9;
  *(_QWORD *)a9 = 0LL;
  v14 = MIDL_user_allocate(0x150uLL);
  if ( !v14 )
  {
    a9 = 0LL;
    goto LABEL_7;
  }
  v15 = CSecondaryCrossAdapterIndirectBitmap::CSecondaryCrossAdapterIndirectBitmap(v14, a1, a2, a3, a4, a5, a6, a7, a8);
  a9 = (struct CMILPoolResource *)v15;
  v16 = (CSecondaryD2DBitmap *)v15;
  if ( !v15 )
  {
LABEL_7:
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x26u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 1));
  v17 = CSecondaryD2DBitmap::Initialize(v16);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x28u, 0LL);
  }
  else
  {
    a9 = 0LL;
    *(_QWORD *)v9 = v16;
  }
LABEL_8:
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>(&a9);
  return v18;
}
