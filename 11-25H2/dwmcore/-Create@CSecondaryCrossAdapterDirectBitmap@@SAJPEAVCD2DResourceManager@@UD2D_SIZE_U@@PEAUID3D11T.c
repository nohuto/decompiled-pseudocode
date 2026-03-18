/*
 * XREFs of ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802E3550
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802C5FAC (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 * Callees:
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x180043910 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006C940 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CSecondaryCrossAdapterDirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1802E34D0 (--0CSecondaryCrossAdapterDirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Text.c)
 */

__int64 __fastcall CSecondaryCrossAdapterDirectBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        struct CMILPoolResource *a8)
{
  struct CMILPoolResource *v8; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  CSecondaryD2DBitmap *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx

  v8 = a8;
  *(_QWORD *)a8 = 0LL;
  v13 = MIDL_user_allocate(0x148uLL);
  if ( !v13 )
  {
    a8 = 0LL;
    goto LABEL_7;
  }
  v14 = CSecondaryCrossAdapterDirectBitmap::CSecondaryCrossAdapterDirectBitmap(v13, a1, a2, a3, a4, a5, a6, a7);
  a8 = (struct CMILPoolResource *)v14;
  v15 = (CSecondaryD2DBitmap *)v14;
  if ( !v14 )
  {
LABEL_7:
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 1));
  v16 = CSecondaryD2DBitmap::Initialize(v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x27u, 0LL);
  }
  else
  {
    a8 = 0LL;
    *(_QWORD *)v8 = v15;
  }
LABEL_8:
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>(&a8);
  return v17;
}
