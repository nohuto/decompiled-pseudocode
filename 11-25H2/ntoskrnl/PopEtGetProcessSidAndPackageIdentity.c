/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x14083D388
 * Callers:
 *     PopEtGetProcessAppId @ 0x14083B8B0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x1402928E0 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryUserSidToken @ 0x14083E7E0 (SeQueryUserSidToken.c)
 */

__int64 __fastcall PopEtGetProcessSidAndPackageIdentity(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rbp
  char v7; // bl
  ULONG_PTR PackageSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v6 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v7 = SeSecurityAttributePresent((__int64)v6, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent((__int64)v6, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v7 )
  {
    PackageSize = 256LL;
    AppIdSize = 132LL;
    if ( RtlQueryPackageIdentity(v6, (PWSTR)(a3 + 4), &PackageSize, (PWSTR)(a3 + 260), &AppIdSize, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (PackageSize >> 1) - 1;
      *(_WORD *)(a3 + 2) = (AppIdSize >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v6, a2, 68LL, &PackageSize) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v6, 1953261124LL);
}
