/*
 * XREFs of ExIsSoftBoot @ 0x1404F9880
 * Callers:
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 *     EtwpSavePersistedLoggers @ 0x1407B03FC (EtwpSavePersistedLoggers.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140EFEAF8 & 4) != 0;
}
