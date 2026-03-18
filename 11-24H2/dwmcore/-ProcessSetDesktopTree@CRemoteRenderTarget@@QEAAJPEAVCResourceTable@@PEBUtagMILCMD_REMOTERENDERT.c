/*
 * XREFs of ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1802805B4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x18018AB78 (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x18021D0E0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::ProcessSetDesktopTree(
        CCachedVisualImage **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisualTree *Resource; // rdi

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CVisualTree *)CResourceTable::GetResource((__int64)a2, v5, 0x36u)) != 0LL )
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(this + 26, (__int64)Resource, (__int64)a3);
    CRenderTarget::SetVisualTree((CRenderTarget *)this, Resource);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x29u, 0LL);
  }
  return v4;
}
