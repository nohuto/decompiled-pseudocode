/*
 * XREFs of SeGetCachedSigningLevel @ 0x140A1AF10
 * Callers:
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_140F04B30 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return guard_dispatch_icall_no_overrides(a1, a3);
  return 3221225485LL;
}
