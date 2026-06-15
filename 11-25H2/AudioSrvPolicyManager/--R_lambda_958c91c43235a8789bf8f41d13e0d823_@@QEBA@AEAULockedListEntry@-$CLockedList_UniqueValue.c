/*
 * XREFs of ??R_lambda_958c91c43235a8789bf8f41d13e0d823_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x18002F390
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@std@@V_lambda_958c91c43235a8789bf8f41d13e0d823_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_958c91c43235a8789bf8f41d13e0d823_@@@Z @ 0x18002E9CC (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList_.c)
 * Callees:
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x18002EE54 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 */

bool __fastcall _lambda_958c91c43235a8789bf8f41d13e0d823_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE *v4; // rax
  bool v5; // zf

  if ( !operator==(a2, *a1) )
    return 0;
  v4 = *(_BYTE **)(v3 + 8);
  v5 = (*(_DWORD *)(v2 + 56))-- == 1;
  *v4 = 1;
  return v5;
}
