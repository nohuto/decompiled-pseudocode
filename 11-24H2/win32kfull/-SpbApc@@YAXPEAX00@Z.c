/*
 * XREFs of ?SpbApc@@YAXPEAX00@Z @ 0x1402AF390
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveScreenBits @ 0x1403308B4 (GreSaveScreenBits.c)
 */

void __fastcall SpbApc(void *a1, void *a2, void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(1LL, 0LL);
  if ( a2 )
  {
    v8 = a2;
    HMAssignmentUnlock(&v8);
  }
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), 2LL, a3);
  }
  UserSessionSwitchLeaveCrit(v6);
}
