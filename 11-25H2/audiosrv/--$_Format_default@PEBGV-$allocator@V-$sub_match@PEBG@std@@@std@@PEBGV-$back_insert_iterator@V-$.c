/*
 * XREFs of ??$_Format_default@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x18013A210
 * Callers:
 *     ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18013A63C (--$_Regex_replace1@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180131BD0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??$_Copy_unchecked@PEBGPEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@PEBG0V10@@Z @ 0x180139FB4 (--$_Copy_unchecked@PEBGPEBGV-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??4?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAAEAV01@$$QEAG@Z @ 0x18013BAB4 (--4-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QE.c)
 */

__int64 *__fastcall std::_Format_default<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 a6)
{
  unsigned __int16 *v6; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 *v12; // r14
  unsigned __int16 *v13; // r8
  __int64 *v14; // rcx
  unsigned __int16 *v15; // rdx
  __int128 *v16; // r8
  __int128 v17; // xmm1
  unsigned int v18; // ecx
  int v19; // edx
  char v20; // r14
  __int64 v21; // r8
  __int64 v22; // r8
  __int128 v23; // xmm1
  char v25; // [rsp+20h] [rbp-30h] BYREF
  char v26; // [rsp+28h] [rbp-28h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  char v28; // [rsp+A0h] [rbp+50h] BYREF
  char v29; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a4;
  while ( v6 != a5 )
  {
    v10 = *v6;
    v11 = 48LL;
    ++v6;
    if ( (_WORD)v10 != 36 )
      goto LABEL_26;
    v12 = v6;
    if ( v6 == a5 )
    {
      a6 = 36;
      a5 = (unsigned __int16 *)a3;
      std::back_insert_iterator<std::wstring>::operator=(&a5, &a6, 48LL);
      break;
    }
    ++v6;
    switch ( *v12 )
    {
      case '$':
        a6 = 36;
        break;
      case '`':
        v13 = (unsigned __int16 *)a2[6];
        v14 = (__int64 *)&v28;
        v15 = (unsigned __int16 *)a2[5];
LABEL_9:
        a3 = *std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                v14,
                v15,
                v13,
                a3);
        continue;
      case '\'':
        v13 = (unsigned __int16 *)a2[9];
        v14 = (__int64 *)&v29;
        v15 = (unsigned __int16 *)a2[8];
        goto LABEL_9;
      case '&':
        v16 = (__int128 *)a2[2];
        if ( !((a2[3] - (_QWORD)v16) / 24LL) )
          continue;
        v17 = *v16;
        v13 = (unsigned __int16 *)*((_QWORD *)v16 + 1);
        v14 = (__int64 *)&v25;
        v15 = (unsigned __int16 *)v17;
        goto LABEL_9;
      default:
        if ( (unsigned __int16)(*v12 - 48) > 9u )
        {
          a6 = 36;
          v27 = a3;
          std::back_insert_iterator<std::wstring>::operator=(&v27, &a6, 48LL);
          v10 = *v12;
LABEL_26:
          std::wstring::push_back(a3, v10);
          continue;
        }
        v18 = *v12 - 48;
        if ( v6 == a5 || (v19 = *v6, (unsigned __int16)(v19 - 48) > 9u) )
        {
          v20 = 0;
        }
        else
        {
          v20 = 1;
          ++v6;
          v18 = v19 + 2 * (5 * v18 - 24);
        }
        if ( v18 )
        {
          v22 = a2[2];
          if ( v18 >= (unsigned __int64)((a2[3] - v22) / 24) )
            continue;
          v23 = *(_OWORD *)(v22 + 24LL * v18);
          v13 = *(unsigned __int16 **)(v22 + 24LL * v18 + 8);
          v14 = (__int64 *)&v26;
          v15 = (unsigned __int16 *)v23;
          goto LABEL_9;
        }
        a6 = 36;
        v27 = a3;
        std::back_insert_iterator<std::wstring>::operator=(&v27, &a6, 48LL);
        v27 = a3;
        a6 = 48;
        std::back_insert_iterator<std::wstring>::operator=(&v27, &a6, v21);
        if ( !v20 )
          continue;
        a6 = 48;
        break;
    }
    v27 = a3;
    std::back_insert_iterator<std::wstring>::operator=(&v27, &a6, v11);
  }
  *a1 = a3;
  return a1;
}
