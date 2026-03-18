/*
 * XREFs of HalpHvQueryAssociatedProcessors @ 0x140548EA8
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x1404CE418 (HalpHvInitMcaPcrContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpHvQueryAssociatedProcessors()
{
  if ( qword_140FC0770 )
    return guard_dispatch_icall_no_overrides(4294967294LL);
  else
    return 3221225473LL;
}
