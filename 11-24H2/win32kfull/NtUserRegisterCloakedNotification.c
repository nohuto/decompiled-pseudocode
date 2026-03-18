/*
 * XREFs of NtUserRegisterCloakedNotification @ 0x14029AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserRegisterCloakedNotification(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  __int16 v12; // ax
  __int16 v13; // ax
  __int64 v14; // r8
  _BYTE v16[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v16[0] = 0;
    v17 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v16, v5);
    if ( *(struct tagTHREADINFO **)(v8 + 16) != PtiCurrent(v10, v9) || !IsTopLevelWindow(v8) )
    {
      v11 = 5023;
LABEL_4:
      UserSetLastError(v11);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
      goto LABEL_14;
    }
    v12 = *(_WORD *)(v8 + 376);
    if ( a2 )
    {
      if ( v12 == -1 )
      {
        v11 = 170;
        goto LABEL_4;
      }
      v13 = v12 + 1;
    }
    else
    {
      if ( !v12 )
      {
LABEL_13:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
        v7 = v14;
        goto LABEL_14;
      }
      v13 = v12 - 1;
    }
    *(_WORD *)(v8 + 376) = v13;
    goto LABEL_13;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
