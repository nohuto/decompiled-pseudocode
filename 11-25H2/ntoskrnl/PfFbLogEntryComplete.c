/*
 * XREFs of PfFbLogEntryComplete @ 0x140324110
 * Callers:
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140470850 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x140471280 (PfTFiNotifyFileInfoDeleteCallback.c)
 *     PfTFiNotifyVolumeCreateCallback @ 0x1404A9460 (PfTFiNotifyVolumeCreateCallback.c)
 * Callees:
 *     PfpEventHandleFullBuffer @ 0x1403240C0 (PfpEventHandleFullBuffer.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PfFbLogEntryComplete(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8

  v4 = *(_QWORD *)(a2 + 16);
  if ( a4
    && (++*(_DWORD *)(a2 + 40),
        v5 = *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 24) += a4,
        v5 - *(_QWORD *)(a2 + 24) < *(int *)(v4 + 84)) )
  {
    if ( *(unsigned int (__fastcall **)(__int64))(v4 + 104) == PfpEventHandleFullBuffer )
      PfpEventHandleFullBuffer(a1);
    else
      guard_dispatch_icall_no_overrides(a1, a2);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 32), (PSLIST_ENTRY)a2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4);
  }
}
