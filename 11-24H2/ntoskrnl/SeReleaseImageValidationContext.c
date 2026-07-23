/*
 * XREFs of SeReleaseImageValidationContext @ 0x140A94A68
 * Callers:
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1, __int64 a2)
{
  if ( qword_140F04B88 )
    guard_dispatch_icall_no_overrides(a1, a2);
  else
    ExFreePoolWithTag(a1, 0);
}
