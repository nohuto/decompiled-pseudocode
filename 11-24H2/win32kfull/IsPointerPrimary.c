/*
 * XREFs of IsPointerPrimary @ 0x14028C824
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 * Callees:
 *     <none>
 */

int __fastcall IsPointerPrimary(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  __int64 UserSessionState; // rax
  unsigned __int64 ThreadPointerData; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        *(CTouchProcessor **)(UserSessionState + 3264),
                        (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208),
                        v2,
                        0LL,
                        0LL,
                        0LL);
  v8 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v9 = W32GetUserSessionState(v7, v6);
    LODWORD(ThreadPointerData) = CTouchProcessor::IsPointerPrimary(*(CTouchProcessor **)(v9 + 3264), v8);
  }
  return ThreadPointerData;
}
