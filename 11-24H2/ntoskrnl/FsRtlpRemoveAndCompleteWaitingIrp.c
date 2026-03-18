/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C
 * Callers:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140330618 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14049FDC0 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteWaitingIrp(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v8 = P[2];
    v9[5] = 8LL;
    v9[4] = &v8;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, byte_140043C8D, 0LL, 0LL, 3, v9);
  }
  v5 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v6 = (PVOID *)P[1], *v6 != P) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = P[2];
  if ( v7 )
  {
    *(_BYTE *)(v7 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v7 + 69));
    *(_QWORD *)(v7 + 56) = *((unsigned int *)P + 12);
    a3 = *(_BYTE *)(v7 + 68) != 0 ? 0xC0000120 : 0;
    *(_DWORD *)(v7 + 48) = a3;
  }
  guard_dispatch_icall_no_overrides(P[4], v7, a3, a4);
  ExFreePoolWithTag(P, 0);
}
