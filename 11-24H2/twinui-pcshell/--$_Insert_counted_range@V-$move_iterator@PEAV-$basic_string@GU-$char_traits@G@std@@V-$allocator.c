/*
 * XREFs of ??$_Insert_counted_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@_K@Z @ 0x180570EE8
 * Callers:
 *     ?GetActiveApps@AppUsageTracker@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x180571380 (-GetActiveApps@AppUsageTracker@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18014AEF8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x180230580 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180343DA0 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803447B0 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18035EE98 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ??$_Uninitialized_copy_n@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@_KPEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1805710DC (--$_Uninitialized_copy_n@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

void __fastcall std::vector<std::wstring>::_Insert_counted_range<std::move_iterator<std::wstring *>>(
        _QWORD *a1,
        void **a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 *v8; // r12
  char *v9; // rsi
  void **v10; // r15
  __int64 v11; // rcx
  size_t size_of; // rax
  void **v13; // r12
  __int64 v14; // rdx
  void **v15; // rsi
  __int64 v16; // r8
  void **v17; // rcx
  __int64 v18; // rcx
  void **v19; // r13
  __int64 v20; // rsi
  char *v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp+8h]
  void **v24; // [rsp+88h] [rbp+10h]
  void **v25; // [rsp+98h] [rbp+20h]

  v8 = a1 + 1;
  v9 = (char *)*a1;
  v21 = (char *)*a1;
  v10 = (void **)a1[1];
  if ( a4 )
  {
    if ( a4 <= (__int64)(a1[2] - (_QWORD)v10) >> 5 )
    {
      v18 = 32 * a4;
      v19 = &a2[4 * a4];
      if ( a4 >= ((char *)v10 - (char *)a2) >> 5 )
      {
        *v8 = std::_Uninitialized_move<std::wstring *>(a2, v10, (__int64)v19);
        std::_Destroy_range<std::allocator<std::wstring>>(a2, v10);
      }
      else
      {
        v20 = (__int64)&v10[v18 / 0xFFFFFFFFFFFFFFF8uLL];
        *v8 = std::_Uninitialized_move<std::wstring *>(&v10[v18 / 0xFFFFFFFFFFFFFFF8uLL], v10, (__int64)v10);
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>((__int64)a2, v20, (__int64)v10);
        std::_Destroy_range<std::allocator<std::wstring>>(a2, v19);
      }
      std::_Uninitialized_copy_n<std::move_iterator<std::wstring *>>(a3, a4, a2);
    }
    else
    {
      v11 = ((char *)v10 - v9) >> 5;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v11 )
        std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
      v22 = v11 + a4;
      v23 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
              a1,
              v11 + a4);
      size_of = std::_Get_size_of_n<32>(v23);
      v13 = (void **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v14 = ((char *)a2 - v9) >> 5;
      v24 = &v13[4 * v14] + 4 * a4;
      try
      {
        v15 = &v13[4 * v14];
        std::_Uninitialized_copy_n<std::move_iterator<std::wstring *>>(a3, a4, v15);
        v25 = v15;
        if ( a4 == 1 && a2 == v10 )
        {
          v16 = (__int64)v13;
          v17 = (void **)v21;
        }
        else
        {
          std::_Uninitialized_move<std::wstring *>(v21, a2, (__int64)v13);
          v25 = v13;
          v16 = (__int64)v24;
          v17 = a2;
        }
        std::_Uninitialized_move<std::wstring *>(v17, v10, v16);
        std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v13, v22, v23);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<std::wstring>>(v25, v24);
        std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(32 * v23));
        throw;
      }
    }
  }
}
