/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800BBF8C
 * Callers:
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BAD58 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180057330 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800B8E9C (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??R?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z @ 0x1801B0EDC (--R-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<std::wstring,256>(void **a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v7; // rax
  int v8; // eax
  __int128 v9; // xmm6
  __m128i v10; // xmm7
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  __int128 *v14; // rdx
  int v15; // eax
  bool v16; // cc
  unsigned __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 *v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v22; // [rsp+68h] [rbp-A0h]
  __int128 v23; // [rsp+78h] [rbp-90h] BYREF
  __m128i si128; // [rsp+88h] [rbp-80h]
  _BYTE Src[512]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v21 = 0LL;
  v22.m128i_i64[0] = 0LL;
  v22.m128i_i64[1] = 7LL;
  LOWORD(v21) = 0;
  memset_0(Src, 0, sizeof(Src));
  v17 = 0LL;
  v18 = &v17;
  v19 = 256LL;
  v20 = Src;
  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    __fastfail(7u);
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE **, __int64 *, unsigned __int64 **))(*(_QWORD *)v4 + 32LL))(
         v4,
         &v20,
         &v19,
         &v18);
  if ( v5 < 0 )
    goto LABEL_3;
  v7 = v17;
  if ( v17 > 0x100 )
  {
    while ( 1 )
    {
      v11 = v7;
      v12 = wil::details::string_maker<std::wstring>::make(&v21, 0LL, v7 - 1);
      v13 = v12;
      if ( v12 < 0 )
        break;
      v14 = &v21;
      if ( v22.m128i_i64[1] > 7uLL )
        v14 = (__int128 *)v21;
      v15 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v14, v11, &v17);
      if ( v15 < 0 )
      {
        v5 = v15;
        goto LABEL_3;
      }
      v7 = v17;
      v16 = v17 <= v11;
      if ( v17 < v11 )
      {
        std::wstring::erase(&v21, v17 - 1);
        v7 = v17;
        v16 = v17 <= v11;
      }
      if ( v16 )
        goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v12);
    std::wstring::_Tidy_deallocate((void **)&v21);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return v13;
  }
  else
  {
    v8 = wil::details::string_maker<std::wstring>::make(&v21, Src, v17 - 1);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v8);
LABEL_3:
      std::wstring::_Tidy_deallocate((void **)&v21);
      wistd::function<bool (long)>::~function<bool (long)>(a2);
      return (unsigned int)v5;
    }
LABEL_6:
    v9 = v21;
    v23 = v21;
    v10 = v22;
    si128 = v22;
    v22.m128i_i64[0] = 0LL;
    v22.m128i_i64[1] = 7LL;
    LOWORD(v21) = 0;
    if ( a1 != (void **)&v23 )
    {
      std::wstring::_Tidy_deallocate(a1);
      *(_OWORD *)a1 = v9;
      *((__m128i *)a1 + 1) = v10;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v23) = 0;
    }
    std::wstring::_Tidy_deallocate((void **)&v23);
    std::wstring::_Tidy_deallocate((void **)&v21);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return 0LL;
  }
}
