/*
 * XREFs of PspIoRateEntryInitialize @ 0x14085C2E4
 * Callers:
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140AB24C8 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall PspIoRateEntryInitialize(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 32));
  result = _InterlockedExchange64((volatile __int64 *)(a1 + 32), 1LL);
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
