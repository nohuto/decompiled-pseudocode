/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140418978
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x140775288 (PspSetProcessAffinityUpdateMode.c)
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (_QWORD *)(a1 + 456);
  _InterlockedOr(v7, 0);
  if ( (*v5 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v5);
  return KiLeaveCriticalRegionUnsafe(a2, a2, a3, a4);
}
