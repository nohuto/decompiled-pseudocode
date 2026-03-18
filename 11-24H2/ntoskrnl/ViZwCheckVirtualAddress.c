/*
 * XREFs of ViZwCheckVirtualAddress @ 0x140B94D78
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140B93C50 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140B93CD0 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140B93D10 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140B93D60 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140B93DA0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140B93E00 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140B93EA0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140B93EF0 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140B93F20 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140B93F60 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140B93FD0 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140B94030 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140B940B0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140B940F0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140B94130 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140B94170 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140B941D0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140B94220 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140B94270 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140B942C0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140B94310 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteBootEntry_Entry @ 0x140B94370 (VfZwDeleteBootEntry_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140B94400 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140B94470 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140B944A0 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140B944E0 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140B94530 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140B945B0 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140B94600 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140B94680 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140B946C0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140B94710 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140B94760 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140B947B0 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140B94800 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140B94850 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140B948C0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140B94930 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140B94980 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140B949C0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140B94A10 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140B94A50 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140B94AA0 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140B94B10 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140B94BA0 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140B94BF0 (VfZwSetValueKey_Entry.c)
 *     ViZwCheckObjectAttributes @ 0x140B94C90 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140B94CE0 (ViZwCheckUnicodeString.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ViZwCheckVirtualAddress(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 result; // rax

  result = BugCheckParameter3 - 1;
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFELL )
    return CarReportRuleViolationFromNt(196, 227LL, a2, BugCheckParameter3, 0LL, 8u, a2);
  return result;
}
