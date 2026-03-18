/*
 * XREFs of LdrpInitMuiCrits @ 0x14044F178
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14044E92C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14044EF40 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14095F8F0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  ULONG_PTR *Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &MuiMutex;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
