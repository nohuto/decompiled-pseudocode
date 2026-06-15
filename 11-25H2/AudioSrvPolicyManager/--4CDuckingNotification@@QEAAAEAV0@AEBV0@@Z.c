/*
 * XREFs of ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002EDD8
 * Callers:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18002E05C (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@std@@V_lambda_958c91c43235a8789bf8f41d13e0d823_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_958c91c43235a8789bf8f41d13e0d823_@@@Z @ 0x18002E9CC (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList_.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@2@0@Z @ 0x180031B64 (-erase@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V-$.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D2A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015CA0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

__int64 __fastcall CDuckingNotification::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  if ( a1 + 16 != a2 + 16 )
  {
    v5 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a2 + 16, a2, a3, a1 + 16);
    std::wstring::assign(v7, v5, *(_QWORD *)(v6 + 16), (__int64)v7);
  }
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v8;
  if ( v8 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 12), (volatile int *)a2);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      v9,
      (volatile int *)a2);
  return a1;
}
