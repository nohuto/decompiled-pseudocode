/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x180022E20
 * Callers:
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x1800223C0 (LdrInitSecurityCookie.c)
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180022AD0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180022CB0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpGetTargetRvaFlag @ 0x1800ED530 (RtlpGetTargetRvaFlag.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180109B68 (LdrpInitializeCfgScpHelpers.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180115F40 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
