/*
 * XREFs of ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1802CB9C4
 * Callers:
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802CBC20 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x18021CD6C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1802C6664 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::CLegacyRemotingSwapChain(
        CLegacyRemotingSwapChain *this,
        struct CD3DDevice *a2,
        const struct _UNSIGNED_RATIO *a3,
        struct IRenderTargetBitmap *a4,
        void *a5,
        HINSTANCE a6)
{
  __int64 v9; // rdx
  __int64 v10; // rax

  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>((__int64)this);
  *((_QWORD *)this + 1) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 6) = &CLegacyRemotingSwapChain::`vftable';
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (_QWORD *)this + 7,
    v9);
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)this + 8,
    (__int64)a4);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = a6;
  v10 = (__int64)*a3;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = v10;
  *((_QWORD *)this + 14) = (char *)this + 120;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 23) = a5;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = a5 != 0LL;
  return this;
}
