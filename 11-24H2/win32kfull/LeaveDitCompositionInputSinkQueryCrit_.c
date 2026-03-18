/*
 * XREFs of LeaveDitCompositionInputSinkQueryCrit_ @ 0x1401F7A94
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401BEFD0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x14021ABB0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveDitCompositionInputSinkQueryCrit_(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18848));
}
