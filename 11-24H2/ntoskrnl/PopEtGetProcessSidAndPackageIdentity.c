/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1408E082C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1408DEC68 (PopEtGetProcessAppId.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x140422B10 (RtlQueryPackageIdentity.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 */

char __fastcall PopEtGetProcessSidAndPackageIdentity(__int64 a1, __int64 a2, __int64 a3)
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
  return ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v6, 0x746C6644u);
}
