/*
 * XREFs of ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D15D4
 * Callers:
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z @ 0x1802C2C2C (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801A8EB0 (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1802CF8DC (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802D17C8 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDDASwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct CDDASwapChain **a5)
{
  char *v9; // rax
  char *v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // esi

  *a5 = 0LL;
  v9 = (char *)operator new(0xB8uLL);
  v10 = v9;
  if ( v9 )
  {
    CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>((__int64)v9);
    *((_QWORD *)v10 + 1) = &CDDASwapChain::`vftable'{for `IPixelFormat'};
    *(_QWORD *)v10 = &CDDASwapChain::`vftable'{for `IDeviceResource'};
    *((_QWORD *)v10 + 6) = &CDDASwapChain::`vftable';
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      (_QWORD *)v10 + 7,
      (__int64)a2);
    *((_QWORD *)v10 + 8) = 0LL;
    *((_QWORD *)v10 + 9) = *(_QWORD *)a3;
    *((_DWORD *)v10 + 20) = *((_DWORD *)a3 + 2);
    *(_OWORD *)(v10 + 84) = *(_OWORD *)a4;
    *(_QWORD *)(v10 + 100) = *((_QWORD *)a4 + 2);
    *((_QWORD *)v10 + 14) = v10 + 120;
    *((_DWORD *)v10 + 30) = 0;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 16));
    v11 = (__int64)v10;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  v12 = CDDASwapChain::Initialize((CDDASwapChain *)v10, a1);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1Au, 0LL);
    if ( v11 )
      CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease(v11);
  }
  else
  {
    *a5 = (struct CDDASwapChain *)v10;
  }
  return v13;
}
