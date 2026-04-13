/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180006358
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18000ACC0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000ACC0.c)
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001FB80 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020890 (-do_get_monthname@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020B20 (-do_get_weekday@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093C4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAE4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005BBC8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<char>>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  char v7; // dl
  _BYTE *v8; // rcx
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbx
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r13
  void **v15; // r12
  char v17; // al
  void **v18; // rax
  void **v19; // rax
  char v20; // al
  __int64 v21; // rcx
  unsigned __int8 *v22; // rdx
  int v23; // eax
  void **v24; // rdx
  char v25; // cl
  char v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+24h] [rbp-4Ch]
  __int64 v28; // [rsp+28h] [rbp-48h]
  void *v30[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h]

  if ( *a4 )
  {
    v7 = *a4;
    v8 = a4;
    do
    {
      v9 = a3 + 1;
      if ( v7 != *a4 )
        v9 = a3;
      a3 = v9;
      v7 = *++v8;
    }
    while ( *v8 );
  }
  v31 = 15LL;
  v30[2] = 0LL;
  LOBYTE(v30[0]) = 0;
  std::string::assign(v30, a3, 0LL);
  v10 = 0;
  v26 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v27 = -2;
  v13 = 1LL;
  v28 = 1LL;
  v14 = v31;
  v15 = (void **)v30[0];
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = a4[v11];
        if ( !v17 || v17 == *a4 )
          break;
        ++v11;
      }
      v18 = v30;
      if ( v14 >= 0x10 )
        v18 = v15;
      if ( *((_BYTE *)v18 + v12) )
      {
        v19 = v30;
        if ( v14 >= 0x10 )
          v19 = v15;
        v11 += *((char *)v19 + v12);
      }
      else
      {
        v11 += v13;
        v20 = a4[v11];
        if ( v20 == *a4 || !v20 )
        {
          v27 = v12;
          goto LABEL_36;
        }
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
          goto LABEL_34;
        if ( !*((_BYTE *)a1 + 8) )
        {
          v21 = *a1;
          if ( !*a1
            || ((v22 = **(unsigned __int8 ***)(v21 + 56)) == 0LL || **(int **)(v21 + 80) <= 0
              ? (v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21))
              : (v23 = *v22),
                v23 == -1) )
          {
            *a1 = 0LL;
          }
          else
          {
            *((_BYTE *)a1 + 9) = v23;
          }
          *((_BYTE *)a1 + 8) = 1;
        }
        if ( a4[v11] != *((_BYTE *)a1 + 9) )
        {
LABEL_34:
          v13 = v28;
LABEL_36:
          v24 = v30;
          if ( v14 >= 0x10 )
            v24 = v15;
          v25 = 127;
          if ( v13 < 0x7F )
            v25 = v13;
          *((_BYTE *)v24 + v12) = v25;
          v10 = v26;
          v15 = (void **)v30[0];
          v14 = v31;
          goto LABEL_41;
        }
        v10 = 1;
        v26 = 1;
        v13 = v28;
      }
LABEL_41:
      if ( ++v12 >= a3 )
      {
        if ( !v10 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
          break;
        ++v28;
        std::istreambuf_iterator<char>::_Inc(a1);
        v27 = -1;
        v10 = 0;
        v26 = 0;
        v11 = 0LL;
        v12 = 0LL;
        v13 = v28;
      }
    }
  }
  if ( v14 >= 0x10 )
    operator delete(v15);
  return v27;
}
