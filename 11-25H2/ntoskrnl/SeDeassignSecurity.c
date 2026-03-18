/*
 * XREFs of SeDeassignSecurity @ 0x140A1B270
 * Callers:
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
