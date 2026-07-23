/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x180036000
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180035250 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x1800355A0 (LdrInitSecurityCookie.c)
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180035CB0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180035E90 (RtlGuardCheckExceptionHandler.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpGetTargetRvaFlag @ 0x1800E7AD8 (RtlpGetTargetRvaFlag.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180102188 (LdrpInitializeCfgScpHelpers.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010E270 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
