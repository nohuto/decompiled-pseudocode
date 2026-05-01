/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180175CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z @ 0x1800E7FD0 (--$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18011C760 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180175F78 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceConditi.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180176120 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  char v7; // bp
  char v8; // r14
  bool v10; // di
  HWND ForegroundWindow; // rax
  enum _TABLETMODESTATE *v12; // rdx
  TabletModeHelpers *v13; // rcx
  void (*v14)(void); // rax
  int v15[14]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  if ( *(_QWORD *)(a1 + 48) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) )
    {
      v7 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48)) )
        {
          return 0LL;
        }
      }
      v10 = 1;
      ForegroundWindow = GetForegroundWindow();
      v16 = 0;
      if ( (unsigned int)GetWindowBand(ForegroundWindow, &v16) )
        v10 = v16 != 13;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
        && v16 == 6
        && a3 == 6 )
      {
        v10 = 0;
      }
      if ( !v8
        && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48))
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))) )
      {
        v7 = 0;
      }
      if ( !v10 )
        return 0LL;
      if ( v7 && (unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) )
      {
        v15[0] = a5;
        StartWindowTelemetry::StartDismissedByZBandChange<unsigned long &,unsigned long &,int>(&v17, (int *)&v18, v15);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
        || !(unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) && a3 != 6 )
      {
        return 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
      {
        if ( TabletModeHelpers::IsTabletMode(v13, v12)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
        {
          return 0LL;
        }
        v14 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 96LL);
        goto LABEL_23;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
      {
        v14 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 80LL);
LABEL_23:
        v14();
      }
    }
    return 0LL;
  }
  return 2147943568LL;
}
