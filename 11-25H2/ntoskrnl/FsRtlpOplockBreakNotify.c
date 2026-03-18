/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x1406FF854
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404953E4 (FsRtlpOplockSendModernAppTermination.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3)
{
  char v6; // si
  int v7; // ecx
  unsigned int v8; // edi
  bool v9; // zf

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v6 = 1;
  v7 = *(_DWORD *)(a1 + 144);
  if ( (v7 & 0x1F00F00) != 0 || *(_QWORD *)(a1 + 72) != a1 + 72 || (v7 & 0x20000) != 0 )
  {
    if ( (v7 & 0x80u) == 0 )
    {
      v6 = 0;
      a3->IoStatus.Status = 0;
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      v8 = FsRtlpWaitOnIrp(
             a1,
             (__int64)a3,
             0LL,
             (__int64)FsRtlpNotifyOplockBreakComplete,
             0LL,
             0LL,
             0,
             0LL,
             0LL,
             0LL,
             0LL);
      goto LABEL_12;
    }
    v9 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline() == 0;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    if ( !v9 )
      v6 = 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v8 = 0;
LABEL_12:
  if ( v6 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v8;
}
