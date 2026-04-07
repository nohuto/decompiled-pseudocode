/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x1800235C0
 * Callers:
 *     ?CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18008100C (-CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CBaseGeometryProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800236B0 (-InitializeFromSharedHandle@CBaseGeometryProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CResourceProxy@@IEAA@XZ @ 0x18002676C (--0CResourceProxy@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CBaseGeometryProxy>(
        __int64 a1,
        void *a2,
        CResourceProxy **a3)
{
  CResourceProxy *v6; // rbx
  CBaseGeometryProxy *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi

  *a3 = 0LL;
  v6 = (CResourceProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    CResourceProxy::CResourceProxy(v6);
    *(_QWORD *)v6 = &CTransform3dGroupProxy::`vftable';
    CMILRefCountBase::AddRef(v6);
    v8 = CBaseGeometryProxy::InitializeFromSharedHandle(v7, *(struct IDwmChannel **)(a1 + 24), a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x89u, 0LL);
    }
    else
    {
      *a3 = v6;
      v9 = 0;
    }
  }
  else
  {
    v6 = 0LL;
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x83u, 0LL);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
