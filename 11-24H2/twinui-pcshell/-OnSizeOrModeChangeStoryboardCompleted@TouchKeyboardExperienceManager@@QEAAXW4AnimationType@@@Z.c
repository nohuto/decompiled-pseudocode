/*
 * XREFs of ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x1804731F8
 * Callers:
 *     ?OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ @ 0x180473410 (-OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1800ABEA0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180292538 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294C34 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DDF1C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     ??$SizeOrModeChangeAnimationCompleted@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z @ 0x180469978 (--$SizeOrModeChangeAnimationCompleted@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046FD10 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnSizeOrModeChangeStoryboardCompleted(__int64 a1, int a2)
{
  __int32 v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // eax
  std::_Ref_count_base *v12; // rsi
  int v13; // [rsp+20h] [rbp-29h]
  int v14; // [rsp+30h] [rbp-19h] BYREF
  std::_Ref_count_base *v15[2]; // [rsp+38h] [rbp-11h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp+7h] BYREF
  struct tagRECT v17; // [rsp+60h] [rbp+17h] BYREF
  struct tagRECT v18; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v14 = a2;
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationCompleted<unsigned int>(&v14);
  *(_OWORD *)v15 = 0LL;
  TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)a1, *(_DWORD *)(a1 + 612), v15);
  if ( *(_DWORD *)(a1 + 616) == 1 )
  {
    if ( std::_Atomic_storage<bool,1>::load(a1 + 944)
      && (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)(a1 + 940)) == 1 )
    {
      v4 = 2;
LABEL_24:
      _InterlockedExchange((volatile __int32 *)(a1 + 940), v4);
      goto LABEL_28;
    }
    if ( (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)(a1 + 940)) != 1
      && !std::_Atomic_storage<bool,1>::load((__int64)v15[0] + 34) )
    {
      v16 = *(struct tagRECT *)(v5 + 120);
      v6 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             (const struct tagRECT *)*(unsigned int *)(a1 + 612),
             &v16,
             (struct tagRECT *)(v5 + 136));
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v8 = 1068LL;
LABEL_22:
        wil::details::in1diag3::_Log_Hr(
          v7,
          (void *)v8,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_23;
      }
      goto LABEL_23;
    }
    v9 = *(_QWORD *)(a1 + 816);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
    v10 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(a1 + 840), 1) )
    {
      while ( *(_DWORD *)(a1 + 840) )
      {
        v11 = v10;
        if ( !v10 )
          goto LABEL_16;
        do
        {
          _mm_pause();
          --v11;
        }
        while ( v11 );
        if ( v10 >= 64 )
          v10 = 64;
        else
LABEL_16:
          v10 *= 2;
      }
    }
    v18 = *(struct tagRECT *)(a1 + 844);
    _InterlockedExchange((volatile __int32 *)(a1 + 840), 0);
    v13 = a2;
    v12 = v15[0];
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                a1,
                (__int64 *)v15[0],
                1u,
                &v18,
                v13,
                L"StoryboardCompleted") < 0 )
    {
      v17 = *(struct tagRECT *)((char *)v12 + 120);
      v6 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             (const struct tagRECT *)*(unsigned int *)(a1 + 612),
             &v17,
             (struct tagRECT *)((char *)v12 + 136));
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v8 = 1061LL;
        goto LABEL_22;
      }
LABEL_23:
      v4 = 0;
      goto LABEL_24;
    }
  }
  else if ( !std::_Atomic_storage<bool,1>::load(a1 + 937) && *(_DWORD *)(a1 + 620) != 1 )
  {
    TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
      (TouchKeyboardExperienceManager *)a1,
      *(_DWORD *)(a1 + 612),
      0);
  }
LABEL_28:
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
}
