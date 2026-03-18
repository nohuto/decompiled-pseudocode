/*
 * XREFs of ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1802901DC
 * Callers:
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x18020F620 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18028A1E0 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x18028B060 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C1BCC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x1800C1E54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801A8D4C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x18022895C (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x18029004C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 */

__int64 __fastcall CDDARenderTarget::Create(
        struct IDXGIOutputDWM *a1,
        struct CDesktopTree *a2,
        const struct RenderTargetInfo *a3,
        const struct CMonitorTransform *a4,
        struct CDDARenderTarget **a5)
{
  struct CDDARenderTarget **v5; // rsi
  CDDARenderTarget *v10; // rax
  struct CDDARenderTarget **v11; // rax
  CResource **v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // r8
  int v15; // r9d

  v5 = a5;
  *a5 = 0LL;
  v10 = (CDDARenderTarget *)DefaultHeap::AllocClear(0xAF8uLL);
  if ( !v10 )
  {
    a5 = 0LL;
    goto LABEL_5;
  }
  v11 = (struct CDDARenderTarget **)CDDARenderTarget::CDDARenderTarget(v10, a1, a3);
  a5 = v11;
  v12 = v11;
  if ( !v11 )
  {
LABEL_5:
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    goto LABEL_6;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 1));
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(v12 + 23, (__int64)a2);
  CRenderTarget::SetVisualTree((CRenderTarget *)v12, a2);
  CRenderTarget::AddToRenderTargetManager((CRenderTarget *)v12);
  v13 = 0;
  CDDARenderTarget::UpdateTransform((CDDARenderTarget *)v12, a4, v14, v15);
  a5 = 0LL;
  *v5 = (struct CDDARenderTarget *)v12;
LABEL_6:
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)&a5);
  return v13;
}
