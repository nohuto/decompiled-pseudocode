/*
 * XREFs of sub_18001DEA0 @ 0x18001DEA0
 * Callers:
 *     sub_18002B6B0 @ 0x18002B6B0 (sub_18002B6B0.c)
 * Callees:
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18000C2D8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     sub_18001724C @ 0x18001724C (sub_18001724C.c)
 *     sub_18001D418 @ 0x18001D418 (sub_18001D418.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001DEA0(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF
  struct std::_Facet_base *v8; // [rsp+48h] [rbp+20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)qword_1801C3458;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<wchar_t>::id);
  v3 = sub_18001D418(a1, v2);
  if ( !v3 )
  {
    v3 = (__int64)v7;
    if ( !v7 )
    {
      if ( std::ctype<wchar_t>::_Getcat(&v7, a1) == -1 )
      {
        o_abort();
        __debugbreak();
      }
      v4 = v7;
      v8 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = (__int64)v7;
      qword_1801C3458 = (__int64)v7;
      v8 = 0LL;
      sub_18001724C((__int64 (__fastcall ****)(_QWORD, __int64))&v8);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
