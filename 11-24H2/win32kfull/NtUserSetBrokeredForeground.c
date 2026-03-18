/*
 * XREFs of NtUserSetBrokeredForeground @ 0x140219E00
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     IsMessageOnlyWindow @ 0x140149C30 (IsMessageOnlyWindow.c)
 *     _SetBrokeredForeground @ 0x1402290C8 (_SetBrokeredForeground.c)
 */

__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  struct tagTHREADINFO *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v4 = 0;
  v5 = PtiCurrent(v3, v2);
  if ( !a1 )
    goto LABEL_12;
  v6 = ValidateHwnd(a1);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    goto LABEL_12;
  if ( !IsTopLevelWindow(v6) )
    goto LABEL_12;
  if ( v7[15] )
    goto LABEL_12;
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)v7) )
    goto LABEL_12;
  if ( (*(_BYTE *)(v7[5] + 31LL) & 0x10) != 0 )
    goto LABEL_12;
  LOBYTE(v8) = IsMessageOnlyWindow((__int64)v7);
  if ( v8 )
    goto LABEL_12;
  UserSessionState = W32GetUserSessionState(v10, v9);
  if ( GetProp((__int64)v7, *(unsigned __int16 *)(UserSessionState + 41418), 1u) )
    goto LABEL_12;
  v12 = *(_DWORD *)(v7[5] + 236LL);
  if ( v12 != 14 && v12 != 4 )
  {
    UserSetLastError(5);
LABEL_12:
    v13 = 87;
    goto LABEL_13;
  }
  if ( (unsigned int)IsImmersiveBroker(*((_QWORD *)v5 + 58)) && v5 == (struct tagTHREADINFO *)v7[2] )
  {
    v4 = SetBrokeredForeground(v7);
    goto LABEL_14;
  }
  v13 = 5;
LABEL_13:
  UserSetLastError(v13);
LABEL_14:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v14);
  return v4;
}
