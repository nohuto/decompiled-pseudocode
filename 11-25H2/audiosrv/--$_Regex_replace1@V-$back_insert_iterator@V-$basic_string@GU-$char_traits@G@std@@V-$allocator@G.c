/*
 * XREFs of ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18013A63C
 * Callers:
 *     ??$regex_replace@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18013ADB4 (--$regex_replace@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Copy_unchecked@PEBGPEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@PEBG0V10@@Z @ 0x180139FB4 (--$_Copy_unchecked@PEBGPEBGV-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??$_Format_default@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x18013A210 (--$_Format_default@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$.c)
 *     ??$_Format_sed@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x18013A440 (--$_Format_sed@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$basi.c)
 *     ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x18013A820 (--$_Regex_search2@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@GV-$regex_traits@G@2@PEBG@std@@Y.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Regex_replace1<std::back_insert_iterator<std::wstring>,unsigned short const *,std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v7; // rsi
  int v10; // r12d
  __int64 v11; // r13
  unsigned __int16 *v12; // r9
  __int64 *v13; // r8
  __int64 v14; // r8
  __int64 *v15; // rax
  char *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  int v19; // eax
  unsigned __int16 *v21; // [rsp+20h] [rbp-81h]
  __int16 v22; // [rsp+28h] [rbp-79h]
  __int64 v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h] BYREF
  char v25; // [rsp+48h] [rbp-59h]
  __int128 v26; // [rsp+50h] [rbp-51h]
  __int128 v27; // [rsp+60h] [rbp-41h]
  unsigned __int16 *v28; // [rsp+70h] [rbp-31h]
  char v29; // [rsp+78h] [rbp-29h]
  __int128 v30; // [rsp+80h] [rbp-21h]
  char v31; // [rsp+90h] [rbp-11h]
  _QWORD v32[2]; // [rsp+98h] [rbp-9h] BYREF
  char v33; // [rsp+A8h] [rbp+7h]
  __int64 v34; // [rsp+F0h] [rbp+4Fh] BYREF
  __int64 v35; // [rsp+100h] [rbp+5Fh] BYREF

  v7 = (unsigned __int16 *)a3;
  v24 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v31 = 0;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v33 = 0;
  v10 = 0;
  if ( (unsigned __int8)std::_Regex_search2<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
                          a3,
                          (_DWORD)a4,
                          (unsigned int)&v24,
                          a5,
                          0,
                          a3) )
  {
    v11 = a6;
    while ( 1 )
    {
      std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
        &v34,
        *((unsigned __int16 **)&v27 + 1),
        v28,
        a2);
      v12 = (unsigned __int16 *)std::wstring::c_str(v11);
      v21 = &v12[*(_QWORD *)(v11 + 16)];
      v14 = *v13;
      if ( (v10 & 0x400) != 0 )
        v15 = std::_Format_sed<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                &v35,
                (__int64)&v24,
                v14,
                v12,
                v21);
      else
        v15 = std::_Format_default<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                &v23,
                &v24,
                v14,
                v12,
                v21,
                v22);
      a2 = *v15;
      v16 = (char *)v26;
      v17 = v32;
      if ( (*((_QWORD *)&v26 + 1) - (_QWORD)v26) / 24LL )
        v17 = (_QWORD *)v26;
      v7 = (unsigned __int16 *)v17[1];
      if ( v7 == a4 )
        break;
      if ( (*((_QWORD *)&v26 + 1) - (_QWORD)v26) / 24LL )
      {
        v18 = (_QWORD *)v26;
      }
      else
      {
        v16 = (char *)v32;
        v18 = v32;
      }
      if ( *(_QWORD *)v16 != v18[1] )
        v10 |= 0x100u;
      v19 = 0x2000;
      if ( *(_QWORD *)v16 != v18[1] )
        v19 = 0;
      if ( !(unsigned __int8)std::_Regex_search2<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
                               (_DWORD)v7,
                               (_DWORD)a4,
                               (unsigned int)&v24,
                               a5,
                               v10 | (unsigned int)v19,
                               (__int64)v7) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v16 = (char *)v26;
  }
  *a1 = *std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
           &v34,
           v7,
           a4,
           a2);
  if ( v16 )
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(24 * (((_QWORD)v27 - (_QWORD)v16) / 24LL)));
  return a1;
}
