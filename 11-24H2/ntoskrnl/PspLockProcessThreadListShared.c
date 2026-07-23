/*
 * XREFs of PspLockProcessThreadListShared @ 0x1403E2A50
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A150F0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessThreadListShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  char *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 1504);
  v3 = (char *)KeAbPreAcquire(a1 + 1504, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (__int64)v2);
  if ( v3 )
    v3[10] = 1;
  return result;
}
