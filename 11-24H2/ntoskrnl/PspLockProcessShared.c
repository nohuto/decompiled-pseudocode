/*
 * XREFs of PspLockProcessShared @ 0x14033E760
 * Callers:
 *     PsSwapProcessWorkingSet @ 0x140774624 (PsSwapProcessWorkingSet.c)
 *     PspApplyCoreIsolationPolicy @ 0x1407767F8 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     PspGetPreviousProcessThread @ 0x14094ABFC (PspGetPreviousProcessThread.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PsCaptureExceptionPort @ 0x140A2095C (PsCaptureExceptionPort.c)
 *     PspInheritSyscallProvider @ 0x140A5611C (PspInheritSyscallProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
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
