/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140B94C90
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140B93DA0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140B93E00 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140B93EA0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140B940B0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140B940F0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140B94130 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140B94170 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140B941D0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140B94220 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140B94270 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140B942C0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140B94310 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140B943A0 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140B944A0 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140B94570 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140B94680 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140B946C0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140B94710 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140B94760 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140B947B0 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140B94980 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140B94B60 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140B94CE0 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B94D78 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
