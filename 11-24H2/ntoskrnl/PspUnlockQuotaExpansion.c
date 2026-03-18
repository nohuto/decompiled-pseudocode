/*
 * XREFs of PspUnlockQuotaExpansion @ 0x14024C868
 * Callers:
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14024B688 (PspExpandQuota.c)
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 *     PspExpandLimit @ 0x1405E517C (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405E51F8 (PspInsertExpansionEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockQuotaExpansion(__int64 a1, KIRQL a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

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
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v5, v4, v6, v7);
    }
  }
}
