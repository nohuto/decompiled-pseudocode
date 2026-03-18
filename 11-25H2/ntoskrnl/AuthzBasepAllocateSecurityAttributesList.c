/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x14029040C
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140800C20 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140999D24 (SepDuplicateClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140A53380 (SepCreateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140369D70 (AuthzBasepMemAlloc.c)
 */

__int64 __fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
  if ( result )
  {
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 28) = 0;
    *(_QWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 16) = result + 8;
    *(_QWORD *)(result + 8) = result + 8;
    *(_DWORD *)result = 0;
    *(_QWORD *)(result + 40) = result + 32;
    *(_QWORD *)(result + 32) = result + 32;
    *(_DWORD *)(result + 24) = 0;
  }
  return result;
}
