/*
 * XREFs of ?get_weekday@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B4BE8
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B3BD0 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_weekday(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int128 v7; // xmm1
  void (__fastcall *v9)(__int64, __int64, __int128 *, __int128 *, __int64, __int64, __int64); // rax
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = *a3;
  v9 = *(void (__fastcall **)(__int64, __int64, __int128 *, __int128 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 48LL);
  v11 = *a4;
  v12 = v7;
  v9(a1, a2, &v12, &v11, a5, a6, a7);
  return a2;
}
