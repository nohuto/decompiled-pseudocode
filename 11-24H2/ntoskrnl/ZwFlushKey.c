/*
 * XREFs of ZwFlushKey @ 0x1406A91F0
 * Callers:
 *     VfClearVerifierSettings @ 0x14060E360 (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x14063E7A0 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x140651D8C (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x1407CB280 (CmpInterlockedFunction.c)
 *     BcdFlushStore @ 0x14081235C (BcdFlushStore.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
