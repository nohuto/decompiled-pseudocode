/*
 * XREFs of HalpApicTimerArm @ 0x14044E800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerArm(unsigned __int8 *a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx

  v5 = *a1;
  LODWORD(v5) = v5 | 0x20000;
  if ( a2 != 2 )
    v5 = *a1;
  guard_dispatch_icall_no_overrides(800LL, v5);
  guard_dispatch_icall_no_overrides(992LL, *((unsigned int *)a1 + 1));
  guard_dispatch_icall_no_overrides(896LL, a3);
  return 0LL;
}
