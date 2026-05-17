/*
 * XREFs of RtlQueryPackageIdentity @ 0x180087050
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPackageClaims @ 0x180087120 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageClaims(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
