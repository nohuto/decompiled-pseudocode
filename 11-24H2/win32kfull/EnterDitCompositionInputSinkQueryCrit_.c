/*
 * XREFs of EnterDitCompositionInputSinkQueryCrit_ @ 0x1401FADC0
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401BEFD0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x14021ABB0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall EnterDitCompositionInputSinkQueryCrit_(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18848));
}
