/*
 * XREFs of NtUserUnregisterHotKey @ 0x1C003EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C003EE94 (-_UnregisterHotKey@@YAHPEAUtagWND@@H@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  int v4; // ebx
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  v4 = 0;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = _UnregisterHotKey(v5, a2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
