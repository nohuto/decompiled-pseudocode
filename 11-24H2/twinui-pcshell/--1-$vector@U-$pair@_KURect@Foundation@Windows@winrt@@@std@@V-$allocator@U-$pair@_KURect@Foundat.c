/*
 * XREFs of ??1?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x18035FA40
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@@std@@QEAA@XZ @ 0x1803479C0 (--1-$_Tidy_guard@V-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMA.c)
 *     ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x18034E51C (-GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803DFDA4 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 *     ??1?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAA@XZ @ 0x1803DFF28 (--1-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo@.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803DFFB8 (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 *     ??4?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803DFFFC (--4-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo@.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindows_::_1_::dtor$0 @ 0x1806F9066 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F9066.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
