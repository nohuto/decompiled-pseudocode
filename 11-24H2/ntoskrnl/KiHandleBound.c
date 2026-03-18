/*
 * XREFs of KiHandleBound @ 0x1405B0F60
 * Callers:
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _EX_RUNDOWN_REF *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(&KiBoundsCallback);
  if ( v4 )
  {
    v1 = guard_dispatch_icall_no_overrides(v3, v2, v5, v6);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v4);
  }
  KeLeaveCriticalRegion();
  return v1;
}
