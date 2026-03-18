/*
 * XREFs of ?RotationLockCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140270620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RotationLockCallback(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66112) + 64LL))(*(_QWORD *)(UserSessionState + 66112));
  return 0LL;
}
