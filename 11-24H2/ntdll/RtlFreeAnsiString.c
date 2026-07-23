/*
 * XREFs of RtlFreeAnsiString @ 0x180081430
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     RtlIsNameInExpression @ 0x18007B800 (RtlIsNameInExpression.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpLogEtwDllSearchResults @ 0x180092B74 (LdrpLogEtwDllSearchResults.c)
 *     LdrpQuerySxSMUIFile @ 0x18009A09C (LdrpQuerySxSMUIFile.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800A6F4C (RtlpCreateIFEOKeyFilterKey.c)
 *     EtwpUpdateUmLogger @ 0x1800A8584 (EtwpUpdateUmLogger.c)
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x1800A9B30 (EtwpFlushUmLogger.c)
 *     EtwpFreeLoggerContext @ 0x1800AA48C (EtwpFreeLoggerContext.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7798 (RtlpTpIoDllLoaded.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800ED07C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x18010F900 (RtlIsNameInUnUpcasedExpression.c)
 *     LdrpCheckAppDirType @ 0x180113030 (LdrpCheckAppDirType.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180141B0C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    RtlpSysVolFree(Buffer);
    *UnicodeString = 0LL;
  }
}
