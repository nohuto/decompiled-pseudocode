/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x140985BF8
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     NtFilterToken @ 0x140983A70 (NtFilterToken.c)
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140984C80 (NtPrivilegeCheck.c)
 *     NtAdjustGroupsToken @ 0x140986940 (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
