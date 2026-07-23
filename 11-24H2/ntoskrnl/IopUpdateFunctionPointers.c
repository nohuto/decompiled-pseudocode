/*
 * XREFs of IopUpdateFunctionPointers @ 0x14059364C
 * Callers:
 *     IoPerfInit @ 0x1404CBBE8 (IoPerfInit.c)
 *     IopIrpExtensionControl @ 0x140593578 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x14059457C (IoPerfReset.c)
 *     ViIovPluginUnload @ 0x1406A5090 (ViIovPluginUnload.c)
 *     IoVerifierInit @ 0x140B84318 (IoVerifierInit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // ebx
  __int32 v7; // r8d
  volatile __int32 *v8; // rcx
  __int32 v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 )
    v6 = IopFunctionPointerMask | a1;
  else
    v6 = IopFunctionPointerMask & ~a1;
  v7 = 1;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&IopDispatchAllocateIrp, 1);
    _InterlockedExchange(&IopDispatchCallDriver, 1);
    v8 = &IopDispatchFreeIrp;
    _InterlockedExchange(&IopDispatchCompleteRequest, 1);
  }
  else
  {
    v7 = 2;
    _InterlockedExchange(&IopDispatchFreeIrp, 0);
    v8 = &IopDispatchAllocateIrp;
    v9 = (IopFunctionPointerMask & 2) != 0 ? 3 : 0;
    _InterlockedExchange(&IopDispatchCallDriver, v9);
    _InterlockedExchange(&IopDispatchCompleteRequest, v9);
    if ( (IopFunctionPointerMask & 4) == 0 )
      v7 = 0;
  }
  _InterlockedExchange(v8, v7);
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
