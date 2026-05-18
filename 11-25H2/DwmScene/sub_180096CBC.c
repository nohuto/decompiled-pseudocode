/*
 * XREFs of sub_180096CBC @ 0x180096CBC
 * Callers:
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 *     sub_18006CB88 @ 0x18006CB88 (sub_18006CB88.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_4 @ 0x1800D91F6 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800D91F6.c)
 *     sub_1800D923E @ 0x1800D923E (sub_1800D923E.c)
 *     sub_1800D92CE @ 0x1800D92CE (sub_1800D92CE.c)
 *     sub_1800D9F80 @ 0x1800D9F80 (sub_1800D9F80.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_5 @ 0x1800D9F92 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_5.c)
 *     sub_1800DB260 @ 0x1800DB260 (sub_1800DB260.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180096CBC(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = (__int64)sub_180036994(a1, &v4);
  if ( v4 )
    result = (**v4)(v4);
  if ( v5 )
    result = sub_18001050C(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010544(v3);
  return result;
}
