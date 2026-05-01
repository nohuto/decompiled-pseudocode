/*
 * XREFs of ??0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V?$optional@_N@std@@V?$optional@H@5@_N@Z @ 0x1804E9548
 * Callers:
 *     ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@9@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@std@@AEA_N@Z @ 0x1804E92D0 (--$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAU.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E1A08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DelayedTileActivationCallSite::DelayedTileActivationCallSite(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        __int64 a3,
        int a4,
        __int16 a5,
        __int64 a6,
        char a7)
{
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64); // rdi
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>(a1);
  *(_QWORD *)a1 = &DelayedTileActivationCallSite::`vftable'{for `IObjectWithSite'};
  *(_QWORD *)(a1 + 8) = &DelayedTileActivationCallSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::`vftable'{for `IUpdateViewValueSet'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 80) = &DelayedTileActivationCallSite::`vftable';
  *(_QWORD *)(a1 + 88) = &DelayedTileActivationCallSite::`vftable'{for `IShouldSwitchToDesktop'};
  *(_QWORD *)(a1 + 96) = &DelayedTileActivationCallSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppActivationUIInfo>'};
  *(_QWORD *)(a1 + 112) = a3;
  *(_DWORD *)(a1 + 120) = a4;
  *(_WORD *)(a1 + 124) = a5;
  *(_QWORD *)(a1 + 128) = a6;
  *(_BYTE *)(a1 + 136) = a7;
  if ( a2 )
  {
    v11 = **a2;
    v12 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = v11(a2, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, a1 + 72);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (int)"shellcommon\\internal\\composable\\inc\\CopyToViewValueSet.h",
        (const char *)(unsigned int)v13,
        v15);
  }
  return a1;
}
