/*
 * XREFs of ObQuerySecurityObject @ 0x1408AEA1C
 * Callers:
 *     RtlIsUntrustedObject @ 0x14048B140 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     AstLogDeviceSDDLUpdated @ 0x1408AE644 (AstLogDeviceSDDLUpdated.c)
 *     CmpCheckExeOwnerForPca @ 0x1408AE8F4 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObQuerySecurityObject(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1, 1LL);
  *a5 = a4;
  return result;
}
