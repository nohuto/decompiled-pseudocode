/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x140936340
 * Callers:
 *     NtFilterToken @ 0x140935F90 (NtFilterToken.c)
 *     NtCreateTokenEx @ 0x140936AB0 (NtCreateTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x1409377D0 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140937BF0 (NtPrivilegeCheck.c)
 *     NtAdjustGroupsToken @ 0x140A36530 (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
