/*
 * XREFs of ??$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVSetLockScreenHotspotsService@Actions@CreativeFramework@@@Z @ 0x180097F28
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009AF90 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800A1CC0 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x18005BA8C (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 */

void __fastcall std::shared_ptr<CreativeFramework::Actions::IActionService>::_Resetp<CreativeFramework::Actions::SetLockScreenHotspotsService>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *v4; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<CreativeFramework::Actions::AppInstallService>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, (__int64)a2, (__int64)v4);
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
}
