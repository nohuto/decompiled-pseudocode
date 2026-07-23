/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x140B94620
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlReserveNode @ 0x1403E5340 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B94904 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B949A4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  __int64 v8; // rsi
  int v9; // r14d
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  if ( !ViRemLockInitialized )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    if ( (VfRuleClasses & 0x10) != 0 )
      CarReportRuleViolationFromNt(196, 215LL, Surrogate + 16, BugCheckParameter3, 0LL, 4u, retaddr);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    v8 = a5;
    ViRemLockDeleteFirstTreeNode(BugCheckParameter3, a5);
  }
  else
  {
    v8 = a5;
  }
  v9 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  v10 = VfAvlReserveNode(&ViRemLockAvl, BugCheckParameter3, v8);
  v11 = v10;
  if ( !v10 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  }
  v12 = v10 + 2;
  if ( a5 == 120 )
  {
    memset_0(v12, 0, 0x78uLL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v12, a2);
    v9 = 1;
  }
  VfAvlInitializeLockContext((__int64)&v15, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)&v15, v11);
  result = VfAvlCleanupLockContext((__int64)&v15, v13);
  if ( !v9 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
  return result;
}
