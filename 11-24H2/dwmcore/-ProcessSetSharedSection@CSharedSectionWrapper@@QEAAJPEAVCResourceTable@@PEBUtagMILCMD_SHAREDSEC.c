/*
 * XREFs of ?ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION@@@Z @ 0x1802A6414
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSharedSectionWrapper::ProcessSetSharedSection(
        CSharedSectionWrapper *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION *a3)
{
  __int64 Resource; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  CCachedVisualImage *v9; // rcx
  CCachedVisualImage *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x9Du);
  if ( Resource )
  {
    v10 = (CCachedVisualImage *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = Resource;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Resource + 8));
    if ( v10 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v10, v11, v12);
    *((_DWORD *)this + 20) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 21) = *((_DWORD *)a3 + 4);
    (*(void (__fastcall **)(CSharedSectionWrapper *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    return 0;
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1Du, 0LL);
    v9 = (CCachedVisualImage *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v9 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v9, v7, v8);
  }
  return v6;
}
