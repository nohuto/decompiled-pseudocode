/*
 * XREFs of SmHwAcceleratorPartitionCtxCleanup @ 0x14079CC18
 * Callers:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060DBAC (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14079C59C (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14079CC8C (SmHwAcceleratorPartitionMgrCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExpReleaseRundownProtection @ 0x1402BA900 (ExpReleaseRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
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
