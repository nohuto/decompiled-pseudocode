/*
 * XREFs of SeReleaseImageValidationContext @ 0x140A94118
 * Callers:
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140F04508 )
    guard_dispatch_icall_no_overrides(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
