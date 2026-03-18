/*
 * XREFs of PspIoRateEntryInitialize @ 0x1408DB8A4
 * Callers:
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140A3B0AC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
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
