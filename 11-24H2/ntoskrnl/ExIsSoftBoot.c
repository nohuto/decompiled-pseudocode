/*
 * XREFs of ExIsSoftBoot @ 0x1404F7160
 * Callers:
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x1407472C8 (PoClearTransitionMarker.c)
 *     EtwpSavePersistedLoggers @ 0x1407B084C (EtwpSavePersistedLoggers.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 *     BapdRecordFirmwareBootStats @ 0x140B62D80 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140EFEE18 & 4) != 0;
}
