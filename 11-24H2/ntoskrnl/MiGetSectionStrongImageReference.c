/*
 * XREFs of MiGetSectionStrongImageReference @ 0x14093AE14
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1407F661C (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x1407FBB9C (MmGetSectionStrongImageReference.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  result = qword_140F04B98;
  if ( !qword_140F04B98
    || (result = guard_dispatch_icall_no_overrides(v2 & 0xFFFFFFFFFFFFFFF8uLL, &v4), (int)result >= 0) )
  {
    *(_QWORD *)(a1 + 64) = v4;
  }
  return result;
}
