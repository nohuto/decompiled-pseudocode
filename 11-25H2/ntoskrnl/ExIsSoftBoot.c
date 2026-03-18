/*
 * XREFs of ExIsSoftBoot @ 0x1404F7080
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     EtwpSavePersistedLoggers @ 0x1407A102C (EtwpSavePersistedLoggers.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 *     BapdRecordFirmwareBootStats @ 0x140B50B80 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140EFE818 & 4) != 0;
}
