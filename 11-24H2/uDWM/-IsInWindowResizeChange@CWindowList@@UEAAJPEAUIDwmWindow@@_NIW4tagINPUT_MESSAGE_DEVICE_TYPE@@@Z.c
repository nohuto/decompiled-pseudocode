/*
 * XREFs of ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0B80
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F11B0 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x18004D1B4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800E7058 (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800EE11C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsInWindowResizeChange(
        struct CWindowData **this,
        struct IDwmWindow *a2,
        char a3,
        int a4,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a5)
{
  __int64 v9; // rax
  const struct std::nothrow_t *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char *v13; // r14
  int v14; // eax
  unsigned int v15; // edi
  struct winrt::Udwm::Transitions::TransitionManager *v16; // rax
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v11 = v9;
  if ( v9 && (*(_BYTE *)(v9 + 742) & 4) != 0 )
    a3 = 0;
  v12 = (unsigned int)(a5 - 4);
  if ( (v12 & 0xFFFFFFFB) != 0 )
    goto LABEL_15;
  if ( !a3 )
  {
    if ( !v9 )
      goto LABEL_20;
    if ( (*(_BYTE *)(v9 + 741) & 0x20) == 0 )
      goto LABEL_16;
  }
  v13 = (char *)(this + 87);
  if ( !this[87] )
    CWindowList::GetSyncedWindowData((CWindowList *)this, a2, 1, this + 87);
  v10 = *(const struct std::nothrow_t **)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_15;
  LOBYTE(v12) = *((_BYTE *)v10 + 741);
  if ( ((v12 & 0x20) != 0) == a3 && v11 )
  {
LABEL_16:
    if ( (*(_DWORD *)(v11 + 744) & 0xFFF) == 0x5E )
    {
      if ( *((_BYTE *)this + 688) )
      {
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v12, v10);
        winrt::Udwm::Transitions::TransitionManager::PostTransition((__int64)Current, 6);
        *(_DWORD *)(v11 + 744) = *(_DWORD *)(v11 + 744) & 0x2000000 | 0xFFF;
        *((_BYTE *)this + 688) = 0;
      }
      else
      {
        *((_BYTE *)this + 688) = 1;
        v16 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v12, v10);
        winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow(
          (__int64)v16,
          *(_QWORD *)(v11 + 448),
          6);
      }
    }
    goto LABEL_20;
  }
  *((_BYTE *)v10 + 741) = (32 * a3) | v12 & 0xDF;
  *(_DWORD *)(*(_QWORD *)v13 + 848LL) = a4;
  v14 = CWindowList::ApplyWindowResizeStateTransition((CWindowList *)this);
  v15 = v14;
  if ( v14 >= 0 )
  {
LABEL_15:
    if ( v11 )
      goto LABEL_16;
LABEL_20:
    v15 = 0;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v14);
LABEL_21:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v15;
}
