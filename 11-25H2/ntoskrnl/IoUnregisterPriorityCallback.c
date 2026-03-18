/*
 * XREFs of IoUnregisterPriorityCallback @ 0x1405935E0
 * Callers:
 *     IopDeleteDriver @ 0x140A86150 (IopDeleteDriver.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 *     ExWaitForCallBacks @ 0x140AB2E10 (ExWaitForCallBacks.c)
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
