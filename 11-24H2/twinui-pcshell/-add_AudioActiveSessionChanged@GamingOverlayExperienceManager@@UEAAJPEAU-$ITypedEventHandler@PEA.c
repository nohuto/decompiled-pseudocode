/*
 * XREFs of ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18035FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VAppList@GamingAudio@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppList@GamingAudio@@@Z @ 0x18034260C (--$MakeAndInitialize@VAppList@GamingAudio@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppList@Gami.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18034B714 (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@.c)
 *     ??$AsWeak@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@YAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x180365F6C (--$AsWeak@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@YAJPE.c)
 *     ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x180368070 (-RebuildList@AppList@GamingAudio@@QEAAX_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::add_AudioActiveSessionChanged(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  GamingAudio::AppList **v8; // rbx
  int v9; // edi
  __int64 v10; // rdx
  __int64 *v11; // rax
  int v12; // eax
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  wil::EnterCriticalSection(&v15, (struct _RTL_CRITICAL_SECTION *)(a1 + 1296));
  v6 = Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         a1 + 1336,
         a2,
         a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (GamingAudio::AppList **)(a1 + 1288);
    if ( !*(_QWORD *)(a1 + 1288) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 1288));
      v9 = Microsoft::WRL::Details::MakeAndInitialize<GamingAudio::AppList,GamingAudio::AppList,>((GamingAudio::AppList **)(a1 + 1288));
      if ( v9 < 0 )
      {
        v10 = 2755LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v9);
        v7 = v9;
        goto LABEL_11;
      }
      *(_QWORD *)v14 = (char *)*v8 + 104;
      v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v14);
      v12 = Microsoft::WRL::AsWeak<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
              a1 & -(__int64)(a1 != 136),
              v11);
      v9 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CB,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)(unsigned int)v12);
        v10 = 2756LL;
        goto LABEL_6;
      }
      GamingAudio::AppList::RebuildList(*v8, 1);
    }
    v7 = 0;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xABA,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return v7;
}
