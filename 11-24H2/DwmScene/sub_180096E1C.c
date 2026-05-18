/*
 * XREFs of sub_180096E1C @ 0x180096E1C
 * Callers:
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_4 @ 0x1800D9356 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800D9356.c)
 *     sub_1800D939E @ 0x1800D939E (sub_1800D939E.c)
 *     sub_1800D942E @ 0x1800D942E (sub_1800D942E.c)
 *     sub_1800DA0E0 @ 0x1800DA0E0 (sub_1800DA0E0.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_5 @ 0x1800DA0F2 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_5.c)
 *     sub_1800DB3C0 @ 0x1800DB3C0 (sub_1800DB3C0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180096E1C(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = (__int64)sub_180036AF4(a1, &v4);
  if ( v4 )
    result = (**v4)(v4);
  if ( v5 )
    result = sub_18001060C(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010644(v3);
  return result;
}
