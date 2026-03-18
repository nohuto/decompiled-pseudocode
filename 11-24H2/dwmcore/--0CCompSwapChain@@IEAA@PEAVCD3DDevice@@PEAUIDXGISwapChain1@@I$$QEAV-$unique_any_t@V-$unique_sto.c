/*
 * XREFs of ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x1802C74B8
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802C7878 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 * Callees:
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x18021CD6C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1802C6664 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::CCompSwapChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v11; // rdx
  __int64 v12; // xmm1_8

  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>(a1);
  *(_QWORD *)(a1 + 8) = &CCompSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)a1 = &CCompSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 48) = &CCompSwapChain::`vftable';
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 56),
    v11);
  *(_QWORD *)(a1 + 64) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_QWORD *)(a1 + 72) = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = a4;
  *(_QWORD *)(a1 + 108) = *(_QWORD *)a6;
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a6 + 8);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)a7;
  v12 = *(_QWORD *)(a7 + 16);
  *(_DWORD *)(a1 + 144) = a8;
  *(_QWORD *)(a1 + 136) = v12;
  *(_QWORD *)(a1 + 152) = a1 + 160;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 224) = a1 + 232;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 296) = a1 + 304;
  *(_DWORD *)(a1 + 304) = 0;
  return a1;
}
