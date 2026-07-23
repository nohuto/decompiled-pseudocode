/*
 * XREFs of PfFbLogEntryComplete @ 0x14020DB10
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x14044B6C0 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14044B840 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x14044B9D0 (PfTFiNotifyFileInfoDeleteCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     PfpEventHandleFullBuffer @ 0x14020E610 (PfpEventHandleFullBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PfFbLogEntryComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8

  v4 = *(_QWORD *)(a2 + 16);
  if ( (_DWORD)a4
    && (++*(_DWORD *)(a2 + 40),
        v5 = *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 24) += (unsigned int)a4,
        v5 - *(_QWORD *)(a2 + 24) < *(int *)(v4 + 84)) )
  {
    if ( *(__int64 (**)(void))(v4 + 104) == PfpEventHandleFullBuffer )
      PfpEventHandleFullBuffer();
    else
      guard_dispatch_icall_no_overrides(a1, a2, PfpEventHandleFullBuffer, a4);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 32), (PSLIST_ENTRY)a2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4);
  }
}
