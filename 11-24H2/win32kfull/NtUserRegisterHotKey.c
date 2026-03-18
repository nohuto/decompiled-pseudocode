/*
 * XREFs of NtUserRegisterHotKey @ 0x1400F41F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall NtUserRegisterHotKey(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BOOL8 v13; // rbx
  struct tagWND *v14; // rax
  __int64 v15; // rcx
  struct tagTHREADINFO *v17; // rax
  int v18; // ecx
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  v10 = PtiCurrent(v9, v8);
  v13 = 0LL;
  if ( (unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v10 + 58)) )
    goto LABEL_11;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v18 = 1004;
    goto LABEL_12;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  v17 = PtiCurrent(v12, v11);
  if ( !(unsigned int)IAMThreadAccessGranted(v17) )
  {
LABEL_11:
    v18 = 5;
    goto LABEL_12;
  }
  if ( !a4 )
  {
    v18 = 87;
LABEL_12:
    UserSetLastError(v18);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v14 = 0LL;
    goto LABEL_6;
  }
  v14 = (struct tagWND *)ValidateHwnd(a1);
  if ( v14 )
LABEL_6:
    v13 = _RegisterHotKey(v14, 0LL, a2, a3, a4, 0LL);
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
  UserSessionSwitchLeaveCrit(v15);
  return v13;
}
