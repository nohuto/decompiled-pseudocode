/*
 * XREFs of ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A6E48
 * Callers:
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800A6A40 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005D9A4 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180097048 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800985D8 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z @ 0x1800A719C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::NotificationManager::Details::ReplaceAll(
        _QWORD *a1,
        __int64 a2,
        wchar_t *a3,
        __int64 a4)
{
  __int64 v7; // r8
  _QWORD *v8; // rax
  size_t v9; // rax
  unsigned __int64 v10; // rax

  std::wstring::wstring((__int64)a1);
  while ( 1 )
  {
    v9 = std::char_traits<wchar_t>::length(a3);
    v10 = std::wstring::find(a1, a3, 0LL, v9);
    if ( v10 == -1LL )
      break;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = (_QWORD *)std::wstring::replace(a1, v10, v7, a4);
    std::wstring::operator=(a1, v8);
  }
  return a1;
}
