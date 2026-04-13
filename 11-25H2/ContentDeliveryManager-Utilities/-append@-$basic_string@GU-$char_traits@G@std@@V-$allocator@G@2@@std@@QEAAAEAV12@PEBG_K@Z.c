/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069DCC
 * Callers:
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18006A5FC (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180087E10 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800A59BC (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800A673C (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005ABA8 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Inside@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_NPEB_W@Z @ 0x18005B1DC (-_Inside@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_NPEB_W@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005BA30 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005BFB8 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, _BYTE *a2, unsigned __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rax

  if ( std::wstring::_Inside(a1, (unsigned __int64)a2) )
  {
    if ( a1[3] < 8uLL )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    return std::wstring::append(a1, a1, (a2 - (_BYTE *)v6) >> 1, a3);
  }
  else
  {
    v8 = a1[2];
    if ( ~v8 <= a3 )
      std::_Xlength_error("string too long");
    if ( a3 )
    {
      v9 = v8 + a3;
      if ( std::wstring::_Grow(a1, v8 + a3, 0) )
      {
        if ( a1[3] < 8uLL )
          v10 = a1;
        else
          v10 = (_QWORD *)*a1;
        std::char_traits<wchar_t>::copy((char *)v10 + 2 * a1[2], a2, a3);
        if ( a1[3] < 8uLL )
          v11 = a1;
        else
          v11 = (_QWORD *)*a1;
        a1[2] = v9;
        *((_WORD *)v11 + v9) = 0;
      }
    }
    return a1;
  }
}
