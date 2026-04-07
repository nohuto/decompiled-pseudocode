/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800935E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001C3FC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180050890 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008BF80 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18008CE74 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18008FA04 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180093D98 (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  unsigned int v5; // ebp
  int v6; // r9d
  int v7; // eax
  struct CWindowData *v8; // rcx
  struct CWindowData **v9; // rax
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  __int64 v11; // r8
  struct _LIST_ENTRY **p_Flink; // rcx
  CAnimationScheduler *v13; // rdi
  char v14; // bl
  unsigned __int8 v15; // al
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CWindowData *v18; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+78h] [rbp+20h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v18);
  v4 = v18;
  if ( !v18 )
  {
    if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2)
      || (CWindowList::GetSyncedWindowData(this, a2, 0, &v18), (v4 = v18) == 0LL) )
    {
      v5 = -2147024890;
      v17 = 2320;
LABEL_5:
      v6 = v5;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v17, 0LL);
      goto LABEL_24;
    }
  }
  if ( (*((_BYTE *)v4 + 736) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v4);
  if ( !(*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2) )
  {
    v7 = CWindowData::EnsureClientAreaVisualProxy(v4);
    v5 = v7;
    if ( v7 < 0 )
    {
      v17 = 2332;
LABEL_22:
      v6 = v7;
      goto LABEL_23;
    }
  }
  CWindowList::SyncWindowData(this, a2, v4);
  v8 = *(struct CWindowData **)v4;
  v9 = (struct CWindowData **)*((_QWORD *)v4 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v4 + 8LL) != v4 || *v9 != v4 )
    goto LABEL_25;
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v4 + 17));
  if ( !WindowListForDesktopCanFail )
  {
    v5 = -2147024882;
    v17 = 2348;
    goto LABEL_5;
  }
  p_Flink = &WindowListForDesktopCanFail->Blink->Flink;
  if ( *p_Flink != WindowListForDesktopCanFail )
LABEL_25:
    __fastfail(3u);
  *(_QWORD *)v4 = WindowListForDesktopCanFail;
  *((_QWORD *)v4 + 1) = p_Flink;
  *p_Flink = (struct _LIST_ENTRY *)v4;
  WindowListForDesktopCanFail->Blink = (struct _LIST_ENTRY *)v4;
  CWindowData::ClearSnapshot(v4, 1, v11, 1);
  v7 = CWindowList::ClipChange(this, a2);
  v5 = v7;
  if ( v7 < 0 )
  {
    v17 = 2357;
    goto LABEL_22;
  }
  if ( (*((_BYTE *)v4 + 736) & 1) != 0 )
  {
    LOBYTE(v18) = 0;
    v13 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
    v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v13, v4, v15, v14, (bool *)&v18);
    if ( !(_BYTE)v18 )
    {
      v7 = CWindowList::ShowHide(this, v4, 1);
      v5 = v7;
      if ( v7 < 0 )
      {
        v17 = 2366;
        goto LABEL_22;
      }
    }
  }
LABEL_24:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
