/*
 * XREFs of KiHandleBound @ 0x1405ADED0
 * Callers:
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiHandleBound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = ExReferenceCallBackBlock(&KiBoundsCallback, a2, a3, a4);
  if ( v8 )
  {
    v5 = guard_dispatch_icall_no_overrides(v7, v6);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v8);
  }
  KeLeaveCriticalRegion();
  return v5;
}
