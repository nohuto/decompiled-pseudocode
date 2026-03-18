/*
 * XREFs of PfTAccessTracingCleanup @ 0x140B5B46C
 * Callers:
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x1409506E0 (PfTTraceListAdd.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5AEA0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x140274CCC (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafe @ 0x14027674C (PfpPartitionReferenceParentSafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     MmFreeAccessPfnBuffer @ 0x14046B30C (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     MmSetAccessLogging @ 0x140683808 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x140B5B550 (PfTAccessTracingInitialize.c)
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
