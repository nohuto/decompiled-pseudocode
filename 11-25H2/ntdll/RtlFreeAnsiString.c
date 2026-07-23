/*
 * XREFs of RtlFreeAnsiString @ 0x1800832E0
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     RtlGetImageFileMachines @ 0x180015120 (RtlGetImageFileMachines.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180067110 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800688A0 (RtlIsNameInExpression.c)
 *     LdrpLogEtwDllSearchResults @ 0x18006F538 (LdrpLogEtwDllSearchResults.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800B441C (RtlpCreateIFEOKeyFilterKey.c)
 *     EtwpUpdateUmLogger @ 0x1800B5774 (EtwpUpdateUmLogger.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x1800B6F10 (EtwpFlushUmLogger.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     RtlpTpIoDllLoaded @ 0x1800C3F68 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F42FC (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     LdrpCheckAppDirType @ 0x18011B140 (LdrpCheckAppDirType.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180144E4C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
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
