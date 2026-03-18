/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140BB9E48
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmpInitHiveFromFile @ 0x14092EC1C (CmpInitHiveFromFile.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
