/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAY0CA@G@Z @ 0x180343254
 * Callers:
 *     ?MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18022DE50 (-MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x180230580 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803447B0 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18035EE98 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 */

char *__fastcall std::vector<std::wstring>::_Emplace_reallocate<unsigned short (&)[32]>(
        __int64 *a1,
        __int64 a2,
        _WORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  size_t size_of; // rax
  void **v10; // rdi
  char *v11; // rsi
  __int64 v12; // rdx
  void **v13; // r8
  __int64 v14; // rcx
  void **v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v17 = v7 + 1;
  v8 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<32>(v8);
  v10 = (void **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = (char *)v10 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  try
  {
    std::wstring::wstring((char **)v11, a3);
    v16 = (void **)v11;
    v12 = a1[1];
    v13 = v10;
    v14 = *a1;
    if ( a2 != v12 )
    {
      std::_Uninitialized_move<std::wstring *>(v14, a2, v10);
      v16 = v10;
      v13 = (void **)(v11 + 32);
      v12 = a1[1];
      v14 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v14, v12, v13);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v16, (void **)v11 + 4);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(32 * v8));
    throw;
  }
  std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v10, v17, v8);
  return v11;
}
