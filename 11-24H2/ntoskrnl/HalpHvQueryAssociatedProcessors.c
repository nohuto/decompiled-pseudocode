/*
 * XREFs of HalpHvQueryAssociatedProcessors @ 0x140549058
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvQueryAssociatedProcessors(__int64 a1, __int64 a2)
{
  if ( qword_140FC1170 )
    return guard_dispatch_icall_no_overrides(4294967294LL, a2);
  else
    return 3221225473LL;
}
