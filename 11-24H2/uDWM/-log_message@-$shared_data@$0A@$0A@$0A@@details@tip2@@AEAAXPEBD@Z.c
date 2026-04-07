/*
 * XREFs of ?log_message@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z @ 0x1800E2B8C
 * Callers:
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800E2B1C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004BA38 (-begin_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008876C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??$make_unique_ansistring_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@0@PEBD_K@Z @ 0x1800DF8FC (--$make_unique_ansistring_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXP.c)
 *     ?reserve@?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@QEAA_N_K@Z @ 0x1800E2ED0 (-reserve@-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::log_message(__int64 a1, _BYTE *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  char v10; // di
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( tip2::details::shared_data<0,0,0>::begin_update(a1) )
  {
    v6 = wil::make_unique_ansistring_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
           &v11,
           a2,
           v4,
           v5);
    v7 = *(_QWORD *)(a1 + 104);
    v8 = v6;
    if ( *(_QWORD *)(a1 + 112) < v7 )
      goto LABEL_7;
    v9 = 2 * v7;
    if ( !v7 )
      v9 = 10LL;
    if ( (unsigned __int8)tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>::reserve(
                            a1 + 96,
                            v9) )
    {
LABEL_7:
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * *(_QWORD *)(a1 + 112)) = *v8;
      *v8 = 0LL;
      v10 = 0;
      ++*(_QWORD *)(a1 + 112);
    }
    else
    {
      v10 = 1;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11);
    if ( v10 )
      *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,0>::end_update(a1);
}
