/*
 * XREFs of ??$_Format_sed@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x18013A440
 * Callers:
 *     ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18013A63C (--$_Regex_replace1@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180131BD0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??$_Copy_unchecked@PEBGPEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@PEBG0V10@@Z @ 0x180139FB4 (--$_Copy_unchecked@PEBGPEBGV-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

__int64 *__fastcall std::_Format_sed<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  __int64 v9; // rdx
  __int128 *v10; // r8
  __int128 v11; // xmm1
  unsigned __int16 *v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  char v17; // [rsp+70h] [rbp+8h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  while ( v5 != a5 )
  {
    v9 = *v5++;
    if ( (_WORD)v9 == 38 )
    {
      v10 = *(__int128 **)(a2 + 16);
      if ( (*(_QWORD *)(a2 + 24) - (_QWORD)v10) / 24LL )
      {
        v11 = *v10;
        v12 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
        v13 = (__int64 *)&v17;
LABEL_10:
        a3 = *std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                v13,
                (unsigned __int16 *)v11,
                v12,
                a3);
      }
    }
    else
    {
      if ( (_WORD)v9 != 92 )
        goto LABEL_11;
      if ( v5 == a5 )
        break;
      v9 = *v5++;
      if ( (unsigned __int16)(v9 - 48) > 9u )
      {
LABEL_11:
        std::wstring::push_back(a3, v9);
        continue;
      }
      v14 = *(_QWORD *)(a2 + 16);
      v15 = (unsigned int)(v9 - 48);
      if ( v15 < (*(_QWORD *)(a2 + 24) - v14) / 24 )
      {
        v11 = *(_OWORD *)(v14 + 24 * v15);
        v12 = *(unsigned __int16 **)(v14 + 24 * v15 + 8);
        v13 = (__int64 *)&v18;
        goto LABEL_10;
      }
    }
  }
  *a1 = a3;
  return a1;
}
