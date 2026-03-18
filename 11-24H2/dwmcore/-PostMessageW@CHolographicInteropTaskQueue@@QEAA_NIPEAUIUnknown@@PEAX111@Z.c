/*
 * XREFs of ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x180212670 (-ToggleSuspension@CHolographicManager@@UEAAX_N@Z.c)
 *     ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CE61C (-AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802CE6E4 (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802CE7FC (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802CE89C (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802CE9E0 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802CEB40 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z @ 0x1802CEC74 (-AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802CED04 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802CF294 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1802CF714 (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802CF974 (-PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802CF9C0 (-PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802CFA0C (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802CFA50 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CFAF4 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802CFBAC (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802CFC50 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802CFD3C (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802CFE2C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802D0590 (-RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x1802D0C70 (-WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z.c)
 *     ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D0DF0 (-DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1802D0F84 (-ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAP.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802D1338 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802D2390 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802D2408 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802D3A40 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D55C4 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1802D5C00 (-SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z.c)
 *     ?Remove@CHolographicFrameProcessor@@UEAAXXZ @ 0x1802D6730 (-Remove@CHolographicFrameProcessor@@UEAAXXZ.c)
 *     ?SetSize@CHolographicFrameProcessor@@UEAAJII@Z @ 0x1802D67E0 (-SetSize@CHolographicFrameProcessor@@UEAAJII@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x18007BF7C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CHolographicInteropTaskQueue::PostMessageW(
        CHolographicInteropTaskQueue *this,
        int a2,
        struct _SLIST_ENTRY *a3,
        void *a4,
        struct _SLIST_ENTRY *a5,
        void *a6,
        struct _SLIST_ENTRY *a7)
{
  char v11; // di
  PSLIST_ENTRY v12; // rbx
  struct _SLIST_ENTRY *v13; // rax

  v11 = 0;
  v12 = InterlockedPopEntrySList((PSLIST_HEADER)this + 2);
  if ( !v12 )
  {
    v13 = (struct _SLIST_ENTRY *)operator new(0x40uLL);
    v12 = v13;
    if ( !v13 )
      return v11;
    memset_0(v13, 0, 0x40uLL);
    memset_0(v12, 0, 0x40uLL);
  }
  *((_DWORD *)&v12->Next + 2) = a2;
  v12[1].Next = a3;
  if ( a3 )
    (*((void (__fastcall **)(struct _SLIST_ENTRY *))&a3->Next->Next + 1))(a3);
  v12[2].Next = a5;
  *((_QWORD *)&v12[2].Next + 1) = a6;
  v12[3].Next = a7;
  *((_QWORD *)&v12[1].Next + 1) = a4;
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, v12);
  _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ((HANDLE *)this + 6);
  return 1;
}
