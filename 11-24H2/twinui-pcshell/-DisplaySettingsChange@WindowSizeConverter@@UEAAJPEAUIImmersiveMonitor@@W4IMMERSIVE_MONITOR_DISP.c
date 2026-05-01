/*
 * XREFs of ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18006AA50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006AB58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovemen.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x18006B63C (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800B2DD8 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18029E8D0 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     wil::ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___ @ 0x1804EA714 (wil--ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  __int64 v6; // rdx
  WindowSizeConverter *v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationFrame *v10; // [rsp+50h] [rbp+20h] BYREF
  int v11; // [rsp+68h] [rbp+38h] BYREF

  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 + 24)) )
  {
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::GetImpl'::`2'::impl,
      v6);
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( *(_DWORD *)(a1 + 56) )
      {
        if ( (a3 & 0x20) != 0 )
        {
          LODWORD(v10) = 0;
          if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)a2 + 48LL))(
                 a2,
                 &v10) >= 0 )
          {
            if ( (_DWORD)v10 )
            {
              WindowSizeConverter::EnsureEntry((WindowSizeConverter *)(a1 - 96), a2);
            }
            else
            {
              v11 = 0;
              if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v11) >= 0 )
              {
                v9[0] = a1 - 96;
                v9[1] = &v11;
                wil::ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___(v9);
              }
            }
          }
        }
        if ( (a3 & 0x10) != 0 )
        {
          v10 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
          if ( (int)WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)(a1 - 96), a2, &v10) >= 0 )
            WindowSizeConverter::EnsurePosition(v8, a2, v10);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
        }
      }
    }
  }
  return 0LL;
}
