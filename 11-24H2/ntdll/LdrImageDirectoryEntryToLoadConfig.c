/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x180009600
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180008850 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180008BA0 (LdrInitSecurityCookie.c)
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800092B0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180009490 (RtlGuardCheckExceptionHandler.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpGetTargetRvaFlag @ 0x1800ECD50 (RtlpGetTargetRvaFlag.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180107258 (LdrpInitializeCfgScpHelpers.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180112FB0 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(__int64 a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
