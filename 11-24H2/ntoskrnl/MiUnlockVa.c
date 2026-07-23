/*
 * XREFs of MiUnlockVa @ 0x1403DB604
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  return MiUnlockWsle(
           a1,
           a2,
           48 * ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL);
}
