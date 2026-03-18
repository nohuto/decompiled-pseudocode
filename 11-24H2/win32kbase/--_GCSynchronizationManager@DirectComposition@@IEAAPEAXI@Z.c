/*
 * XREFs of ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140140654
 * Callers:
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CF04C (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x14014067C (--1CSynchronizationManager@DirectComposition@@IEAA@XZ.c)
 */

DirectComposition::CSynchronizationManager *__fastcall DirectComposition::CSynchronizationManager::`scalar deleting destructor'(
        DirectComposition::CSynchronizationManager *Buffer)
{
  DirectComposition::CSynchronizationManager::~CSynchronizationManager(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
