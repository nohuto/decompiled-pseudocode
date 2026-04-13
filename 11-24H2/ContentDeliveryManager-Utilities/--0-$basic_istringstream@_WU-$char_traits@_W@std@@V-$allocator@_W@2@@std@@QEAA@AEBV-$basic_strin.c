/*
 * XREFs of ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x18009D8BC
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18009D974 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800B31B0 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x18004AC50 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x18005B12C (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 *     ??0?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@PEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@1@_N@Z @ 0x18009D868 (--0-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@PEAV-$basic_streambuf@_WU-$char_traits@_W.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::wistringstream::wistringstream(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r8

  *a1 = &std::wistringstream::`vbtable';
  a1[18] = &std::wios::`vftable';
  v4 = a1 + 2;
  std::wistream::wistream(a1, (__int64)(a1 + 2));
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istringstream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>((__int64)v4);
  *v4 = &std::basic_stringbuf<unsigned short>::`vftable';
  v5 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  std::wstringbuf::_Init((__int64)v4, (__int64)a2, v5, 2);
  return a1;
}
