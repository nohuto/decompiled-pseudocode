/*
 * XREFs of NtUserRegisterHotKey @ 0x1C0041410
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  int v8; // ebx
  struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v8 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v16 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  LOBYTE(v15) = IAMThreadAccessGranted(gptiCurrent);
  if ( !v15 )
  {
LABEL_12:
    v16 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v16 = 87LL;
LABEL_13:
    UserSetLastError(v16);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v9 = (struct tagWND *)ValidateHwnd(a1);
  if ( v9 )
LABEL_6:
    v8 = _RegisterHotKey(v9, 0LL, a2, a3, a4, 0LL);
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
