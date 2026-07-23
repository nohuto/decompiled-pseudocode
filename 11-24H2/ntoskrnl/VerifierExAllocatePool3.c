/*
 * XREFs of VerifierExAllocatePool3 @ 0x140B932E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B98490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool3(
        ULONG_PTR BugCheckParameter3,
        size_t a2,
        ULONG a3,
        __int64 a4,
        unsigned int a5)
{
  ULONG_PTR v5; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  ULONG_PTR v12; // rdx

  v5 = BugCheckParameter3 & 0x20;
  if ( (VfRuleClasses & 4) != 0
    && (v10 = a3, LODWORD(v10) = a3 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v10))
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePool3", a2) )
  {
    if ( !v5 )
      return 0LL;
LABEL_17:
    RtlRaiseStatus(-1073741670);
  }
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePool3 || !pXdvExAllocatePool3 )
  {
    result = ExAllocatePool3(BugCheckParameter3, a2, a3, a4, a5);
  }
  else
  {
    v12 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFDFuLL;
    if ( !v5 )
      v12 = BugCheckParameter3;
    result = guard_dispatch_icall_no_overrides(0LL, v12 | 0x200);
  }
  if ( !result && v5 )
    goto LABEL_17;
  return result;
}
