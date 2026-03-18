/*
 * XREFs of ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x140073364
 * Callers:
 *     DCompositionProcessCallout @ 0x140073290 (DCompositionProcessCallout.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400732D8 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400735D0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::`scalar deleting destructor'(
        DirectComposition::CProcessData *Buffer)
{
  DirectComposition::CProcessData::~CProcessData(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
