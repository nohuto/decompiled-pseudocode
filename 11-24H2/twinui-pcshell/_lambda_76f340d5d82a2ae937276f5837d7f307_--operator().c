/*
 * XREFs of _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046E408
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::Run @ 0x1804741D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180056DA4 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180056E00 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1800846F8 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800AB6F4 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1800ABEA0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800D0350 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18014B430 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180195820 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801C3264 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18020B208 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18021D790 (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     _anonymous_namespace_::GetViewTypeFromInputKind @ 0x180252128 (_anonymous_namespace_--GetViewTypeFromInputKind.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294C34 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CDCB4 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046FD10 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_76f340d5d82a2ae937276f5837d7f307_::operator()(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  wchar_t *v8; // rdx
  int v9; // eax
  int v10; // ebx
  wchar_t *v11; // rdx
  unsigned int v12; // eax
  int v13; // r15d
  RTL_SRWLOCK *v14; // rbx
  int ViewInfo; // esi
  __int64 v16; // rdx
  std::_Ref_count_base *v17; // rcx
  wchar_t *v18; // rdx
  __int64 v19; // rbx
  char v20; // bl
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rbx
  std::_Ref_count_base *v30; // rsi
  int v31; // eax
  int v33; // [rsp+20h] [rbp-E0h]
  int ViewTypeFromInputKind; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v36; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v38[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v39; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[80]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t String[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v42; // [rsp+E0h] [rbp-20h]
  __int128 v43; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = 0;
  TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(
    (__int64)v40,
    (__int64)"OnInputAppPropertyChangedQueuedTask");
  v35 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v35);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16AE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v35 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    goto LABEL_47;
  }
  v4 = (_QWORD *)(a1 + 16);
  v5 = std::wstring::find((char *)(a1 + 16), L"ViewIdForInputKind:", 0LL);
  v6 = -1LL;
  v7 = (char *)(a1 + 16);
  if ( v5 != -1 )
  {
    *(_OWORD *)String = 0LL;
    v42 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v7, 0x13uLL);
    if ( *(_QWORD *)(a1 + 32) != 18LL )
      v6 = *(_QWORD *)(a1 + 32) - 19LL;
    if ( *(_QWORD *)(a1 + 40) > 7uLL )
      v4 = (_QWORD *)*v4;
    std::wstring::_Construct<1,unsigned short const *>((char **)String, (char *)v4 + 38, v6);
    std::stoul(String, v8);
    v10 = v9;
    std::wstring::_Tidy_deallocate((void **)String);
    ViewTypeFromInputKind = anonymous_namespace_::GetViewTypeFromInputKind(v10);
    std::stoul((wchar_t *)(a1 + 48), v11);
    v13 = v12;
    if ( !v10 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(*(TouchKeyboardExperienceManager **)(a1 + 8), v12);
    *(_OWORD *)v37 = 0LL;
    v14 = *(RTL_SRWLOCK **)(a1 + 8);
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo(v14, v13, v37) < 0 )
    {
      ViewInfo = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(v14 + 25);
      if ( ViewInfo < 0 )
      {
        v16 = 5837LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ViewInfo);
        if ( v37[1] )
          std::_Ref_count_base::_Decref(v37[1]);
        v2 = ViewInfo;
        goto LABEL_47;
      }
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(v14, v13, v37);
      if ( ViewInfo < 0 )
      {
        v16 = 5838LL;
        goto LABEL_15;
      }
    }
    wil::AcquireSRWLockExclusive(&v36, v14 + 53);
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
      (_QWORD *)v37[0] + 5,
      (__int64)String,
      &ViewTypeFromInputKind);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v36);
    v17 = v37[1];
    goto LABEL_45;
  }
  if ( (unsigned int)std::wstring::compare(v7, (char *)L"KeyboardLayoutChangePending") )
    goto LABEL_47;
  v19 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v19 + 616) != 1 )
    goto LABEL_47;
  v20 = *(_BYTE *)(v19 + 944);
  std::stoi((wchar_t *)(a1 + 48), v18);
  v21 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v21 + 944) = v22 == 1;
  if ( !v20 || *(_BYTE *)(v21 + 944) || *(_DWORD *)(v21 + 940) != 2 )
    goto LABEL_47;
  v23 = *(_QWORD *)(v21 + 816);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 96LL))(v23);
  *(_OWORD *)v38 = 0LL;
  v24 = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)v21, *(_DWORD *)(v21 + 612), v38);
  v26 = v24;
  if ( v24 >= 0 )
  {
    v27 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(v21 + 840), 1) )
    {
      while ( *(_DWORD *)(v21 + 840) )
      {
        v28 = v27;
        if ( !v27 )
          goto LABEL_37;
        do
        {
          _mm_pause();
          --v28;
        }
        while ( v28 );
        if ( v27 >= 64 )
          v27 = 64;
        else
LABEL_37:
          v27 *= 2;
      }
    }
    v43 = *(_OWORD *)(v21 + 844);
    _InterlockedExchange((volatile __int32 *)(v21 + 840), 0);
    v29 = v21;
    v33 = *(_DWORD *)(v21 + 948);
    LOBYTE(v25) = 1;
    v30 = v38[0];
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                v29,
                v38[0],
                v25,
                &v43,
                v33,
                L"LayoutReadyAppProperty") < 0 )
    {
      v39 = *(struct tagRECT *)((char *)v30 + 120);
      v31 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
              (KeyboardHosting::TabTipAdapter **)v29,
              (const struct tagRECT *)*(unsigned int *)(v29 + 612),
              &v39,
              (struct tagRECT *)((char *)v30 + 136));
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x16E4,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v31);
      _InterlockedExchange((volatile __int32 *)(v29 + 940), 0);
    }
    v17 = v38[1];
LABEL_45:
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16E0,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v24);
  if ( v38[1] )
    std::_Ref_count_base::_Decref(v38[1]);
  v2 = v26;
LABEL_47:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v40);
  return v2;
}
