/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180100738
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180101BC0 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18010059C (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180256154 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        _QWORD *a6)
{
  LPVOID v9; // rax
  __int64 v10; // rax
  CDxHandleYUVBitmapRealization *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi

  v9 = operator new(0x190uLL);
  if ( !v9 )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  v10 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization((__int64)v9, a1, a2, a3);
  v11 = (CDxHandleYUVBitmapRealization *)v10;
  if ( !v10 )
  {
LABEL_7:
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Eu, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 8));
  v12 = CDxHandleYUVBitmapRealization::Initialize(v11, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a6 = (char *)v11 + 328;
    return v13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1Fu, 0LL);
  *((_QWORD *)v11 + 32) = 0LL;
LABEL_8:
  *a6 = 0LL;
  if ( v11 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v11);
  return v13;
}
