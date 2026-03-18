/*
 * XREFs of MiUnlockVa @ 0x1402C7B34
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  return MiUnlockWsle(
           a1,
           a2,
           48 * ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL);
}
