/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x1408D9B50
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D9260 (PspChangeJobMemoryUsageByProcess.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 1264;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1264));
    result = KeAbPostRelease(v4);
  }
  if ( a3 )
  {
    if ( (*(_WORD *)(a3 + 486))++ == 0xFFFF && *(_QWORD *)(a3 + 152) != a3 + 152 )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
