/*
 * XREFs of ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1400ED11C
 * Callers:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400ED0EC (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14015C068 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1400ED144 (--1CCompClockInfo@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CCompClockInfo *__fastcall DirectComposition::CCompClockInfo::`scalar deleting destructor'(
        DirectComposition::CCompClockInfo *Buffer)
{
  DirectComposition::CCompClockInfo::~CCompClockInfo(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
