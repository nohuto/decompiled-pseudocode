/*
 * XREFs of ?_Calculate_growth@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEBA_K_K@Z @ 0x18003E7E0
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18003E66C (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAX_K@Z @ 0x18009E788 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPt.c)
 *     ??$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU23@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800C5558 (--$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 *     ??$_Emplace_reallocate@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAU23@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x180115C4C (--$_Emplace_reallocate@AEAV-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@-$vector@ULockedList.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEAV21@@Z @ 0x18012EAA0 (--$_Emplace_reallocate@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012F548 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$alloca.c)
 *     ?_Clear_and_reserve_geometric@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_K@Z @ 0x180139720 (-_Clear_and_reserve_geometric@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$allocator@U_Grp_t@-$_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
