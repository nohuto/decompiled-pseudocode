/*
 * XREFs of ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x18012EF34
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801399A8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x180148E6C (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A1504 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x18012FFDC (--$transform_primary@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@-$_.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801309D8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x18013AC78 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(
        unsigned __int16 a1,
        unsigned int *a2,
        __int64 a3)
{
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 *v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v21; // [rsp+20h] [rbp-29h] BYREF
  __m128i v22; // [rsp+30h] [rbp-19h]
  __int128 v23; // [rsp+40h] [rbp-9h] BYREF
  __m128i si128; // [rsp+50h] [rbp+7h]
  _BYTE v25[32]; // [rsp+60h] [rbp+17h] BYREF

  v23 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = 0;
  LOWORD(v23) = 0;
  v21 = 0LL;
  v22 = si128;
  LOWORD(v21) = 0;
  std::wstring::push_back(&v21, a1);
  v7 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)&v21, v6);
  v8 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
         a3,
         v25,
         v7,
         v7 + 2 * v22.m128i_i64[0]);
  std::wstring::operator=(&v21, v8);
  std::wstring::_Tidy_deallocate((__int64)v25, v9);
  while ( a2 )
  {
    v11 = 0;
    if ( a2[3] )
    {
      while ( 1 )
      {
        std::wstring::assign((__int64)&v23, *((_QWORD *)a2 + 2) + 2LL * v11, *a2);
        v13 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)&v23, v12);
        v14 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
                a3,
                v25,
                v13,
                v13 + 2 * si128.m128i_i64[0]);
        std::wstring::operator=(&v23, v14);
        std::wstring::_Tidy_deallocate((__int64)v25, v15);
        v17 = std::wstring::c_str((__int64)&v21, v16);
        v18 = std::wstring::c_str((__int64)&v23, v17);
        if ( si128.m128i_i64[0] == v22.m128i_i64[0]
          && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v18, v10, si128.m128i_i64[0]) )
        {
          break;
        }
        v11 += *a2;
        if ( v11 >= a2[3] )
          goto LABEL_6;
      }
      v5 = 1;
      break;
    }
LABEL_6:
    a2 = (unsigned int *)*((_QWORD *)a2 + 3);
  }
  std::wstring::_Tidy_deallocate((__int64)&v21, (__int64)v10);
  std::wstring::_Tidy_deallocate((__int64)&v23, v19);
  return v5;
}
