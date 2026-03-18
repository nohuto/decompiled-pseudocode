/*
 * XREFs of MiGetSectionStrongImageReference @ 0x1409593FC
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1407F5F2C (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x1407FB42C (MmGetSectionStrongImageReference.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  result = qword_140F048F8;
  if ( !qword_140F048F8
    || (result = guard_dispatch_icall_no_overrides(v5 & 0xFFFFFFFFFFFFFFF8uLL, &v7, a3, a4), (int)result >= 0) )
  {
    *(_QWORD *)(a1 + 64) = v7;
  }
  return result;
}
