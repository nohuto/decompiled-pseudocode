/*
 * XREFs of ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x1802D5FCC
 * Callers:
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x180282FA4 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x1802D6250 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicFrameProcessor::Create(
        struct CComposition *a1,
        unsigned int a2,
        void *a3,
        enum DXGI_FORMAT a4,
        void *a5,
        unsigned int a6,
        struct CHolographicFrameProcessor **a7)
{
  CHolographicFrameProcessor *v10; // rax
  CHolographicFrameProcessor *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  enum DXGI_FORMAT v15; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (CHolographicFrameProcessor *)DefaultHeap::AllocClear(0x98uLL);
  v11 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  *((_DWORD *)v10 + 4) = 0;
  *(_QWORD *)v10 = &CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'};
  *((_QWORD *)v10 + 1) = &CHolographicFrameProcessor::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)v10 + 3) = &CHolographicFrameProcessor::`vftable'{for `IFlipPresentCallback'};
  *((_QWORD *)v10 + 4) = &CHolographicFrameProcessor::`vftable'{for `IFlipContentCallback'};
  *((_QWORD *)v10 + 5) = &CHolographicFrameProcessor::`vftable'{for `IHolographicWin32kInteropTexture'};
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 11) = 0LL;
  *((_QWORD *)v10 + 12) = 0LL;
  *((_QWORD *)v10 + 13) = 0LL;
  *((_QWORD *)v10 + 15) = 0LL;
  *((_QWORD *)v10 + 16) = 0LL;
  *((_QWORD *)v10 + 17) = 0LL;
  ((void (__fastcall *)(CHolographicFrameProcessor *))CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'})(v10);
  v12 = CHolographicFrameProcessor::Initialize(v11, a1, a2, a3, v15, (unsigned int)a5, a6);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x5Bu, 0LL);
    (*(void (__fastcall **)(CHolographicFrameProcessor *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    *a7 = v11;
  }
  return v13;
}
