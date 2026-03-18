/*
 * XREFs of MiGetSectionStrongImageReference @ 0x1409470C8
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1407E609C (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x1407EB59C (MmGetSectionStrongImageReference.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = qword_140F04518;
  if ( !qword_140F04518 || (result = guard_dispatch_icall_no_overrides(v2 & 0xFFFFFFFFFFFFFFF8uLL), (int)result >= 0) )
    *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
