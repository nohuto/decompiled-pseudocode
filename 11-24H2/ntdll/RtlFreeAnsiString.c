/*
 * XREFs of RtlFreeAnsiString @ 0x1800B4B90
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpLogEtwDllSearchResults @ 0x180076294 (LdrpLogEtwDllSearchResults.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x18008B48C (RtlpCreateIFEOKeyFilterKey.c)
 *     EtwpUpdateUmLogger @ 0x18008CAC4 (EtwpUpdateUmLogger.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x18008E070 (EtwpFlushUmLogger.c)
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800ADA30 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800AEF60 (RtlIsNameInExpression.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpTpIoDllLoaded @ 0x1800BF9D8 (RtlpTpIoDllLoaded.c)
 *     LdrpQuerySxSMUIFile @ 0x1800D11A0 (LdrpQuerySxSMUIFile.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F278C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     LdrpCheckAppDirType @ 0x1801180BC (LdrpCheckAppDirType.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014375C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    RtlpSysVolFree((__int64)Buffer);
    *UnicodeString = 0LL;
  }
}
