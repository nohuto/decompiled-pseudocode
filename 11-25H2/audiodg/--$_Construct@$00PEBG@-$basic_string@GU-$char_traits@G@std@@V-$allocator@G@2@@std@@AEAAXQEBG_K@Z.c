/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x140018224
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140016868 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@_K1AEBV?$allocator@G@1@@Z @ 0x140016D80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@_K1AEBV-$allocator@G.c)
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x140017EA0 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140017FC8 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1400181E8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@Z @ 0x14004D270 (-GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironme.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400193B8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x1400193DC (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x140057D1C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  char *v7; // rax
  size_t v8; // rbx
  char *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbx

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  a1[3] = (char *)7;
  if ( a3 <= 7 )
  {
    a1[2] = (char *)a3;
    v11 = 2 * a3;
    memcpy_0(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v11) = 0;
  }
  else
  {
    v6 = std::wstring::_Calculate_growth(a1, a3);
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v6 + 1));
    a1[2] = (char *)a3;
    v8 = 2 * a3;
    *a1 = v7;
    a1[3] = (char *)v6;
    v9 = v7;
    memcpy_0(v7, a2, v8);
    result = 0LL;
    *(_WORD *)&v9[v8] = 0;
  }
  return result;
}
