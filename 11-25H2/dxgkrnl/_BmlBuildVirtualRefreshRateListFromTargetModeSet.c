/*
 * XREFs of _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x140262A9C
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x14039C56C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14003EA2C (-GetNextMode@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x140262454 (_lambda_f7629139d0209e148fddfe9121e39862_--operator().c)
 */

__int64 __fastcall BmlBuildVirtualRefreshRateListFromTargetModeSet(
        DMMVIDPNTARGETMODESET *this,
        unsigned __int64 *a2,
        void **a3,
        __int64 a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 result; // rax
  _OWORD *v11; // rax
  DMMVIDPNTARGETMODESET *v12; // rbx
  const struct DMMVIDPNTARGETMODE *i; // rbx
  unsigned __int64 *v14[5]; // [rsp+20h] [rbp-28h] BYREF
  D3DDDI_RATIONAL PresentationVSync; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v6 = *((_QWORD *)this + 8) + 8LL;
  v8 = 8 * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x4B677844u, 256LL, a4);
  if ( (void *)v9 != *a3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*a3);
  *a3 = (void *)v9;
  if ( v9 )
  {
    if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(*((_QWORD *)this + 14) + 96LL)
                                                                         + 80LL)) )
    {
      *a2 = 7LL;
      v11 = *a3;
      *v11 = xmmword_14012C3E8;
      v11[1] = xmmword_14012C3F8;
      v11[2] = xmmword_14012C408;
      *((_QWORD *)v11 + 6) = 0x6400000960LL;
    }
    v14[1] = (unsigned __int64 *)a3;
    v12 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
    v14[0] = a2;
    if ( v12 != (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    {
      for ( i = (DMMVIDPNTARGETMODESET *)((char *)v12 - 8); i; i = DMMVIDPNTARGETMODESET::GetNextMode(this, i) )
      {
        PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)i + 72));
        lambda_f7629139d0209e148fddfe9121e39862_::operator()(v14, &PresentationVSync);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, v6);
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 6470;
  }
  return result;
}
