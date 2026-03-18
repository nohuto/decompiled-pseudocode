/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x18021DA04
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028EE7C (--$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV-$com_ptr_t@VCVisualGroup@@Uerr_return.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *v6; // rbx
  __int64 Resource; // rax
  CResource **v9; // rsi
  CResource *v10; // rcx
  int v12; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xB9u);
    v6 = (struct CResource *)Resource;
    if ( Resource )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Resource + 8));
  }
  v9 = (CResource **)((char *)this + 2984);
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
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v10);
  }
  return v4;
}
