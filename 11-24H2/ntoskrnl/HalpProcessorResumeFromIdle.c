/*
 * XREFs of HalpProcessorResumeFromIdle @ 0x140543C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall HalpProcessorResumeFromIdle(__int64 a1, __int64 a2)
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( SLODWORD(result->HalReserved[3]) > 0 )
  {
    result = KeGetCurrentPrcb();
    if ( (result->HalReserved[3] & 1) == 0 )
    {
      result = (struct _KPRCB *)HalpProfileInterface[10];
      if ( result )
        return (struct _KPRCB *)guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  return result;
}
