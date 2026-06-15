/*
 * XREFs of ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180127028
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18004E910 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A4F1C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x180127F1C (--$transform_primary@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@-$_.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012890C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180131BD0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(
        unsigned __int16 a1,
        unsigned int *a2,
        __int64 a3)
{
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 *v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-29h] BYREF
  __m128i v15; // [rsp+30h] [rbp-19h]
  __int128 v16; // [rsp+40h] [rbp-9h] BYREF
  __m128i si128; // [rsp+50h] [rbp+7h]
  _BYTE v18[32]; // [rsp+60h] [rbp+17h] BYREF

  v16 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = 0;
  LOWORD(v16) = 0;
  v14 = 0LL;
  v15 = si128;
  LOWORD(v14) = 0;
  std::wstring::push_back(&v14, a1);
  v6 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)&v14);
  v7 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
         a3,
         v18,
         v6,
         v6 + 2 * v15.m128i_i64[0]);
  std::wstring::operator=(&v14, v7);
  std::wstring::_Tidy_deallocate((__int64)v18);
  while ( a2 )
  {
    v8 = 0;
    if ( a2[3] )
    {
      while ( 1 )
      {
        std::wstring::assign((__int64)&v16, *((_QWORD *)a2 + 2) + 2LL * v8, *a2);
        v9 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)&v16);
        v10 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
                a3,
                v18,
                v9,
                v9 + 2 * si128.m128i_i64[0]);
        std::wstring::operator=(&v16, v10);
        std::wstring::_Tidy_deallocate((__int64)v18);
        std::wstring::c_str((__int64)&v14);
        v11 = std::wstring::c_str((__int64)&v16);
        if ( si128.m128i_i64[0] == v15.m128i_i64[0]
          && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v11, v12, si128.m128i_i64[0]) )
        {
          break;
        }
        v8 += *a2;
        if ( v8 >= a2[3] )
          goto LABEL_6;
      }
      v5 = 1;
      break;
    }
LABEL_6:
    a2 = (unsigned int *)*((_QWORD *)a2 + 3);
  }
  std::wstring::_Tidy_deallocate((__int64)&v14);
  std::wstring::_Tidy_deallocate((__int64)&v16);
  return v5;
}
