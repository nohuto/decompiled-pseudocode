/*
 * XREFs of ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x18013A820
 * Callers:
 *     ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18013A63C (--$_Regex_replace1@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x1801271DC (--$_Match@V-$allocator@V-$sub_match@PEBG@std@@@std@@@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG.c)
 *     ??0?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@51@@Z @ 0x18012816C (--0-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV-$regex_traits@G@1@PEAV_Root_n.c)
 *     ??1?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@XZ @ 0x18012853C (--1-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@XZ.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Regex_search2<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // rsi
  char v10; // bl
  __int64 v13; // rax
  _QWORD v14[21]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-60h]
  unsigned int v16; // [rsp+FCh] [rbp-4Ch]

  v8 = a1;
  if ( !*a4 )
    return 0;
  v10 = 0;
  if ( (a5 & 0x4000) != 0 && a1 != a2 )
    v8 = a1 + 2;
  std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
    (__int64)v14,
    v8,
    a2,
    (__int64)(a4 + 1),
    *a4,
    *(_DWORD *)(*a4 + 40),
    *(_DWORD *)(*a4 + 32),
    a5);
  if ( std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match<std::allocator<std::sub_match<unsigned short const *>>>(
         (__int64)v14,
         a3,
         0) )
  {
    goto LABEL_13;
  }
  if ( v8 != a2 && (a5 & 0x40) == 0 )
  {
    v16 = v16 & 0xFFFFDEFF | 0x100;
    while ( 1 )
    {
      v13 = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Skip(
              v14,
              v8 + 2,
              a2,
              0LL);
      v8 = v13;
      if ( v13 == a2 )
        break;
      v15 = v13;
      if ( std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match<std::allocator<std::sub_match<unsigned short const *>>>(
             (__int64)v14,
             a3,
             0) )
      {
        goto LABEL_13;
      }
    }
    v15 = a2;
    if ( std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match<std::allocator<std::sub_match<unsigned short const *>>>(
           (__int64)v14,
           a3,
           0) )
    {
LABEL_13:
      v10 = 1;
      if ( a3 )
      {
        *(_QWORD *)a3 = a6;
        *(_QWORD *)(a3 + 40) = a1;
        *(_BYTE *)(a3 + 56) = a1 != *(_QWORD *)(a3 + 48);
      }
    }
  }
  std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::~_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(v14);
  return v10;
}
