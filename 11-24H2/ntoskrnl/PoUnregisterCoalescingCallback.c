/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x14074F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v5; // rsi
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 8;
  --CurrentThread->KernelApcDisable;
  v7 = ExReferenceCallBackBlock(a1 + 8, a2, a3, a4);
  if ( ExCompareExchangeCallBack(v5, 0LL, (__int64)v7) )
  {
    ExDereferenceCallBackBlock(v5, v7);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ExWaitForRundownProtectionRelease(v7);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoalRegistrationListLock);
    v8 = a1[6];
    if ( *(_QWORD **)(v8 + 8) != a1 + 6 || (v9 = (_QWORD *)a1[7], (_QWORD *)*v9 != a1 + 6) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    PopReleaseRwLock(&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v5, v7);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
}
