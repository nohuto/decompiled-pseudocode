/*
 * XREFs of _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x1805B274C
 * Callers:
 *     wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___ @ 0x1805B2420 (wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x180074FC4 (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180075654 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180076B80 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180076D54 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x180077808 (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018BFE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1805B39F4 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1805B51A0 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_8b454e1137a63a08af271cf145abd5bf_::operator()(__int64 a1)
{
  IUnknown *v2; // r15
  struct IApplicationView **v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  struct IApplicationViewPosition *v6; // rbx
  struct IAppLayout **v7; // r14
  CDesktopPositioner *v8; // rcx
  char v9; // di
  int v10; // ecx
  CDesktopPositioner *v11; // rcx
  __int64 **v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rax
  CDesktopPositioner *v15; // rcx
  UINT v16; // eax
  struct IApplicationViewPosition **v18; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v19[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationView *v20; // [rsp+40h] [rbp-C8h] BYREF
  struct IApplicationViewPosition *v21; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v25[44]; // [rsp+60h] [rbp-A8h]
  struct tagRECT v26; // [rsp+98h] [rbp-70h] BYREF
  struct tagWINDOWPLACEMENT v27; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v28[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-28h]
  __m128i v30; // [rsp+F0h] [rbp-18h]
  struct tagRECT v31; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT v32; // [rsp+110h] [rbp+8h] BYREF
  struct tagRECT v33; // [rsp+128h] [rbp+20h] BYREF

  v2 = *(IUnknown **)a1;
  v3 = *(struct IApplicationView ***)(a1 + 8);
  v20 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v22 = *(struct IApplicationViewPosition **)(*(_QWORD *)std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
                                                           &v2[49].lpVtbl,
                                                           (__int64)&v26)
                                            + 40LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  v6 = v22;
  if ( v22 )
  {
LABEL_4:
    v21 = 0LL;
    v7 = *(struct IAppLayout ***)(a1 + 16);
    if ( *v7 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
      if ( (int)CDesktopPositioner::_FixPositionForLayout(v8, *v3, *v7, v22, &v21) >= 0 )
        goto LABEL_9;
      v6 = v22;
    }
    if ( v21 != v6 )
    {
      v20 = v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      v20 = v21;
      v21 = v6;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    }
LABEL_9:
    v9 = 0;
    v10 = **(_DWORD **)(a1 + 24);
    if ( v10 == 3 )
    {
      v20 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
                  (__int64 *)&v20) >= 0
        && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v20 + 32LL))(v20, &v23) >= 0
        && v23 == 3
        && (*(int (__fastcall **)(struct IApplicationView *, struct tagRECT *))(*(_QWORD *)v20 + 56LL))(v20, &v31) >= 0 )
      {
        CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v11, &v31, &v32);
        v9 = 1;
        CDesktopPositioner::_FixRectForWorkArea((__int64)v2, 1, &v32.left, 0LL, (__int64)v18, &v33);
        v12 = *(__int64 ***)(a1 + 32);
        (*(void (__fastcall **)(__int64 *, __int64))(**v12 + 48))(*v12, 3LL);
        v13 = *v12;
        v14 = **v12;
        v26 = v33;
        (*(void (__fastcall **)(__int64 *, struct tagRECT *))(v14 + 56))(v13, &v26);
        (*(void (__fastcall **)(__int64 *, __int64))(**v12 + 72))(*v12, 1LL);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      if ( v9 )
        goto LABEL_31;
    }
    else if ( v10 == 4 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      v19[0] = 0;
      if ( (int)CDesktopPositioner::IsWindowMinimizing(v15, **(struct IUnknown ***)(a1 + 40), v19) >= 0 && !v19[0] )
      {
        v20 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
                    (__int64 *)&v20) >= 0
          && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v20 + 32LL))(v20, &v23) >= 0
          && v23 == 1
          && (*(int (__fastcall **)(struct IApplicationView *, _DWORD *))(*(_QWORD *)v20 + 72LL))(v20, v28) >= 0 )
        {
          *(_DWORD *)v25 = 44;
          *(_DWORD *)&v25[4] = v28[0];
          *(_DWORD *)&v25[8] = v28[1];
          *(_OWORD *)&v25[12] = v29;
          *(__m128i *)&v25[28] = v30;
          *(_OWORD *)&v27.length = *(_OWORD *)v25;
          *(_OWORD *)&v27.ptMinPosition.y = *(_OWORD *)&v25[16];
          *(_QWORD *)&v27.rcNormalPosition.top = *(__int64 *)((char *)v30.m128i_i64 + 4);
          v27.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v30, 12));
          v27.showCmd = 1;
          if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v20 + 64LL))(v20, &v24) >= 0 )
          {
            v16 = 1;
            if ( v24 == 1 )
              v16 = 3;
            v27.showCmd = v16;
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
          Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
            (void **)&v20,
            &v27);
          Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(
            (__int64 *)&v21,
            (__int64 *)&v20);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 96LL))(**(_QWORD **)(a1 + 32), 1LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      }
    }
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(***(_QWORD ***)(a1 + 32) + 80LL))(
      **(_QWORD **)(a1 + 32),
      v21);
LABEL_31:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  if ( (int)CDesktopPositioner::_GetRestorePosition(v2, *v3, 0LL, &v22) >= 0 )
  {
    v6 = v22;
    goto LABEL_4;
  }
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
}
