/*
 * XREFs of MiQueuePageAccessLog @ 0x14020D250
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14044B1B4 (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x14044B208 (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x14093A7A4 (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline @ 0x14020EFA8 (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PfIsProcessExitingInNonSystemPartition @ 0x140479AF4 (PfIsProcessExitingInNonSystemPartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiQueuePageAccessLog(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // r15
  unsigned int v5; // ebp
  BOOL v6; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  int v8; // ebx
  void *v9; // rcx
  bool v10; // zf

  *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a2 + 12) = xmmword_140F0E6E8;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL);
  v4 = (struct _EX_RUNDOWN_REF *)(v3 + 728);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 728)) )
  {
    v5 = *(unsigned __int16 *)(v3 + 768);
    if ( v5 >= *(_DWORD *)(v3 + 760) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v3 + 688), 0x64u);
      v8 = 0;
LABEL_11:
      ExReleaseRundownProtection_0(v4);
      if ( v8 )
        return;
      goto LABEL_12;
    }
    v6 = (unsigned int)Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline()
      && *(int *)(a2 + 8) <= 1
      && *(_QWORD *)(a2 + 56)
      && (unsigned __int8)PfIsProcessExitingInNonSystemPartition(v3);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 768), (PSLIST_ENTRY)a2);
    if ( !*(_DWORD *)(v3 + 740) && v5 >= 8 )
      KeSetEvent((PRKEVENT)(v3 + 736), 0, 0);
    IsEnabledDeviceUsageNoInline = Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline();
    if ( *(_DWORD *)(v3 + 740) )
    {
LABEL_10:
      v8 = 1;
      goto LABEL_11;
    }
    if ( IsEnabledDeviceUsageNoInline )
    {
      v10 = !v6;
    }
    else
    {
      if ( *(int *)(a2 + 8) > 1 || !*(_QWORD *)(a2 + 56) )
        goto LABEL_10;
      v10 = (unsigned __int8)PfIsProcessExitingInNonSystemPartition(v3) == 0;
    }
    if ( !v10 )
      KeSetEvent((PRKEVENT)(v3 + 736), 0, 0);
    goto LABEL_10;
  }
LABEL_12:
  if ( !*(_DWORD *)(a2 + 8) )
  {
    v9 = *(void **)(a2 + 56);
    if ( (unsigned __int64)v9 > 1 )
      ObDereferenceObjectDeferDeleteWithTag(v9, 0x4C416D4Du);
  }
  ExFreePoolWithTag((PVOID)a2, 0);
}
