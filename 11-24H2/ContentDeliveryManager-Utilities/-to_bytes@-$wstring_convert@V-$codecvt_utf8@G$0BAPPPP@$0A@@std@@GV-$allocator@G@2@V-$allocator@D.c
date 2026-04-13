/*
 * XREFs of ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18006AD1C
 * Callers:
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180069CB4 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800227CC (_CxxThrowException_0.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005BE70 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x180066D64 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180066D94 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x180067154 (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18006A194 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
        __int64 a1,
        char *a2,
        char *a3,
        char *a4)
{
  char *i; // r8
  void **v9; // rsi
  const char *v10; // rdx
  int v11; // ecx
  int v12; // ecx
  char *v14; // [rsp+50h] [rbp-59h] BYREF
  char *v15; // [rsp+58h] [rbp-51h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-41h] BYREF
  void *v17[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp-19h]
  unsigned __int64 v19; // [rsp+98h] [rbp-11h]
  void *v20[4]; // [rsp+A0h] [rbp-9h] BYREF

  v15 = a2;
  v14 = a3;
  v19 = 15LL;
  v18 = 0LL;
  LOBYTE(v17[0]) = 0;
  v20[3] = (void *)15;
  v20[2] = 0LL;
  LOBYTE(v20[0]) = 0;
  if ( !*(_BYTE *)(a1 + 92) )
    *(_DWORD *)(a1 + 88) = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes'::`2'::_State0;
  std::string::append((__int64)v17, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  for ( i = v14; i != a4; *(_QWORD *)(a1 + 96) = (i - a3) >> 1 )
  {
    v9 = v17;
    if ( v19 >= 0x10 )
      v9 = (void **)v17[0];
    v15 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, char **, void **, char *, char **))(**(_QWORD **)(a1 + 8) + 56LL))(
            *(_QWORD *)(a1 + 8),
            a1 + 88,
            i,
            a4,
            &v14,
            v9,
            (char *)v9 + v18,
            &v15);
    if ( v11 && (v12 = v11 - 1) != 0 )
    {
      if ( v12 != 2 )
      {
        if ( !*(_BYTE *)(a1 + 93) )
        {
          std::range_error::range_error((std::range_error *)pExceptionObject, v10);
          throw (std::range_error *)pExceptionObject;
        }
LABEL_23:
        std::string::string(a2, (_QWORD *)(a1 + 24));
        goto LABEL_26;
      }
      i = v14;
      while ( i != a4 )
      {
        std::string::append((__int64)v20, 1uLL, *i);
        i = v14 + 2;
        v14 += 2;
      }
    }
    else
    {
      if ( v9 >= (void **)v15 )
      {
        if ( v18 >= 0x10 )
        {
          if ( !*(_BYTE *)(a1 + 93) )
          {
            std::range_error::range_error((std::range_error *)pExceptionObject, v10);
            throw (std::range_error *)pExceptionObject;
          }
          goto LABEL_23;
        }
        std::string::append((__int64)v17, 8uLL, 0);
      }
      else
      {
        std::string::append(v20, v9, v15 - (char *)v9);
      }
      i = v14;
    }
  }
  std::string::string((__int64)a2);
LABEL_26:
  std::string::_Tidy(v20, 1, 0LL);
  std::string::_Tidy(v17, 1, 0LL);
  return a2;
}
