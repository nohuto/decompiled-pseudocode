/*
 * XREFs of ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x18002EE54
 * Callers:
 *     ??R_lambda_958c91c43235a8789bf8f41d13e0d823_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x18002F390 (--R_lambda_958c91c43235a8789bf8f41d13e0d823_@@QEBA@AEAULockedListEntry@-$CLockedList_UniqueValue.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18002FA04 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) )
    return 0;
  if ( *(_QWORD *)a1 && *(_QWORD *)a2 )
    return *(_QWORD *)a1 == *(_QWORD *)a2;
  return 1;
}
