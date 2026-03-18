/*
 * XREFs of ObQuerySecurityObject @ 0x14099CFD4
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140291D1C (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x14047E350 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x1404912C0 (RtlIsUntrustedObject.c)
 *     CmpCheckExeOwnerForPca @ 0x14099CEAC (CmpCheckExeOwnerForPca.c)
 *     AstLogDeviceSDDLUpdated @ 0x14099D0F8 (AstLogDeviceSDDLUpdated.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObQuerySecurityObject(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1);
  *a5 = a4;
  return result;
}
