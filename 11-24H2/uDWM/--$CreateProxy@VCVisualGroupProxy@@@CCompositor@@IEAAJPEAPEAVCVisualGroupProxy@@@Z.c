/*
 * XREFs of ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5CE8
 * Callers:
 *     ?CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B6234 (-CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroupProxy@@@Z @ 0x180064144 (--4-$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup.c)
 *     ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006784C (--0CBaseGeometryProxy@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CVisualGroupProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800EC690 (-Initialize@CVisualGroupProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CVisualGroupProxy>(__int64 a1, CVisualGroupProxy **a2)
{
  CBaseGeometryProxy *v4; // rax
  CVisualGroupProxy *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  CVisualGroupProxy *v9; // [rsp+48h] [rbp+10h] BYREF
  CBaseGeometryProxy *v10; // [rsp+50h] [rbp+18h]

  *a2 = 0LL;
  v9 = 0LL;
  v4 = (CBaseGeometryProxy *)DefaultHeap::AllocClear(0x18uLL);
  v10 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    v4 = CBaseGeometryProxy::CBaseGeometryProxy(v4);
  }
  wil::com_ptr_t<CVisualGroupProxy,wil::err_returncode_policy>::operator=(&v9, v4);
  v5 = v9;
  if ( v9 )
  {
    v7 = CVisualGroupProxy::Initialize(v9, *(struct IDwmChannel **)(a1 + 24));
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v5;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du, 0LL);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v9);
  return v6;
}
