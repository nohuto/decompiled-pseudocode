/*
 * XREFs of RaidAdapterFreeDumpInfo @ 0x14003BFA8
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x14009A210 (RaUnitStorageFreeDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x140188924 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidAdapterCreateDumpInfo @ 0x1401BAF04 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDumpInfo(PVOID *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
