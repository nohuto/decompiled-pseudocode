/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x1403B972C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810ED0 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140324D30 (AuthzBasepMemAlloc.c)
 */

__int64 __fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = AuthzBasepMemAlloc(0x30uLL, a2, 0x74416553u);
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
