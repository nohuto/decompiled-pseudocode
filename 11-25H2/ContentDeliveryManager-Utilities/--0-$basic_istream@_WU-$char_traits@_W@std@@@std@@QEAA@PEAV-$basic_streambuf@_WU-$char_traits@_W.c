/*
 * XREFs of ??0?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@PEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@1@_N@Z @ 0x18009D4C8
 * Callers:
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x18009D51C (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x1800A3C04 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800882E8 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 */

_QWORD *__fastcall std::wistream::wistream(_QWORD *a1, __int64 a2)
{
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 24;
  a1[1] = 0LL;
  std::wios::init((__int64)a1 + *(int *)(*a1 + 4LL), a2);
  return a1;
}
