/*
 * XREFs of HalpProcessorResumeFromIdle @ 0x140543A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall HalpProcessorResumeFromIdle(__int64 a1)
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
        return (struct _KPRCB *)guard_dispatch_icall_no_overrides(a1);
    }
  }
  return result;
}
