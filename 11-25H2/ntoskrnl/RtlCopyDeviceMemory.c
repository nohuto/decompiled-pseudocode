/*
 * XREFs of RtlCopyDeviceMemory @ 0x14051E79C
 * Callers:
 *     HalpPreserveNvsArea @ 0x1404F53E4 (HalpPreserveNvsArea.c)
 *     HalpRestoreNvsArea @ 0x1404F545C (HalpRestoreNvsArea.c)
 *     HalpAcpiCopyBiosTable @ 0x14053A980 (HalpAcpiCopyBiosTable.c)
 *     WmipGetSMBiosEventlog @ 0x140794FB8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSMBiosTableData @ 0x140A3D178 (WmipGetSMBiosTableData.c)
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
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
