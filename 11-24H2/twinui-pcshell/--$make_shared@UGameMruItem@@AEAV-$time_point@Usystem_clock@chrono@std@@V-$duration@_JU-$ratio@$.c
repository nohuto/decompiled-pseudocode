/*
 * XREFs of ??$make_shared@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YA?AV?$shared_ptr@UGameMruItem@@@0@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@11@Z @ 0x180314C44
 * Callers:
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18020CF24 (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 * Callees:
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BA298 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ??0GameMruItem@@QEAA@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@11@Z @ 0x180218F40 (--0GameMruItem@@QEAA@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,std::wstring &,std::wstring &,std::wstring &>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _DWORD *v9; // r14
  __int128 *v10; // rax
  __int64 v11; // rdx
  _QWORD *result; // rax
  __int128 v13; // [rsp+40h] [rbp-78h] BYREF
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  __int128 v15; // [rsp+60h] [rbp-58h] BYREF
  __int64 v16; // [rsp+70h] [rbp-48h] BYREF
  __int64 v17; // [rsp+80h] [rbp-38h] BYREF
  __int64 v18; // [rsp+90h] [rbp-28h] BYREF

  v9 = operator new(0x78uLL);
  *(_OWORD *)v9 = 0LL;
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj2<GameMruItem>::`vftable';
  v13 = *(_OWORD *)std::wstring::operator std::basic_string_view<unsigned short>(a5, &v16);
  v14 = *(_OWORD *)std::wstring::operator std::basic_string_view<unsigned short>(a4, &v17);
  v10 = (__int128 *)std::wstring::operator std::basic_string_view<unsigned short>(a3, &v18);
  v11 = *a2;
  v15 = *v10;
  GameMruItem::GameMruItem((__int64)(v9 + 4), v11, &v15, &v14, &v13);
  *a1 = v9 + 4;
  result = a1;
  a1[1] = v9;
  return result;
}
