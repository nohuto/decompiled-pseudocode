/*
 * XREFs of PfTAccessTracingCleanup @ 0x140B5D4DC
 * Callers:
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x140972A00 (PfTTraceListAdd.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5CF10 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafe @ 0x14022BCDC (PfpPartitionReferenceParentSafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     MmFreeAccessPfnBuffer @ 0x140463F10 (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     MmSetAccessLogging @ 0x1406849B8 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x140B5D5C0 (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, int a2, char a3)
{
  char v6; // r15
  _QWORD *v7; // rsi
  int v8; // ebp
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v10; // rbx
  _QWORD *p_Next; // rcx

  v6 = a2 == 4;
  v7 = (_QWORD *)PfpPartitionReferenceParentSafe((__int64 *)a1);
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 80));
  *(_DWORD *)(a1 + 76) |= a2;
  v8 = a3 & 1;
  if ( !v8 )
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(v7, 0, DefaultPagePriority);
  }
  *(_DWORD *)(a1 + 760) = 0;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 728));
  v10 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 768));
  while ( v10 )
  {
    p_Next = &v10->Next;
    v10 = v10->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  if ( !v8 )
    *(_BYTE *)(*(_QWORD *)(*v7 + 17600LL) + 55LL) = 0;
  PfTAccessTracingInitialize(a1, 1LL);
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 80));
  if ( v7 )
    PfpPartitionDereferenceParent((__int64)v7);
}
