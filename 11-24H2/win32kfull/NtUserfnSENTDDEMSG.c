/*
 * XREFs of NtUserfnSENTDDEMSG @ 0x1402A2CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnSENTDDEMSG(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  v8 = a2;
  PtiCurrent(a1, a2);
  if ( a6 != 692 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(UserSessionState + 71384))(
           a1,
           v8 | 0x40000000u,
           a3,
           a4,
           a5);
}
