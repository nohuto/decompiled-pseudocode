/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180023C74
 * Callers:
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180039310 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x180023544 (-InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ??0CVisualProxy@@QEAA@XZ @ 0x1800259D8 (--0CVisualProxy@@QEAA@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(__int64 a1, void *a2, CBaseObject **a3)
{
  CVisualProxy *v6; // rax
  CMILRefCountBase *v7; // rax
  CBaseObject *v8; // rbx
  CVisualProxy *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi

  *a3 = 0LL;
  v6 = (CVisualProxy *)DefaultHeap::AllocClear(0x20uLL);
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  *(_OWORD *)v6 = 0LL;
  *((_OWORD *)v6 + 1) = 0LL;
  v7 = CVisualProxy::CVisualProxy(v6);
  v8 = v7;
  if ( !v7 )
  {
LABEL_9:
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x83u, 0LL);
    goto LABEL_5;
  }
  CMILRefCountBase::AddRef(v7);
  v10 = CVisualProxy::InitializeFromSharedHandle(v9, *(struct IDwmChannel **)(a1 + 24), a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x89u, 0LL);
  }
  else
  {
    *a3 = v8;
    v11 = 0;
  }
LABEL_5:
  if ( v8 )
    CBaseObject::Release(v8);
  return v11;
}
