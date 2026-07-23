/*
 * XREFs of ZwOpenSection @ 0x1406A7A90
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x140640E00 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140C19E34 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
