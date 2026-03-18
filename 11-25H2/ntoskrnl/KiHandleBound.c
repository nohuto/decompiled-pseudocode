/*
 * XREFs of KiHandleBound @ 0x1405AD5D0
 * Callers:
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  __int64 v2; // rcx
  struct _EX_RUNDOWN_REF *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v3 = ExReferenceCallBackBlock(&KiBoundsCallback);
  if ( v3 )
  {
    v1 = guard_dispatch_icall_no_overrides(v2);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v3);
  }
  KeLeaveCriticalRegion();
  return v1;
}
