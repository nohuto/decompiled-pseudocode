/*
 * XREFs of KeRegisterBoundCallback @ 0x1405AD190
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 *     ExAllocateCallBack @ 0x140A84B30 (ExAllocateCallBack.c)
 *     MmVerifyCallbackFunction @ 0x140AA4504 (MmVerifyCallbackFunction.c)
 */

__int64 __fastcall KeRegisterBoundCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi

  v2 = 0LL;
  if ( (unsigned int)MmVerifyCallbackFunction() )
  {
    v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( ExCompareExchangeCallBack(&KiBoundsCallback, v3, 0LL) )
        return a1;
      else
        PspUserApcKernelRoutine(v4);
    }
  }
  return v2;
}
