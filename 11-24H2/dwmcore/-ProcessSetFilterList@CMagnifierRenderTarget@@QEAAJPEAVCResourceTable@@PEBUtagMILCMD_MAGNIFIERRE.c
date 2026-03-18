/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1802125B8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802838E4 (--$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV-$com_ptr_t@VCVisualGroup@@Uerr_return.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CResource *v6; // rbx
  __int64 Resource; // rax
  CCachedVisualImage **v9; // rsi
  CCachedVisualImage *v10; // rcx
  int v12; // eax

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  v6 = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xBBu);
    v6 = (struct CResource *)Resource;
    if ( Resource )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Resource + 8));
  }
  v9 = (CCachedVisualImage **)((char *)this + 2984);
  if ( v6 != *((struct CResource **)this + 373) )
  {
    v12 = CResource::RegisterNotifier(this, v6);
    v4 = v12;
    if ( v12 >= 0 )
    {
      CResource::UnRegisterNotifier<CVisualGroup>(this, (char *)this + 2984);
      v10 = *v9;
      *v9 = v6;
      if ( !v10 )
        return v4;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x13Fu, 0LL);
  }
  if ( v6 )
  {
    v10 = v6;
LABEL_7:
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v10, v5, (__int64)a3);
  }
  return v4;
}
