/*
 * XREFs of _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026999C
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402DC488 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14003DF00 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049918 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x140269354 (_lambda_f7629139d0209e148fddfe9121e39862_--operator().c)
 */

__int64 __fastcall BmlBuildVirtualRefreshRateListFromTargetModeSet(
        DMMVIDPNTARGETMODESET *this,
        unsigned __int64 *a2,
        void **a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  _OWORD *v10; // rax
  DMMVIDPNTARGETMODESET *v11; // rbx
  const struct DMMVIDPNTARGETMODE *i; // rbx
  unsigned __int64 *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  D3DDDI_RATIONAL PresentationVSync; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = *((_QWORD *)this + 8) + 8LL;
  v7 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4B677844u, 256LL);
  if ( (void *)v8 != *a3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*a3);
  *a3 = (void *)v8;
  if ( v8 )
  {
    if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(*((_QWORD *)this + 14) + 96LL)
                                                                         + 80LL)) )
    {
      *a2 = 7LL;
      v10 = *a3;
      *v10 = xmmword_14012E958;
      v10[1] = xmmword_14012E968;
      v10[2] = xmmword_14012E978;
      *((_QWORD *)v10 + 6) = 0x6400000960LL;
    }
    v13[1] = (unsigned __int64 *)a3;
    v11 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
    v13[0] = a2;
    if ( v11 != (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    {
      for ( i = (DMMVIDPNTARGETMODESET *)((char *)v11 - 8); i; i = DMMVIDPNTARGETMODESET::GetNextMode(this, i) )
      {
        PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)i + 72));
        lambda_f7629139d0209e148fddfe9121e39862_::operator()(v13, &PresentationVSync);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 6512;
  }
  return result;
}
