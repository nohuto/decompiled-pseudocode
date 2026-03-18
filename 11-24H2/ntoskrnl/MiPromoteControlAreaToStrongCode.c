/*
 * XREFs of MiPromoteControlAreaToStrongCode @ 0x1407F5F2C
 * Callers:
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 * Callees:
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     MiGetSectionStrongImageReference @ 0x1409593FC (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiPromoteControlAreaToStrongCode(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx

  result = MiValidateSectionCreate(a2, a1, -1, 0, a3 | 0x40000000u, 12, 1);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    result = MiGetSectionStrongImageReference(v7);
    if ( (int)result >= 0 )
    {
      *a4 = *(_QWORD *)(v7 + 64);
      return 0LL;
    }
  }
  return result;
}
