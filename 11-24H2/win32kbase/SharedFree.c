/*
 * XREFs of SharedFree @ 0x140149BF0
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(BaseAddress);
  return RtlFreeHeap(*(PVOID *)(UserSessionState + 19920), 0, BaseAddress);
}
