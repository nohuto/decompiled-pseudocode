/*
 * XREFs of ??$CreateProxy@VCMatrixTransform3dProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800B5B38
 * Callers:
 *     ?CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800B61F8 (-CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseTransformProxy@@QEAA@XZ @ 0x18006A620 (--0CBaseTransformProxy@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CMatrixTransform3dProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800C9E04 (-Initialize@CMatrixTransform3dProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CMatrixTransform3dProxy>(__int64 a1, CBaseObject **a2)
{
  CBaseObject *v4; // rbx
  CMatrixTransform3dProxy *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CBaseObject *)DefaultHeap::AllocClear(0x18uLL);
  v9 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    CBaseTransformProxy::CBaseTransformProxy(v4);
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    v9 = v4;
    CMILRefCountBase::AddRef(v4);
    v6 = CMatrixTransform3dProxy::Initialize(v5, *(struct IDwmChannel **)(a1 + 24));
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v4;
      v7 = 0;
    }
  }
  else
  {
    v9 = 0LL;
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du, 0LL);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v9);
  return v7;
}
