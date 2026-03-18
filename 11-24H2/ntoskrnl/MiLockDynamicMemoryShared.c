/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1403D5830
 * Callers:
 *     MiGetChannelInformation @ 0x1403D54BC (MiGetChannelInformation.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiAddPartitionHugeRange @ 0x14066F778 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiAddPhysicalMemory @ 0x1407E866C (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AB2D28 (MiGetPhysicalMemoryRanges.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 486);
  v2 = (volatile signed __int64 *)(a1 + 192);
  v3 = KeAbPreAcquire(a1 + 192, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (__int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
