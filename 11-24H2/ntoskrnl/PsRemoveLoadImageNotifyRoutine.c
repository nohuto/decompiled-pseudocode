/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x140AA6790
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
  {
    v7 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v1, v2, v3);
    v8 = v7;
    if ( v7 )
    {
      if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)v7[1].Count == NotifyRoutine
        && ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, 0LL, (__int64)v7) )
      {
        _InterlockedAdd(&PspLoadImageNotifyRoutineCount, 0xFFFFFFFF);
        ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v8);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        ExWaitForRundownProtectionRelease(v8);
        ExFreePoolWithTag(v8, 0);
        return 0;
      }
      ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + i, v8);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return -1073741702;
}
