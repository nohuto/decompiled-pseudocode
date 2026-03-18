/*
 * XREFs of ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x1401406E8
 * Callers:
 *     ?RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z @ 0x1400737B0 (-RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z @ 0x14007544C (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z.c)
 *     ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x14014067C (--1CSynchronizationManager@DirectComposition@@IEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CSyncData@DirectComposition@@QEAA@XZ @ 0x140140710 (--1CSyncData@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CSyncData *__fastcall DirectComposition::CSyncData::`scalar deleting destructor'(
        DirectComposition::CSyncData *Buffer)
{
  DirectComposition::CSyncData::~CSyncData(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
