/*
 * XREFs of PspSetCreateProcessNotifyRoutine @ 0x140A8C77C
 * Callers:
 *     PsSetCreateProcessNotifyRoutine @ 0x14077A310 (PsSetCreateProcessNotifyRoutine.c)
 *     PsSetCreateProcessNotifyRoutineEx @ 0x14077A330 (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutineEx2 @ 0x14077A350 (PsSetCreateProcessNotifyRoutineEx2.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3DC4 (MmVerifyCallbackFunctionCheckFlags.c)
 *     ExAllocateCallBack @ 0x140A85D20 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetCreateProcessNotifyRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 i; // r14
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  int v12; // edx
  struct _EX_RUNDOWN_REF *v13; // rdi
  volatile signed __int32 *v14; // rax
  __int64 j; // rbx

  v4 = (unsigned int)a2;
  v5 = a2 & 2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x40 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        return 3221225594LL;
      }
      v9 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, a2, a3, a4);
      v10 = v9;
      if ( v9 )
      {
        LODWORD(v4) = v4 & 0xFFFFFFFE;
        if ( v9[1].Count == a1
          && LODWORD(v9[2].Count) == (_DWORD)v4
          && ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, 0LL, (__int64)v9) )
        {
          v14 = &PspCreateProcessNotifyRoutineCount;
          if ( v5 )
            v14 = &PspCreateProcessNotifyRoutineExCount;
          _InterlockedDecrement(v14);
          ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v10);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v10);
          ExFreePoolWithTag(v10, 0);
          return 0LL;
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v10);
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v12 = 32;
  else
    v12 = 0;
  if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, v12) )
    return 3221225506LL;
  v13 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v4);
  if ( !v13 )
    return 3221225626LL;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= 0x40 )
    {
      ExFreePoolWithTag(v13, 0);
      return 3221225485LL;
    }
    if ( ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + j, v13, 0LL) )
      break;
  }
  if ( v5 )
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineExCount);
    if ( (PspNotifyEnableMask & 4) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 2u);
  }
  else
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 2) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 1u);
  }
  return 0LL;
}
