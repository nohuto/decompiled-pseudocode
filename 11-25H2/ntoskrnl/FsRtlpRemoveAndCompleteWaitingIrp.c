/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440
 * Callers:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140429024 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteWaitingIrp(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[6]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v5 = P[2];
    v6[5] = 8LL;
    v6[4] = &v5;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, byte_140043790, 0LL, 0LL, 3, v6);
  }
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = P[2];
  if ( v4 )
  {
    *(_BYTE *)(v4 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v4 + 69));
    *(_QWORD *)(v4 + 56) = *((unsigned int *)P + 12);
    *(_DWORD *)(v4 + 48) = *(_BYTE *)(v4 + 68) != 0 ? 0xC0000120 : 0;
  }
  guard_dispatch_icall_no_overrides(P[4], v4);
  ExFreePoolWithTag(P, 0);
}
