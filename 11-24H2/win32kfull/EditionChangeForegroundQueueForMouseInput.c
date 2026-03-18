/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1402305F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x140195C2C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x140232970 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140274C80 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, UIPrivilegeIsolation *a2)
{
  struct tagTHREADINFO *v4; // rax
  const struct tagUIPI_INFO *v5; // r8
  struct tagWND *v6; // rsi
  __int64 v7; // r12
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  const struct tagWND *v14; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int16 *v18; // rdx
  __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v30; // [rsp+38h] [rbp-20h]

  v4 = PtiCurrent(a1, (__int64)a2);
  v6 = *(struct tagWND **)(a1 + 80);
  v7 = (__int64)v4;
  if ( a2 )
  {
    v8 = 1;
    if ( !UIPrivilegeIsolation::CheckAccess(
            a2,
            (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 472LL) + 472LL),
            v5) )
    {
      v9 = *((_QWORD *)v6 + 2);
      v10 = *(_QWORD *)(v9 + 472);
      v11 = *(_DWORD *)(v10 + 480);
      BugCheckParameter3 = *(_QWORD *)(v10 + 472);
      LODWORD(v30) = v11;
      EtwTraceUIPIInputError(v7, v9, v10, &BugCheckParameter3, 1);
      return 0LL;
    }
  }
  else
  {
    v8 = 0;
  }
  CompositionInputWindowUIOwner = v6;
  if ( (unsigned int)IsIndependentInputWindow(v6) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v14);
    if ( !CompositionInputWindowUIOwner )
      return 0LL;
  }
  if ( (*((_DWORD *)CompositionInputWindowUIOwner + 95) & 0x2000) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor((__int64)CompositionInputWindowUIOwner);
    v16 = NonChildAncestor;
    if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 27LL) & 8) != 0
      || (v17 = *(_QWORD *)(NonChildAncestor + 136),
          v18 = *(__int16 **)(v17 + 8),
          v19 = *v18,
          v19 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v18) + 19928) + 898LL))
      || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 136) + 8LL) + 10LL) & 1) != 0
      || (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)CompositionInputWindowUIOwner + 2)) )
    {
      if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() )
        UpdateDelegationTargetForMouseInput(*((_QWORD *)CompositionInputWindowUIOwner + 2));
    }
    else
    {
      v30 = 0LL;
      BugCheckParameter3 = -1LL;
      if ( CompositionInputWindowUIOwner != v6 )
        Win32HM_LockIntoThread<0>(v7, (__int64)CompositionInputWindowUIOwner, &BugCheckParameter3);
      xxxForceForegroundWindowNoRestoreFocus(CompositionInputWindowUIOwner, 0LL);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v20);
      if ( v8 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18944) )
        {
          UserSessionState = W32GetUserSessionState(v24, v23);
          if ( !UIPrivilegeIsolation::CheckAccess(
                  a2,
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18944) + 472LL),
                  v26) )
          {
            MSGLUA_GPQFOREGROUND(v28, v27);
            return 0LL;
          }
        }
      }
    }
  }
  return 1LL;
}
