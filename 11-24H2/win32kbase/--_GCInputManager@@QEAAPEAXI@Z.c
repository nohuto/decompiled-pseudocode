/*
 * XREFs of ??_GCInputManager@@QEAAPEAXI@Z @ 0x140239F6C
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1401486E0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x140239FA0 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ @ 0x140126F40 (--1-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ.c)
 */

char *__fastcall CInputManager::`scalar deleting destructor'(char *Buffer)
{
  CStructDynamicArray<CInputManager::PointerCaptureInfo>::~CStructDynamicArray<CInputManager::PointerCaptureInfo>((__int64)(Buffer + 16));
  GreDeleteFastMutex(Buffer);
  return Buffer;
}
