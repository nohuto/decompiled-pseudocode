/*
 * XREFs of PspUnlockQuotaExpansion @ 0x1403C6BB8
 * Callers:
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1403C6748 (PspExpandQuota.c)
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 *     PspExpandLimit @ 0x1405D91E0 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405D925C (PspInsertExpansionEntry.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
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
