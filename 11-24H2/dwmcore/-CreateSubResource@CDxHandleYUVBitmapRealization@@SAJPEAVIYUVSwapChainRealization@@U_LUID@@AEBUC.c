/*
 * XREFs of ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180225D60
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801A59B4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801A7100 (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180225C1C (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x18024AD88 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResource(
        struct IYUVSwapChainRealization *a1,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5,
        struct ISwapChainRealization **a6)
{
  CDxHandleYUVBitmapRealization *v6; // rbx
  __int64 v11; // rax
  int v12; // edi
  unsigned int v13; // eax
  CDxHandleYUVBitmapRealization *v14; // rcx
  struct ISwapChainRealization *v15; // rdx
  CDxHandleYUVBitmapRealization *v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  if ( a1
    && !(*(unsigned int (__fastcall **)(struct IYUVSwapChainRealization *))(*(_QWORD *)a1 + 272LL))(a1)
    && *((_DWORD *)a4 + 8) )
  {
    v11 = (__int64)operator new(0x190uLL);
    if ( v11 )
      v11 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
              v11,
              *((_DWORD *)a1 - 7),
              *(_QWORD *)&a2,
              (__int64)a3,
              (__int64)a4,
              (__int64)a5);
    wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(&v17, v11);
    v6 = v17;
    if ( v17 )
    {
      v12 = CDxHandleYUVBitmapRealization::Initialize(v17, a1);
      if ( v12 >= 0 )
      {
        v14 = v6;
        v6 = 0LL;
        v15 = (struct ISwapChainRealization *)(((unsigned __int64)v14 + 328) & -(__int64)(v14 != 0LL));
        goto LABEL_15;
      }
      v13 = 81;
    }
    else
    {
      v12 = -2147024882;
      v13 = 79;
    }
  }
  else
  {
    v12 = -2147024809;
    v13 = 85;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
  if ( v6 )
    *((_QWORD *)v6 + 32) = 0LL;
  v15 = 0LL;
LABEL_15:
  *a6 = v15;
  if ( v6 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v6);
  return (unsigned int)v12;
}
