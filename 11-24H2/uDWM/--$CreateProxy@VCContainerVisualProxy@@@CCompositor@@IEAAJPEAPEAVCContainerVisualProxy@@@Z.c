/*
 * XREFs of ??$CreateProxy@VCContainerVisualProxy@@@CCompositor@@IEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x180025A00
 * Callers:
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18002E620 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800254F0 (-Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CVisualProxy@@QEAA@XZ @ 0x1800259D8 (--0CVisualProxy@@QEAA@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CContainerVisualProxy>(__int64 a1, CMILRefCountBase **a2)
{
  CMILRefCountBase *v4; // rax
  CMILRefCountBase *v5; // rbx
  CVisualProxy *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi

  *a2 = 0LL;
  v4 = (CMILRefCountBase *)DefaultHeap::AllocClear(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    CVisualProxy::CVisualProxy(v4);
    *(_QWORD *)v5 = &CRedirectVisualProxy::`vftable';
    CMILRefCountBase::AddRef(v5);
    v7 = CVisualProxy::Initialize(v6, *(struct IDwmChannel **)(a1 + 24));
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v5;
      v8 = 0;
    }
  }
  else
  {
    v5 = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Du, 0LL);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v8;
}
