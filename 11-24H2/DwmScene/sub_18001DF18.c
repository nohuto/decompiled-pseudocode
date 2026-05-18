/*
 * XREFs of sub_18001DF18 @ 0x18001DF18
 * Callers:
 *     sub_180084BFC @ 0x180084BFC (sub_180084BFC.c)
 * Callees:
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18000C738 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     sub_18001734C @ 0x18001734C (sub_18001734C.c)
 *     sub_18001D578 @ 0x18001D578 (sub_18001D578.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001DF18(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF
  struct std::_Facet_base *v8; // [rsp+48h] [rbp+20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)qword_1801C4460;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<char>::id);
  v3 = sub_18001D578(a1, v2);
  if ( !v3 )
  {
    v3 = (__int64)v7;
    if ( !v7 )
    {
      if ( std::ctype<char>::_Getcat(&v7, a1) == -1 )
      {
        o_abort();
        __debugbreak();
      }
      v4 = v7;
      v8 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = (__int64)v7;
      qword_1801C4460 = (__int64)v7;
      v8 = 0LL;
      sub_18001734C((__int64 (__fastcall ****)(_QWORD, __int64))&v8);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
