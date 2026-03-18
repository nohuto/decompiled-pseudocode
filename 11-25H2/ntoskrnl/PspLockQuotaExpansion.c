/*
 * XREFs of PspLockQuotaExpansion @ 0x1403C685C
 * Callers:
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1403C6748 (PspExpandQuota.c)
 *     PspExpandLimit @ 0x1405D91E0 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x1405D925C (PspInsertExpansionEntry.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

char __fastcall PspLockQuotaExpansion(_DWORD *a1, _BYTE *a2)
{
  bool v2; // zf
  unsigned __int64 *v3; // rbx
  KSPIN_LOCK *v4; // rcx
  __int64 *v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rdi

  v2 = *a1 == 0;
  v3 = (unsigned __int64 *)(a1 + 4);
  v4 = (KSPIN_LOCK *)(a1 + 4);
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire((__int64)v4, 0LL);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      LOBYTE(v6) = ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
  }
  else
  {
    LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc(v4);
    *a2 = (_BYTE)v6;
  }
  return (char)v6;
}
