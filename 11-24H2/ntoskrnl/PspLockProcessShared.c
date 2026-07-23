/*
 * XREFs of PspLockProcessShared @ 0x14031DC40
 * Callers:
 *     PsSwapProcessWorkingSet @ 0x140774844 (PsSwapProcessWorkingSet.c)
 *     PspApplyCoreIsolationPolicy @ 0x140776A18 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspGetPreviousProcessThread @ 0x1408EF16C (PspGetPreviousProcessThread.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PsCaptureExceptionPort @ 0x140A15A5C (PsCaptureExceptionPort.c)
 *     PspInheritSyscallProvider @ 0x140A4E06C (PspInheritSyscallProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 456);
  v3 = KeAbPreAcquire(a1 + 456, 0LL, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, 0LL, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
