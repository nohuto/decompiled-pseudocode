/*
 * XREFs of RtlSidEqualLevel @ 0x18013B130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlSidEqualLevel(__int64 a1, __int64 a2, bool *a3)
{
  int v3; // r9d
  int v5; // ecx

  v3 = *(_DWORD *)(a1 + 2);
  if ( !v3 )
    v3 = *(unsigned __int16 *)(a1 + 6) - 4096;
  if ( v3 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a2 + 2);
  if ( !v5 )
    v5 = *(unsigned __int16 *)(a2 + 6) - 4096;
  if ( v5 )
    return 3221225485LL;
  *a3 = *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8);
  return 0LL;
}
