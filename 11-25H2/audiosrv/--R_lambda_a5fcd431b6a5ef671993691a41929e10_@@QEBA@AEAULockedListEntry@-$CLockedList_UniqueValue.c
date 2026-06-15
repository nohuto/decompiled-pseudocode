/*
 * XREFs of ??R_lambda_a5fcd431b6a5ef671993691a41929e10_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@Z @ 0x1800C69B0
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@std@@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@Z @ 0x1800C6694 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList_.c)
 * Callees:
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800720D4 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 */

bool __fastcall _lambda_a5fcd431b6a5ef671993691a41929e10_::operator()(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  bool v5; // zf

  if ( !operator==((__int64 *)a2, *(_QWORD **)a1) )
    return 0;
  v4 = *(_BYTE **)(a1 + 8);
  v5 = (*(_DWORD *)(a2 + 8))-- == 1;
  *v4 = 1;
  return v5;
}
