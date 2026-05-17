/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x1800870B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPackageClaims @ 0x180087120 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentityEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 result; // rax

  result = RtlQueryPackageClaims(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( a7 )
      *a7 = 0LL;
  }
  return result;
}
