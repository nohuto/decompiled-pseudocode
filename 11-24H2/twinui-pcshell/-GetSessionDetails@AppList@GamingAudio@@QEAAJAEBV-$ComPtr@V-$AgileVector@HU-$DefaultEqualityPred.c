/*
 * XREFs of ?GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV?$ComPtr@V?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@45@0000@Z @ 0x18036724C
 * Callers:
 *     ?GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@345@0000@Z @ 0x18034D950 (-GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@H@Collec.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingAudio::AppList::GetSessionDetails(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // r9
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+28h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18 = 0LL;
  wil::EnterCriticalSection(&v18, (struct _RTL_CRITICAL_SECTION *)(a1 + 112));
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 168);
  while ( 1 )
  {
    if ( v10 == v11 )
    {
      v13 = 0;
      goto LABEL_12;
    }
    if ( !*(_QWORD *)v10 )
      break;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 104LL))(
            *a2,
            *(unsigned int *)(*(_QWORD *)v10 + 48LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 549LL;
      goto LABEL_19;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a3 + 104LL))(*a3, *(_QWORD *)(*(_QWORD *)v10 + 56LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 550LL;
      goto LABEL_19;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a4 + 104LL))(
            *a4,
            (unsigned int)(int)(float)((float)(*(float *)(*(_QWORD *)v10 + 64LL) * 100.0) + 0.5));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 551LL;
      goto LABEL_19;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a5 + 104LL))(
            *a5,
            *(unsigned int *)(*(_QWORD *)v10 + 68LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 552LL;
      goto LABEL_19;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a6 + 104LL))(
            *a6,
            *(unsigned int *)(*(_QWORD *)v10 + 72LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 553LL;
      goto LABEL_19;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a7 + 104LL))(
            *a7,
            *(unsigned int *)(*(_QWORD *)v10 + 76LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 554LL;
LABEL_19:
      v16 = (unsigned int)v12;
      goto LABEL_20;
    }
    v10 += 8LL;
  }
  v13 = -2147467261;
  v16 = 2147500035LL;
  v15 = 547LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
    (const char *)v16);
LABEL_12:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return v13;
}
