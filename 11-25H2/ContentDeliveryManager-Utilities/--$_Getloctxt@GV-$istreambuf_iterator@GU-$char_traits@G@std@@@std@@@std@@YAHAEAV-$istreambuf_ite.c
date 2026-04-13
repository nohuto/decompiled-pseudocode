/*
 * XREFs of ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180048B18
 * Callers:
 *     ?do_get_monthname@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180019360 (-do_get_monthname@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180019600 (-do_get_weekday@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18005C9F0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005C9F0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18009FC10 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18009FC10.c)
 *     ?do_get_monthname@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B42C0 (-do_get_monthname@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-.c)
 *     ?do_get_weekday@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B4480 (-do_get_weekday@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DC3C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x18004AAE8 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004CC20 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005AC38 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int16 *a4)
{
  __int64 v6; // r8
  __int16 v7; // cx
  unsigned __int64 v8; // rax
  char v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int64 v13; // r15
  __int16 v15; // ax
  void **v16; // rax
  void **v17; // rax
  __int16 v18; // ax
  char v19; // cl
  void **v20; // rax
  void *v23[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  if ( *a4 )
  {
    v7 = *a4;
    do
    {
      v8 = a3 + 1;
      if ( v7 != *a4 )
        v8 = a3;
      a3 = v8;
      v7 = a4[++v6];
    }
    while ( v7 );
  }
  std::string::string(v23, a3, 0LL);
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -2;
  v13 = 1LL;
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = a4[v10];
        if ( !v15 || v15 == *a4 )
          break;
        ++v10;
      }
      v16 = v23;
      if ( v24 >= 0x10 )
        v16 = (void **)v23[0];
      if ( *((_BYTE *)v16 + v11) )
      {
        v17 = v23;
        if ( v24 >= 0x10 )
          v17 = (void **)v23[0];
        v10 += *((char *)v17 + v11);
        goto LABEL_33;
      }
      v10 += v13;
      v18 = a4[v10];
      if ( v18 == *a4 || !v18 )
        break;
      if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a1, a2)
        || a4[v10] != *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a1) )
      {
        v19 = 127;
        if ( v13 < 0x7F )
          v19 = v13;
        v20 = v23;
        if ( v24 >= 0x10 )
          v20 = (void **)v23[0];
LABEL_32:
        *((_BYTE *)v20 + v11) = v19;
        goto LABEL_33;
      }
      v9 = 1;
LABEL_33:
      if ( ++v11 >= a3 )
      {
        if ( !v9 || (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a1, a2) )
          goto LABEL_7;
        ++v13;
        std::istreambuf_iterator<unsigned short>::_Inc(a1);
        v12 = -1;
        v9 = 0;
        v10 = 0LL;
        v11 = 0LL;
      }
    }
    v19 = 127;
    if ( v13 < 0x7F )
      v19 = v13;
    v20 = v23;
    if ( v24 >= 0x10 )
      v20 = (void **)v23[0];
    v12 = v11;
    goto LABEL_32;
  }
LABEL_7:
  std::string::_Tidy(v23, 1, 0LL);
  return v12;
}
