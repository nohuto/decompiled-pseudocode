/*
 * XREFs of ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1802D6418
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802E1E50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x180042C24 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::CreateSubResourceBitmap(CD2DBitmap *this, __int64 a2, struct CD2DBitmap **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct CD2DBitmap *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-38h]
  struct CD2DBitmap *v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 58) || *((_DWORD *)this + 39) <= 1u )
  {
    v6 = -2147024809;
    v10 = 396;
    goto LABEL_13;
  }
  v5 = (*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 24LL))(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x18Fu, 0LL);
  }
  else
  {
    if ( (*((_DWORD *)this + 44) & 0x400000) != 0 )
    {
      v6 = -2147024891;
      v10 = 404;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v10, 0LL);
      goto LABEL_14;
    }
    v7 = (__int64)MIDL_user_allocate(0xF0uLL);
    if ( v7 )
      v7 = CD2DBitmap::CD2DBitmap(
             v7,
             *((_QWORD *)this + 5),
             0LL,
             *((_QWORD *)this + 13),
             (__int64)this + 144,
             (_OWORD *)this + 12,
             *((_DWORD *)this + 56),
             *((_DWORD *)this + 57),
             1);
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)&v11, v7);
    v8 = v11;
    if ( !v11 )
    {
      v6 = -2147024882;
      v10 = 415;
      goto LABEL_13;
    }
    v11 = 0LL;
    *a3 = v8;
  }
LABEL_14:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v6;
}
