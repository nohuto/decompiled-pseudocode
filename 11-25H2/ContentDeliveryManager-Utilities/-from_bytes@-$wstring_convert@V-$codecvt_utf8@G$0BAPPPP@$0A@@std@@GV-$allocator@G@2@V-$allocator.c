/*
 * XREFs of ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18006A5FC
 * Callers:
 *     ?Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBD@Z @ 0x180069774 (-Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@GU-$char_tr.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800227BC (_CxxThrowException_0.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004AB18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AB48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005BB18 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x180066CB4 (--0range_error@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069DCC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 *i; // r8
  _BYTE *v9; // rsi
  const char *v10; // rdx
  int v11; // ecx
  int v12; // ecx
  unsigned __int8 *v14; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-51h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp-19h]
  unsigned __int64 v19; // [rsp+98h] [rbp-11h]
  _QWORD v20[4]; // [rsp+A0h] [rbp-9h] BYREF

  v15 = a2;
  v14 = a3;
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  v20[3] = 7LL;
  v20[2] = 0LL;
  LOWORD(v20[0]) = 0;
  if ( !*(_BYTE *)(a1 + 92) )
    *(_DWORD *)(a1 + 88) = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes'::`2'::_State0;
  std::wstring::append(v17, 8uLL, 0);
  *(_QWORD *)(a1 + 96) = 0LL;
  for ( i = v14; i != a4; *(_QWORD *)(a1 + 96) = i - a3 )
  {
    v9 = v17;
    if ( v19 >= 8 )
      v9 = (_BYTE *)v17[0];
    v15 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int8 *, unsigned __int8 *, unsigned __int8 **, _BYTE *, _BYTE *, unsigned __int64 *))(**(_QWORD **)(a1 + 8) + 48LL))(
            *(_QWORD *)(a1 + 8),
            a1 + 88,
            i,
            a4,
            &v14,
            v9,
            &v9[2 * v18],
            &v15);
    if ( v11 && (v12 = v11 - 1) != 0 )
    {
      if ( v12 != 2 )
      {
        if ( !*(_BYTE *)(a1 + 94) )
        {
          std::range_error::range_error((std::range_error *)pExceptionObject, v10);
          throw (std::range_error *)pExceptionObject;
        }
LABEL_23:
        std::wstring::wstring(a2, a1 + 56);
        goto LABEL_26;
      }
      for ( i = v14; i != a4; i = ++v14 )
        std::wstring::append(v20, 1uLL, *i);
    }
    else
    {
      if ( (unsigned __int64)v9 >= v15 )
      {
        if ( v18 >= 0x10 )
        {
          if ( !*(_BYTE *)(a1 + 94) )
          {
            std::range_error::range_error((std::range_error *)pExceptionObject, v10);
            throw (std::range_error *)pExceptionObject;
          }
          goto LABEL_23;
        }
        std::wstring::append(v17, 8uLL, 0);
      }
      else
      {
        std::wstring::append(v20, v9, (__int64)(v15 - (_QWORD)v9) >> 1);
      }
      i = v14;
    }
  }
  std::wstring::wstring(a2, (__int64)v20);
LABEL_26:
  std::wstring::_Tidy(v20, 1, 0LL);
  std::wstring::_Tidy(v17, 1, 0LL);
  return a2;
}
