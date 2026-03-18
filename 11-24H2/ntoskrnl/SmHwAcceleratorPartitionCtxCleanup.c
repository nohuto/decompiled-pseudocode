/*
 * XREFs of SmHwAcceleratorPartitionCtxCleanup @ 0x14079CB08
 * Callers:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060F5EC (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14079C48C (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14079CB7C (SmHwAcceleratorPartitionMgrCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExpReleaseRundownProtection @ 0x1402C8140 (ExpReleaseRundownProtection.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 */

void __fastcall SmHwAcceleratorPartitionCtxCleanup(__int64 a1)
{
  PSLIST_ENTRY v2; // rax
  ULONG v3; // edx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx

  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  v3 = 0;
  while ( v2 )
  {
    v2 = v2->Next;
    ++v3;
  }
  ExpReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 48), v3);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 48));
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    AccelStopSharingAddressSpaceWithResource(v7, v4, v5, v6);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 32) + 68LL));
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 32) + 32LL));
}
