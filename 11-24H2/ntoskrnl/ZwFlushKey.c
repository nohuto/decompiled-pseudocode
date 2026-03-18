/*
 * XREFs of ZwFlushKey @ 0x1406A8250
 * Callers:
 *     VfClearVerifierSettings @ 0x14060FDA0 (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1406401E0 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x14065362C (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x1407CAD90 (CmpInterlockedFunction.c)
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
