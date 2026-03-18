/*
 * XREFs of PspLockProcessThreadListShared @ 0x1403EFAD0
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403EF8F4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A1FFF0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessThreadListShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 1504);
  v3 = KeAbPreAcquire(a1 + 1504, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (__int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
