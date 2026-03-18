/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x140AA5FA0
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x140ACFEE0 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
  {
    v7 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i);
    v8 = v7;
    if ( v7 )
    {
      if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)v7[1].Count == NotifyRoutine
        && ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, 0LL, (__int64)v7) )
      {
        _InterlockedAdd(&PspLoadImageNotifyRoutineCount, 0xFFFFFFFF);
        ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v8);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
        ExWaitForRundownProtectionRelease(v8);
        ExFreePoolWithTag(v8, 0);
        return 0;
      }
      ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v8);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v1, v2, v3);
  return -1073741702;
}
