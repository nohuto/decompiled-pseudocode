/*
 * XREFs of MiLockDynamicMemoryShared @ 0x140393098
 * Callers:
 *     MiGetChannelInformation @ 0x140392D28 (MiGetChannelInformation.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiAddPartitionHugeRange @ 0x140663C58 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1407D97EC (MiMapNewPfns.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC88 (MiGetPhysicalMemoryRanges.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 486);
  v2 = (volatile signed __int64 *)(a1 + 192);
  v3 = KeAbPreAcquire(a1 + 192, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
