/*
 * XREFs of ?GetDedicatedGpuMemoryGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x18034F460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$CreateExternalVector@NV?$AgileVector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@N@234@@ZPEAPEAV?$AgileVector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@$0A@@1234@@Z @ 0x1803415DC (--$CreateExternalVector@NV-$AgileVector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foun.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18035B2C8 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedGpuMemoryGbChart(__int64 a1, __int64 a2, double *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  int v13; // ebp
  __int64 v14; // rcx
  double v15; // xmm0_8
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 752) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)(a1 - 136));
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v7 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<double,Windows::Foundation::Collections::Internal::AgileVector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,0>>(
         v6,
         &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    wil::EnterCriticalSection(&v19, (struct _RTL_CRITICAL_SECTION *)(a1 + 1056));
    v10 = *(_QWORD *)(a1 + 1096);
    v11 = *(_QWORD *)(a1 + 1104);
    while ( v10 != v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(v18);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9F1,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v12);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
        v8 = v13;
        goto LABEL_17;
      }
      v10 += 8LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 2549LL;
      goto LABEL_11;
    }
    v14 = *(_QWORD *)(a1 + 1048);
    if ( v14 < 0 )
    {
      v16 = *(_QWORD *)(a1 + 1048) & 1LL | (*(_QWORD *)(a1 + 1048) >> 1);
      v15 = (double)(int)v16 + (double)(int)v16;
    }
    else
    {
      v15 = (double)(int)v14;
    }
    v8 = 0;
    *a3 = v15 / 1048576000.0;
  }
  else
  {
    v9 = 2539LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  return v8;
}
