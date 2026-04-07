/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5F88
 * Callers:
 *     ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B6240 (-CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroupProxy@@@Z @ 0x180064144 (--4-$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup.c)
 *     ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006784C (--0CBaseGeometryProxy@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InitializeFromSharedHandle@CVisualGroupProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800EC6DC (-InitializeFromSharedHandle@CVisualGroupProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualGroupProxy>(
        __int64 a1,
        void *a2,
        CVisualGroupProxy **a3)
{
  CBaseGeometryProxy *v6; // rax
  CVisualGroupProxy *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  CVisualGroupProxy *v11; // [rsp+60h] [rbp+18h] BYREF
  CBaseGeometryProxy *v12; // [rsp+68h] [rbp+20h]

  *a3 = 0LL;
  v11 = 0LL;
  v6 = (CBaseGeometryProxy *)DefaultHeap::AllocClear(0x18uLL);
  v12 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    v6 = CBaseGeometryProxy::CBaseGeometryProxy(v6);
  }
  wil::com_ptr_t<CVisualGroupProxy,wil::err_returncode_policy>::operator=(&v11, v6);
  v7 = v11;
  if ( v11 )
  {
    v9 = CVisualGroupProxy::InitializeFromSharedHandle(v11, *(struct IDwmChannel **)(a1 + 24), a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x89u, 0LL);
    }
    else
    {
      *a3 = v7;
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x83u, 0LL);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
  return v8;
}
