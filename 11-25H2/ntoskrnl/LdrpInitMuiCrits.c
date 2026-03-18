/*
 * XREFs of LdrpInitMuiCrits @ 0x1402F28A8
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1402F2670 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404900C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140825180 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  ULONG_PTR *Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &MuiMutex;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
