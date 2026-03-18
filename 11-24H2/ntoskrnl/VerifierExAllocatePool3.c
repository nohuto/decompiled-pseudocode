/*
 * XREFs of VerifierExAllocatePool3 @ 0x140B912E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B96490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool3(
        ULONG_PTR BugCheckParameter3,
        size_t a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  ULONG_PTR v5; // rbx
  ULONG v7; // esi
  __int64 v10; // rcx
  __int64 result; // rax
  ULONG_PTR v12; // rdx

  v5 = BugCheckParameter3 & 0x20;
  v7 = a3;
  if ( (VfRuleClasses & 4) != 0
    && (v10 = (unsigned int)a3, LODWORD(v10) = a3 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v10))
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePool3", a2, a3, a4) )
  {
    if ( !v5 )
      return 0LL;
LABEL_17:
    RtlRaiseStatus(-1073741670);
  }
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))pXdvExAllocatePool3[0]
    || !pXdvExAllocatePool3[0] )
  {
    result = ExAllocatePool3(BugCheckParameter3, a2, v7, a4, a5);
  }
  else
  {
    v12 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFDFuLL;
    if ( !v5 )
      v12 = BugCheckParameter3;
    result = guard_dispatch_icall_no_overrides(0LL, v12 | 0x200, a2, v7);
  }
  if ( !result && v5 )
    goto LABEL_17;
  return result;
}
