/*
 * XREFs of AutoRotationUpdateRegistry @ 0x140270E40
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AutoRotationUpdateRegistry(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66112) + 32LL))(*(_QWORD *)(UserSessionState + 66112));
}
