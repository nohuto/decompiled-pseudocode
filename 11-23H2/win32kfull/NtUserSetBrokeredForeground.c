/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00729C0
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     IsMessageOnlyWindow @ 0x1C0073600 (IsMessageOnlyWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  v2 = 0;
  if ( !a1 )
    goto LABEL_17;
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( !v3
    || !(unsigned int)IsTopLevelWindow(v3)
    || *(_QWORD *)(v5 + 120)
    || (unsigned int)IsWindowBeingDestroyed(v5)
    || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v6)
    || GetProp(v4, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1LL) )
  {
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5LL);
LABEL_17:
    v13 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) || gptiCurrent != *(_QWORD *)(v4 + 16) )
  {
    v13 = 5LL;
LABEL_18:
    UserSetLastError(v13);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v4, WORD2(WPP_MAIN_CB.SecurityDescriptor), gptiCurrent, 5u);
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
