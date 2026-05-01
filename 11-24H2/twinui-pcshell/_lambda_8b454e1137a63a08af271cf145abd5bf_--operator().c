/*
 * XREFs of _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x180511A00
 * Callers:
 *     wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___ @ 0x180511224 (wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x18006BC30 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x18006C11C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CC10 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E0F4C (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EFF60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1802B7C68 (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x1802BED74 (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802C2E5C (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x18051311C (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x18051515C (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_8b454e1137a63a08af271cf145abd5bf_::operator()(__int64 a1)
{
  __int64 *v2; // r15
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
  int v16; // eax
  struct IApplicationViewPosition **v18; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v19[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationView *v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v22; // [rsp+50h] [rbp-B8h] BYREF
  struct IApplicationViewPosition *v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v25[44]; // [rsp+68h] [rbp-A0h]
  struct tagRECT v26; // [rsp+98h] [rbp-70h] BYREF
  __int128 v27[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+D0h] [rbp-38h]
  _BYTE v30[40]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v31; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT v32; // [rsp+110h] [rbp+8h] BYREF
  struct tagRECT v33; // [rsp+128h] [rbp+20h] BYREF

  v2 = *(__int64 **)a1;
  v3 = *(struct IApplicationView ***)(a1 + 8);
  v20 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v23 = *(struct IApplicationViewPosition **)(*(_QWORD *)std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
                                                           v2 + 48,
                                                           (__int64)&v26,
                                                           &v20)
                                            + 40LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  v6 = v23;
  if ( v23 )
  {
LABEL_4:
    v22 = 0LL;
    v7 = *(struct IAppLayout ***)(a1 + 16);
    if ( *v7 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      if ( (int)CDesktopPositioner::_FixPositionForLayout(v8, *v3, *v7, v23, &v22) >= 0 )
        goto LABEL_9;
      v6 = v23;
    }
    if ( v22 != v6 )
    {
      v20 = v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      v20 = v22;
      v22 = v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    }
LABEL_9:
    v9 = 0;
    v10 = **(_DWORD **)(a1 + 24);
    if ( v10 == 4 )
    {
      v20 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v22,
                  (__int64 *)&v20) >= 0 )
      {
        LODWORD(v21) = 0;
        if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, &v21) >= 0
          && (_DWORD)v21 == 3 )
        {
          v31 = 0LL;
          if ( (*(int (__fastcall **)(struct IApplicationView *, struct tagRECT *))(*(_QWORD *)v20 + 56LL))(v20, &v31) >= 0 )
          {
            v32 = 0LL;
            CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v11, &v31, &v32);
            v33 = 0LL;
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
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      if ( v9 )
        goto LABEL_31;
    }
    else if ( v10 == 5 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      v19[0] = 0;
      if ( (int)CDesktopPositioner::IsWindowMinimizing(v15, **(struct IUnknown ***)(a1 + 40), v19) >= 0 && !v19[0] )
      {
        v20 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v22,
                    (__int64 *)&v20) >= 0 )
        {
          LODWORD(v21) = 0;
          if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, &v21) >= 0
            && (_DWORD)v21 == 1 )
          {
            memset(v30, 0, sizeof(v30));
            if ( (*(int (__fastcall **)(struct IApplicationView *, _BYTE *))(*(_QWORD *)v20 + 72LL))(v20, v30) >= 0 )
            {
              *(_DWORD *)v25 = 44;
              *(_OWORD *)&v25[4] = *(_OWORD *)v30;
              *(_QWORD *)&v25[20] = *(_QWORD *)&v30[16];
              *(_OWORD *)&v25[28] = *(_OWORD *)&v30[24];
              v27[0] = *(_OWORD *)v25;
              v27[1] = *(_OWORD *)&v25[16];
              v28 = *(_OWORD *)&v30[24] >> 32;
              v29 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v30[24], 12));
              DWORD2(v27[0]) = 1;
              v24 = 0;
              if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v20 + 64LL))(v20, &v24) >= 0 )
              {
                v16 = 1;
                if ( v24 == 1 )
                  v16 = 3;
                DWORD2(v27[0]) = v16;
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
              Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
                &v20,
                v27);
              Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(
                (__int64 *)&v22,
                &v20);
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 96LL))(**(_QWORD **)(a1 + 32), 1LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      }
    }
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(***(_QWORD ***)(a1 + 32) + 80LL))(
      **(_QWORD **)(a1 + 32),
      v22);
LABEL_31:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  if ( (int)CDesktopPositioner::_GetRestorePosition((CDesktopPositioner *)v2, *v3, 0LL, &v23) >= 0 )
  {
    v6 = v23;
    goto LABEL_4;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
}
