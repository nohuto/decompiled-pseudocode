/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140B96C90
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140B95DA0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140B95E00 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140B95EA0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140B960B0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140B960F0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140B96130 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140B96170 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140B961D0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140B96220 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140B96270 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140B962C0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140B96310 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140B963A0 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140B964A0 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140B96570 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140B96680 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140B966C0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140B96710 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140B96760 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140B967B0 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140B96980 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140B96B60 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140B96CE0 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
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
