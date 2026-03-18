/*
 * XREFs of ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802D7184
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801D8754 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020158C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802D6FB4 (--0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AE.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802D7320 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 */

__int64 __fastcall CGDISubSectionBitmapRealization::Create(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  int v11; // eax
  void *v12; // rax
  __int64 v13; // rax
  CGDISubSectionBitmapRealization *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  CGlobalDrawingContext *v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-B0h]
  int v21; // [rsp+5Ch] [rbp-ACh]
  int v22; // [rsp+60h] [rbp-A8h]
  int v23; // [rsp+64h] [rbp-A4h]
  _QWORD v24[6]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v25[20]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26; // [rsp+E8h] [rbp-20h]

  *a7 = 0LL;
  memset_0(v25, 0, 0x90uLL);
  v25[12] = 0;
  v25[19] = 0;
  v25[0] = a6;
  v19 = 0LL;
  v20 = *(_DWORD *)(a3 + 8) - *(_DWORD *)a3;
  v11 = *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 4);
  memset(v24, 0, 40);
  v21 = v11;
  v25[17] = 1;
  LODWORD(v24[0]) = 1;
  v23 = a5;
  v25[18] = 1065353216;
  v26 = _xmm;
  v22 = a4;
  v12 = MIDL_user_allocate(0x1C0uLL);
  if ( !v12 )
  {
    v18 = 0LL;
    goto LABEL_7;
  }
  v13 = CGDISubSectionBitmapRealization::CGDISubSectionBitmapRealization(
          (__int64)v12,
          (const struct CSM_BUFFER_ATTRIBUTES *)v25,
          (const struct CSM_REALIZATION_INFO *)v24,
          (const struct CSM_SYSMEM_SECTION_INFO *)&v19,
          a1,
          a2,
          (_OWORD *)a3);
  v18 = (CGlobalDrawingContext *)v13;
  v14 = (CGDISubSectionBitmapRealization *)v13;
  if ( !v13 )
  {
LABEL_7:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x36u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 8));
  v15 = CGDISubSectionBitmapRealization::EnsureBitmapCacheSource(v14);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x38u, 0LL);
  }
  else
  {
    v18 = 0LL;
    *a7 = (char *)v14 + 392;
  }
LABEL_8:
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(&v18);
  return v16;
}
