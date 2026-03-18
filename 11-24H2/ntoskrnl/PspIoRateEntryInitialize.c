/*
 * XREFs of PspIoRateEntryInitialize @ 0x1408EAAB4
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14085E97C (PspSetJobIoRateControlForVolume.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
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
