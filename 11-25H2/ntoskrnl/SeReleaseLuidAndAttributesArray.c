/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x140997ED8
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1409334E0 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140933900 (NtPrivilegeCheck.c)
 *     NtAdjustGroupsToken @ 0x140996CB0 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1409970E0 (NtFilterToken.c)
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
