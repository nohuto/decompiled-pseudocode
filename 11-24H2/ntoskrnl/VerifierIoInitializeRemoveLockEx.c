/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x140B92620
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlInsertReservedTreeNode @ 0x1403F0328 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlReserveNode @ 0x1403F1620 (VfAvlReserveNode.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B92904 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B929A4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  __int64 v10; // rsi
  int v11; // r14d
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 result; // rax
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v17 = 0LL;
  v18 = 0LL;
  if ( !ViRemLockInitialized )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2, a3, a4);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    if ( (VfRuleClasses & 0x10) != 0 )
      CarReportRuleViolationFromNt(196, 215LL, Surrogate + 16, BugCheckParameter3, 0LL, 4u, retaddr);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    v10 = a5;
    ViRemLockDeleteFirstTreeNode(BugCheckParameter3, a5);
  }
  else
  {
    v10 = a5;
  }
  v11 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2, a3, a4);
  v12 = VfAvlReserveNode(&ViRemLockAvl, BugCheckParameter3, v10);
  v13 = v12;
  if ( !v12 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2, a3, a4);
  }
  v14 = v12 + 2;
  if ( a5 == 120 )
  {
    memset_0(v14, 0, 0x78uLL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v14, a2, a3, a4);
    v11 = 1;
  }
  VfAvlInitializeLockContext((__int64)&v17, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)&v17, v13);
  result = VfAvlCleanupLockContext((__int64)&v17, v15);
  if ( !v11 )
    return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2, a3, a4);
  return result;
}
