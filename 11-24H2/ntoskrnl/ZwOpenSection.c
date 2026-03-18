/*
 * XREFs of ZwOpenSection @ 0x1406A6AF0
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x140642840 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140C17E34 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4953C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
