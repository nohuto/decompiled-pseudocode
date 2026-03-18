/*
 * XREFs of PspLockProcessShared @ 0x1403F8E70
 * Callers:
 *     PsSwapProcessWorkingSet @ 0x140764C54 (PsSwapProcessWorkingSet.c)
 *     PspApplyCoreIsolationPolicy @ 0x140766E28 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspGetPreviousProcessThread @ 0x1408BDE38 (PspGetPreviousProcessThread.c)
 *     PsCaptureExceptionPort @ 0x1408F62C8 (PsCaptureExceptionPort.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     PspInheritSyscallProvider @ 0x140A517A8 (PspInheritSyscallProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 456);
  v3 = KeAbPreAcquire(a1 + 456, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
