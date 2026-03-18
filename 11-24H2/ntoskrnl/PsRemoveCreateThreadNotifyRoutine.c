/*
 * XREFs of PsRemoveCreateThreadNotifyRoutine @ 0x140A8B940
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x1402C9C50 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  volatile signed __int32 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x40 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v1, v2, v3);
      return -1073741702;
    }
    v7 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i);
    v8 = v7;
    if ( v7 )
      break;
LABEL_10:
    ;
  }
  if ( (PCREATE_THREAD_NOTIFY_ROUTINE)v7[1].Count != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, 0LL, (__int64)v7) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, v8);
    goto LABEL_10;
  }
  v9 = &PspCreateThreadNotifyRoutineNonSystemCount;
  if ( !v8[2].Count )
    v9 = &PspCreateThreadNotifyRoutineCount;
  _InterlockedAdd(v9, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, v8);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
  ExWaitForRundownProtectionRelease(v8);
  ExFreePoolWithTag(v8, 0);
  return 0;
}
