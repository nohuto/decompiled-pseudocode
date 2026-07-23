/*
 * XREFs of PspUnlockQuotaExpansion @ 0x14027CE78
 * Callers:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14027BC98 (PspExpandQuota.c)
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 *     PspExpandLimit @ 0x1405E26A4 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405E2720 (PspInsertExpansionEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockQuotaExpansion(__int64 a1, KIRQL a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rdi

  v2 = (volatile signed __int64 *)(a1 + 16);
  if ( *(_DWORD *)a1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 16);
    KeAbPostRelease((ULONG_PTR)v2);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
