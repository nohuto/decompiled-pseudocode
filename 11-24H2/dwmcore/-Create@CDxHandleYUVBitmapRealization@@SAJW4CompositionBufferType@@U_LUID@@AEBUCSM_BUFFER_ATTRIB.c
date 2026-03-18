/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801A6F44
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801A59B4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801A7100 (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x18024AD88 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        _QWORD *a6)
{
  LPVOID v10; // rax
  __int64 v11; // rax
  CDxHandleYUVBitmapRealization *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi

  v10 = operator new(0x190uLL);
  if ( !v10 )
  {
    v12 = 0LL;
    goto LABEL_7;
  }
  v11 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, a1, a2, a3, a4, a5);
  v12 = (CDxHandleYUVBitmapRealization *)v11;
  if ( !v11 )
  {
LABEL_7:
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Eu, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
  v13 = CDxHandleYUVBitmapRealization::Initialize(v12, 0LL);
  v14 = v13;
  if ( v13 >= 0 )
  {
    *a6 = (char *)v12 + 328;
    return v14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1Fu, 0LL);
  *((_QWORD *)v12 + 32) = 0LL;
LABEL_8:
  *a6 = 0LL;
  if ( v12 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v12);
  return v14;
}
