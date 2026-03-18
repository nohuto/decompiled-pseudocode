/*
 * XREFs of SeReleaseImageValidationContext @ 0x140A982AC
 * Callers:
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140F048E8 )
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    ExFreePoolWithTag(a1, 0);
}
