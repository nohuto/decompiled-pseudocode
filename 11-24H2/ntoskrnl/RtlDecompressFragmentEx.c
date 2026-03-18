/*
 * XREFs of RtlDecompressFragmentEx @ 0x140485940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlDecompressFragmentEx(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 8u )
    return 3221226079LL;
  return guard_dispatch_icall_no_overrides(a2, a3, a4, a5);
}
