/*
 * XREFs of ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x18014ABC0
 * Callers:
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18014A694 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x18014A910 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_copy_n@PEBUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEBU123@_KPEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18014A9D4 (--$_Uninitialized_copy_n@PEBUservice_description@immersive_shell_component@winrt@@V-$allocator@U.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18014AF30 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802C71D0 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802DE950 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 */

void __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Insert_counted_range<winrt::immersive_shell_component::service_description const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  size_t size_of; // rax
  _OWORD *v17; // r15
  __int64 v18; // rax
  char *v19; // r8
  bool v20; // zf
  __int64 v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  char *v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // [rsp+20h] [rbp-58h]
  char *v30; // [rsp+20h] [rbp-58h]
  char *v31; // [rsp+30h] [rbp-48h]
  char *v33; // [rsp+88h] [rbp+10h]
  _OWORD *v34; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+90h] [rbp+18h]
  unsigned __int64 v37; // [rsp+98h] [rbp+20h]

  v7 = a1 + 1;
  v29 = a1 + 1;
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  if ( a4 )
  {
    if ( a4 <= (a1[2] - v9) >> 5 )
    {
      v27 = 32 * a4;
      if ( a4 >= (v9 - a2) >> 5 )
      {
        *v7 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(a2, v9, 32 * a4 + a2);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, v9);
      }
      else
      {
        v28 = v9 - v27;
        *v29 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v9 - v27, v9, v9);
        std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
          a2,
          v28,
          v9);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, 32 * a4 + a2);
      }
      std::_Uninitialized_copy_n<winrt::immersive_shell_component::service_description const *>(a3, a4, a2);
    }
    else
    {
      v11 = (v9 - v8) >> 5;
      v12 = 0x7FFFFFFFFFFFFFFLL;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v11 )
        std::_Xlength_error("vector too long");
      v13 = v11 + a4;
      v14 = (v10 - v8) >> 5;
      v15 = v14 >> 1;
      if ( v14 <= 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v12 = v15 + v14;
        if ( v15 + v14 < v13 )
          v12 = v13;
      }
      size_of = std::_Get_size_of_n<32>(v12);
      v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v18 = (a2 - v8) >> 5;
      v30 = (char *)&v17[2 * v18 + 2 * a4];
      try
      {
        v31 = (char *)&v17[2 * v18];
        v37 = a4;
        v19 = v31;
        v33 = v31;
        v21 = a3 - (_QWORD)v31;
        v36 = a3 - (_QWORD)v31;
        do
        {
          *(_OWORD *)v19 = *(_OWORD *)&v19[v21];
          *((_QWORD *)v19 + 2) = *(_QWORD *)&v19[v21 + 16];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v19 + 2);
          *((_DWORD *)v33 + 6) = *(_DWORD *)&v33[v36 + 24];
          v19 = v33 + 32;
          v33 += 32;
          v20 = v37-- == 1;
          v21 = v36;
        }
        while ( !v20 );
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v19, v19);
        v34 = v31;
        if ( a4 == 1 && a2 == v9 )
        {
          v22 = v17;
          if ( v8 != v9 )
          {
            v23 = v8 + 16;
            v24 = (char *)v17 - v8;
            do
            {
              *v22 = *(_OWORD *)(v23 - 16);
              v25 = *(_QWORD *)v23;
              *(_QWORD *)v23 = 0LL;
              *(_QWORD *)&v24[v23] = v25;
              *(_DWORD *)&v24[v23 + 8] = *(_DWORD *)(v23 + 8);
              v22 += 2;
              v23 += 32LL;
            }
            while ( v23 - 16 != v9 );
          }
          std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v22, v22);
        }
        else
        {
          std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v8, a2, v17);
          v34 = v17;
          std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(a2, v9, v30);
        }
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v34, v30);
        std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(32 * v12));
        throw;
      }
      v26 = a1 + 1;
      if ( *a1 )
      {
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(*a1, *v26);
        std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL));
      }
      *a1 = v17;
      *v26 = &v17[2 * v13];
      a1[2] = &v17[2 * v12];
    }
  }
}
