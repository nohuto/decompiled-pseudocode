/*
 * XREFs of RtlCopyDeviceMemory @ 0x140520F1C
 * Callers:
 *     HalpPreserveNvsArea @ 0x1404F77C4 (HalpPreserveNvsArea.c)
 *     HalpRestoreNvsArea @ 0x1404F783C (HalpRestoreNvsArea.c)
 *     HalpAcpiCopyBiosTable @ 0x14053D1B0 (HalpAcpiCopyBiosTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4388 (WmipGetSMBiosEventlog.c)
 *     WmipGetSMBiosTableData @ 0x140A42038 (WmipGetSMBiosTableData.c)
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 */

char *__fastcall RtlCopyDeviceMemory(char *a1, char *a2, size_t a3)
{
  char *v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rcx

  if ( !a3 )
    return a1;
  v5 = a2;
  v6 = (unsigned __int64)a2;
  if ( a1 < a2 )
    v5 = a1;
  v7 = &v5[a3];
  if ( a1 >= a2 )
    v6 = (unsigned __int64)a1;
  if ( (unsigned __int64)v7 > v6 )
    __fastfail(5u);
  return (char *)RtlCopyVolatileMemory(a1, a2, a3);
}
