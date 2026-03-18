/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x140292108
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlQueryPackageClaims @ 0x140292AF0 (RtlQueryPackageClaims.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(__int64 a1)
{
  bool v2; // di
  KPROCESSOR_MODE PreviousMode; // dl
  void *v5; // rsi
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 String2; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String2_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v12[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v13[256]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v14[256]; // [rsp+198h] [rbp+90h] BYREF

  v7 = 0LL;
  HIDWORD(v6) = 0;
  String2 = 256LL;
  v8 = 256LL;
  v2 = 0;
  LOBYTE(v6) = 0;
  String2_8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( (int)RtlQueryPackageClaims(a1, v13, &v8, 0LL, 0LL, 0LL, 0LL, 0LL, v6) >= 0 )
  {
    v5 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, (char *)&v6 + 4, &v6, v12, 0LL);
    if ( (int)RtlQueryPackageClaims(v5, v14, &String2, 0LL, 0LL, 0LL, &v7, 0LL, v6) >= 0 && (v7 & 4) != 0 )
    {
      String1_8.Length = v8 - 2;
      String1_8.MaximumLength = v8 - 2;
      String1_8.Buffer = (wchar_t *)v13;
      String2_8.Length = String2 - 2;
      String2_8.MaximumLength = String2 - 2;
      String2_8.Buffer = (wchar_t *)v14;
      v2 = RtlCompareUnicodeString(&String1_8, &String2_8, 0) == 0;
    }
    if ( v5 )
    {
      if ( HIDWORD(v6) == 1 )
        ObFastDereferenceObject(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors, v5, 1953654867LL);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v2;
}
