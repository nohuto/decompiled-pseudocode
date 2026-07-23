/*
 * XREFs of LdrpInitMuiCrits @ 0x1402DCF84
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409473B0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  ULONG_PTR *Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &MuiMutex;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
