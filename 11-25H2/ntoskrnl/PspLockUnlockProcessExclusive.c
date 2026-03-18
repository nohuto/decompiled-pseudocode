/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x14041D224
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x1407658B8 (PspSetProcessAffinityUpdateMode.c)
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
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
