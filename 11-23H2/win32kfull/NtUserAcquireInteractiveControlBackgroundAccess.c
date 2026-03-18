/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C00891C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C00896CC (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  InteractiveControlManager *v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( a3 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_11;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v19;
  *((_QWORD *)&v19 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v12 = InteractiveControlManager::Instance();
    v13 = 761;
    v14 = 744;
    if ( a2 )
    {
      v13 = a2;
      v14 = a2;
    }
    LOBYTE(v6) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v12, a1, v14, v13, v9) >= 0;
  }
  ThreadUnlock1(v16, v15, v17);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return v6;
}
