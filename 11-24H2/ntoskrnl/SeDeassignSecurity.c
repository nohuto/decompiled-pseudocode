/*
 * XREFs of SeDeassignSecurity @ 0x140A1B040
 * Callers:
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
