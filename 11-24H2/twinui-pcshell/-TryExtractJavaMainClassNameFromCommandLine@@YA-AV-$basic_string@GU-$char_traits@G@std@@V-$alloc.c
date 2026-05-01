/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577A48
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805767B0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1805775B4 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x180577A08 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577BF0 (-TryGetNameFromPath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@Z.c)
 */

__int64 __fastcall TryExtractJavaMainClassNameFromCommandLine(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rax
  const unsigned __int16 **v4; // rax
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 **v6; // r14
  int JavaOption; // r15d
  int v8; // edi
  _WORD **i; // rsi
  _WORD *v10; // rdx
  __int64 NameFromPath; // rax
  void **v12; // rcx
  __int64 v13; // rax
  int pNumArgs; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  void *v19[4]; // [rsp+48h] [rbp-28h] BYREF

  v2 = (const WCHAR *)a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  pNumArgs = 0;
  if ( *(_QWORD *)(a2 + 24) > 7uLL )
    v2 = *(const WCHAR **)a2;
  v4 = (const unsigned __int16 **)CommandLineToArgvW(v2, &pNumArgs);
  v6 = v4;
  if ( pNumArgs > 0 && IsJavawExe(*v4, v5) )
  {
    JavaOption = 0;
    v8 = 1;
    for ( i = (_WORD **)(v6 + 1); ; ++i )
    {
      if ( v8 >= pNumArgs )
        goto LABEL_16;
      v10 = *i;
      if ( **i != 45 )
        break;
      if ( JavaOption == 2 )
        goto LABEL_16;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 7LL;
      LOWORD(v16) = 0;
      std::wstring::wstring((char **)v19, v10);
      JavaOption = GetJavaOption((__int64)v19, (__int64)&v16);
      std::wstring::_Tidy_deallocate(v19);
      if ( JavaOption == 1 )
      {
        ++v8;
        ++i;
      }
      else if ( JavaOption == 3 )
      {
        NameFromPath = TryGetNameFromPath(v19, &v16);
        std::wstring::operator=(a1, NameFromPath);
        std::wstring::_Tidy_deallocate(v19);
        v12 = (void **)&v16;
LABEL_15:
        std::wstring::_Tidy_deallocate(v12);
        goto LABEL_16;
      }
      std::wstring::_Tidy_deallocate((void **)&v16);
      ++v8;
    }
    std::wstring::wstring((char **)v19, v10);
    v13 = TryGetNameFromPath(&v16, v19);
    std::wstring::operator=(a1, v13);
    std::wstring::_Tidy_deallocate((void **)&v16);
    v12 = v19;
    goto LABEL_15;
  }
LABEL_16:
  LocalFree(v6);
  return a1;
}
