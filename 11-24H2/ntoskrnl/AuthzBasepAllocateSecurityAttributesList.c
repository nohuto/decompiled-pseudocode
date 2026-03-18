/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140356CD0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140355758 (SepVerifyDesktopAppxPackageName.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810790 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepCreateClaimAttributes @ 0x140A56BE0 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A5E1D0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140346440 (AuthzBasepMemAlloc.c)
 */

__int64 AuthzBasepAllocateSecurityAttributesList()
{
  __int64 result; // rax

  result = AuthzBasepMemAlloc();
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
