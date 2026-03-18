/*
 * XREFs of ObQuerySecurityObject @ 0x1409A1EC4
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140356A00 (SepVerifyDesktopAppxImage.c)
 *     RtlIsUntrustedObject @ 0x140490B00 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     CmpCheckExeOwnerForPca @ 0x1409A1D9C (CmpCheckExeOwnerForPca.c)
 *     AstLogDeviceSDDLUpdated @ 0x1409A1FE8 (AstLogDeviceSDDLUpdated.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObQuerySecurityObject(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 result; // rax
  int v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+78h] [rbp+20h]

  v7 = a4;
  v6 = a2;
  result = guard_dispatch_icall_no_overrides(a1, 1LL, &v6, a3);
  *a5 = v7;
  return result;
}
