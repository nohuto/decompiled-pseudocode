/*
 * XREFs of ??1CSyncData@DirectComposition@@QEAA@XZ @ 0x140140710
 * Callers:
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x1401406E8 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CSyncData::~CSyncData(char **this)
{
  if ( this[9] != (char *)this + 28 )
    GreDeleteFastMutex(this[9]);
}
