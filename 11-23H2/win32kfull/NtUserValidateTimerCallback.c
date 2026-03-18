/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C0078520
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTimerCallback @ 0x1C0078564 (ValidateTimerCallback.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterSharedCrit(a1, a2, a3);
  v4 = PtiCurrentShared();
  v5 = (int)ValidateTimerCallback(v4, a1);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
