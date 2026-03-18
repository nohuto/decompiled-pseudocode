/*
 * XREFs of MiQueuePageAccessLog @ 0x140244A68
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140379B9C (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x140379C6C (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x140956DF4 (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline @ 0x140245E80 (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PfIsProcessExitingInNonSystemPartition @ 0x14047EBF4 (PfIsProcessExitingInNonSystemPartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  *(_DWORD *)(a2 + 12) = xmmword_140F0E408;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL);
  v4 = (struct _EX_RUNDOWN_REF *)(v3 + 728);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v3 + 728)) )
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
