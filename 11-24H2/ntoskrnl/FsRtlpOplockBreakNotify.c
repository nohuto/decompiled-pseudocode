/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x14070B734
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r8
  char v7; // si
  int v8; // ecx
  unsigned int v9; // edi
  bool v10; // zf

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 144);
  if ( (v8 & 0x1F00F00) != 0 || *(_QWORD *)(a1 + 72) != a1 + 72 || (v8 & 0x20000) != 0 )
  {
    if ( (v8 & 0x80u) == 0 )
    {
      v7 = 0;
      a3->IoStatus.Status = 0;
      LOBYTE(v6) = 1;
      FsRtlpModifyThreadPriorities(a1, 0LL, v6);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      v9 = FsRtlpWaitOnIrp(
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
    v10 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline() == 0;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    if ( !v10 )
      v7 = 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v9 = 0;
LABEL_12:
  if ( v7 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v9;
}
