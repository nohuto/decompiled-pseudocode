/*
 * XREFs of ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18035E384
 * Callers:
 *     ?StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18035BA60 (-StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?R_K@?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@QEBA_KAEB_K@Z @ 0x1800C0B70 (--$-R_K@-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@QEBA_KAEB_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18010FE40 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x18023E034 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@I.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@@Z @ 0x1803416BC (--$DoInvoke@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18035C64C (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::WinEventProc(
        GamingOverlayExperienceManager *this,
        HWINEVENTHOOK a2,
        int a3,
        HWND a4)
{
  const char *v6; // r9
  const char *v7; // r9
  char v8; // bl
  char v9; // di
  __int64 v10; // rax
  char v11; // al
  int v12; // eax
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-78h] BYREF
  int v15[2]; // [rsp+30h] [rbp-68h] BYREF
  struct tagRECT Rect; // [rsp+38h] [rbp-60h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a3 != 32779 )
  {
LABEL_15:
    *(_QWORD *)&Rect.left = a4;
    *(_QWORD *)v15 = this;
    *(_QWORD *)&v14 = v15;
    *((_QWORD *)&v14 + 1) = &Rect;
    v12 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_06958e91366e7e07f3b4ee9ae841a90f_>(
            (__int64)this + 640,
            &v14);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x302,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v12);
    *(_QWORD *)v15 = 0LL;
    wil::EnterCriticalSection(
      (struct _RTL_CRITICAL_SECTION **)v15,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 768));
    if ( !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 80)
      && *((_QWORD *)this + 83) )
    {
      v13 = GamingOverlayExperienceManager::StopWorkerWindowMessageThread(this, 0);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30C,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v13);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v15);
    return;
  }
  memset(&wndpl, 0, sizeof(wndpl));
  wndpl.length = 44;
  if ( !GetWindowPlacement(a4, &wndpl) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x2E9,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v6);
  Rect = 0LL;
  if ( !GetWindowRect(a4, &Rect) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x2EC,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v7);
  if ( wndpl.rcNormalPosition.left == Rect.left
    && wndpl.rcNormalPosition.top == Rect.top
    && wndpl.rcNormalPosition.right == Rect.right
    && wndpl.rcNormalPosition.bottom == Rect.bottom )
  {
    v8 = 1;
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v8 = 1;
  }
  *(_QWORD *)v15 = a4;
  v10 = std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>::operator()<unsigned __int64>(
          (__int64)retaddr,
          (__int64)v15);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
    (_QWORD *)this + 88,
    (__int64 **)&v14,
    v15,
    v10);
  if ( *((_QWORD *)&v14 + 1) )
  {
    v11 = *(_BYTE *)(*((_QWORD *)&v14 + 1) + 48LL);
    *(_BYTE *)(*((_QWORD *)&v14 + 1) + 48LL) = v9;
    if ( v9 && v9 == v11 )
      v8 = 0;
    if ( v8 )
      goto LABEL_15;
  }
  else
  {
    try
    {
      std::_Xout_of_range("invalid unordered_map<K, T> key");
    }
    catch ( ... )
    {
    }
  }
}
