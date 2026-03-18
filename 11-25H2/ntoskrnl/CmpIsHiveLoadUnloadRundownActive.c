/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140BA9ED8
 * Callers:
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
