/*
 * XREFs of NtUserUnregisterHotKey @ 0x140158DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 */

_BOOL8 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  _BOOL8 v4; // rbx
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  v4 = 0LL;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = _UnregisterHotKey(v5, a2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
