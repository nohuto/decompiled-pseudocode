/*
 * XREFs of PspLockQuotaExpansion @ 0x14027BDAC
 * Callers:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14027BC98 (PspExpandQuota.c)
 *     PspExpandLimit @ 0x1405E26A4 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405E2720 (PspInsertExpansionEntry.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char __fastcall PspLockQuotaExpansion(_DWORD *a1, _BYTE *a2)
{
  bool v2; // zf
  volatile signed __int32 *v3; // rbx
  KSPIN_LOCK *v4; // rcx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi

  v2 = *a1 == 0;
  v3 = a1 + 4;
  v4 = (KSPIN_LOCK *)(a1 + 4);
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire(v4, 0LL, 0LL);
    v8 = v6;
    if ( _interlockedbittestandset64(v3, 0LL) )
      LOBYTE(v6) = ExfAcquirePushLockExclusiveEx(v3, v6, v3);
    if ( v8 )
      *(_BYTE *)(v8 + 10) = 1;
  }
  else
  {
    LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc(v4);
    *a2 = v6;
  }
  return v6;
}
