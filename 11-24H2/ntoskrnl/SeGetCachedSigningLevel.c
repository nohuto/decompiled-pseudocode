/*
 * XREFs of SeGetCachedSigningLevel @ 0x140A26490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !qword_140F04890 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return guard_dispatch_icall_no_overrides(a1, a3, a2, a4);
  return 3221225485LL;
}
