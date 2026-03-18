/*
 * XREFs of IoUnregisterPriorityCallback @ 0x140596C90
 * Callers:
 *     IopDeleteDriver @ 0x140A8AC00 (IopDeleteDriver.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x1402C9C50 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140AB7938 (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 i; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  signed __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v7 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[i]);
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
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2, a3, a4);
  }
}
