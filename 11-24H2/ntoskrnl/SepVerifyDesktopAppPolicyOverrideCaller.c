/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x140422764
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(HANDLE TokenHandle)
{
  bool v2; // di
  KPROCESSOR_MODE PreviousMode; // dl
  void *v5; // rsi
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v10; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v12[2]; // [rsp+88h] [rbp-80h] BYREF
  WCHAR PackageFullName[128]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v14[128]; // [rsp+198h] [rbp+90h] BYREF

  PkgClaim = 0LL;
  HIDWORD(v6) = 0;
  v9 = 256LL;
  PackageSize = 256LL;
  v2 = 0;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(TokenHandle, PackageFullName, &PackageSize, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v5 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, (char *)&v6 + 4, &v6, v12, 0LL);
    if ( RtlQueryPackageClaims(v5, v14, &v9, 0LL, 0LL, 0LL, &PkgClaim, 0LL) >= 0 && (PkgClaim.Flags & 4) != 0 )
    {
      String1_8.Length = PackageSize - 2;
      String1_8.MaximumLength = PackageSize - 2;
      String1_8.Buffer = PackageFullName;
      v10.Length = v9 - 2;
      v10.MaximumLength = v9 - 2;
      v10.Buffer = v14;
      v2 = RtlCompareUnicodeString(&String1_8, &v10, 0) == 0;
    }
    if ( v5 )
    {
      if ( HIDWORD(v6) == 1 )
        ObFastDereferenceObject(
          (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
          (ULONG_PTR)v5,
          0x74726853u);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v2;
}
