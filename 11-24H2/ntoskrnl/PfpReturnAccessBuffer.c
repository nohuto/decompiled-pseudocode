/*
 * XREFs of PfpReturnAccessBuffer @ 0x140479740
 * Callers:
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline @ 0x14020EFA8 (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x140463F10 (MmFreeAccessPfnBuffer.c)
 *     PfIsProcessExitingInNonSystemPartition @ 0x140479AF4 (PfIsProcessExitingInNonSystemPartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r14d
  int v5; // esi
  BOOL v6; // ebp
  int IsEnabledDeviceUsageNoInline; // eax
  bool v8; // zf

  v2 = *(_QWORD *)(a1 + 32);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 728)) )
    goto LABEL_23;
  v4 = *(unsigned __int16 *)(v2 + 768);
  if ( v4 >= *(_DWORD *)(v2 + 760) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v2 + 688), 0x64u);
    v5 = 0;
    goto LABEL_10;
  }
  v5 = 1;
  v6 = (unsigned int)Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline()
    && *(int *)(a2 + 8) <= 1
    && *(_QWORD *)(a2 + 56)
    && (unsigned __int8)PfIsProcessExitingInNonSystemPartition(v2);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 768), (PSLIST_ENTRY)a2);
  if ( !*(_DWORD *)(v2 + 740) && v4 >= 8 )
    KeSetEvent((PRKEVENT)(v2 + 736), 0, 0);
  IsEnabledDeviceUsageNoInline = Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline();
  if ( !*(_DWORD *)(v2 + 740) )
  {
    if ( IsEnabledDeviceUsageNoInline )
    {
      v8 = !v6;
    }
    else
    {
      if ( *(int *)(a2 + 8) > 1 || !*(_QWORD *)(a2 + 56) )
        goto LABEL_10;
      v8 = (unsigned __int8)PfIsProcessExitingInNonSystemPartition(v2) == 0;
    }
    if ( !v8 )
      KeSetEvent((PRKEVENT)(v2 + 736), 0, 0);
  }
LABEL_10:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 728));
  if ( !v5 )
LABEL_23:
    MmFreeAccessPfnBuffer((_QWORD *)a2, 0);
}
