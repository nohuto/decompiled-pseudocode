/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x140744DF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v2; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 8;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(a1 + 8);
  if ( ExCompareExchangeCallBack(v2, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock(v2, v4);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
    ExWaitForRundownProtectionRelease(v4);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoalRegistrationListLock);
    v8 = a1[6];
    if ( *(_QWORD **)(v8 + 8) != a1 + 6 || (v9 = (_QWORD *)a1[7], (_QWORD *)*v9 != a1 + 6) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    PopReleaseRwLock(&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v2, v4);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
  }
}
