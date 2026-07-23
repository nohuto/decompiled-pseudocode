/*
 * XREFs of IoUnregisterPriorityCallback @ 0x140593C70
 * Callers:
 *     IopDeleteDriver @ 0x140A86F40 (IopDeleteDriver.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140AB1CEC (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 i; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  signed __int64 *v9; // rcx

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v7 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i], a2, a3, a4);
      v8 = v7;
      if ( v7 )
      {
        v9 = &IopUpdatePriorityCallbackRoutine[i];
        if ( v7[4].Count == a1 )
        {
          if ( ExCompareExchangeCallBack(v9, 0LL, (__int64)v7) )
          {
            _InterlockedAdd(&IopUpdatePriorityCallbackRoutineCount, 0xFFFFFFFF);
            ExDereferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i], v8);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
            ExWaitForCallBacks(v8);
            PspUserApcKernelRoutine(v8);
            *(_DWORD *)(a1 + 16) &= ~0x200u;
            return;
          }
        }
        else
        {
          ExDereferenceCallBackBlock(v9, v7);
        }
      }
    }
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
}
