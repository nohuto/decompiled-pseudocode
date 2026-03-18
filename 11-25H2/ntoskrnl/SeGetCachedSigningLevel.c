/*
 * XREFs of SeGetCachedSigningLevel @ 0x140A1A870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_140F044B0 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return guard_dispatch_icall_no_overrides(a1);
  return 3221225485LL;
}
