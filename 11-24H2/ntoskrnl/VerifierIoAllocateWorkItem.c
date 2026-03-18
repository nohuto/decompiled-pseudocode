/*
 * XREFs of VerifierIoAllocateWorkItem @ 0x140B8AF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("IoAllocateWorkItem", a2, a3, a4) )
  {
    return 0LL;
  }
  else
  {
    return guard_dispatch_icall_no_overrides(a1, retaddr, IovAllocateWorkItem, a4);
  }
}
