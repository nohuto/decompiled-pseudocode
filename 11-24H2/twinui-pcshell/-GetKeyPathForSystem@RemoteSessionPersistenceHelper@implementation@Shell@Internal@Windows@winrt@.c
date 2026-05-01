/*
 * XREFs of ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1801BBC80
 * Callers:
 *     ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x180285268 (-TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEB_KAEBUhstring@6@AEB_N@Z @ 0x180663E2C (-SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x1806641B4 (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800491A8 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801BC1EC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BC1EC.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

_OWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
        __int64 a1,
        _OWORD *a2,
        winrt::hstring *a3,
        _BYTE *a4)
{
  const unsigned __int16 *v6; // r13
  __int64 v7; // rsi
  void **v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int128 *v11; // r15
  size_t size_of; // rax
  void *Src[2]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v15; // [rsp+30h] [rbp-39h]
  __int128 v16; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+50h] [rbp-19h]
  __int128 v18; // [rsp+60h] [rbp-9h] BYREF
  __m128i si128; // [rsp+70h] [rbp+7h]

  std::wstring::wstring((__int64)Src, a1 + 200 + (*a4 != 0 ? 0x20 : 0));
  if ( *(_QWORD *)a3 )
  {
    v6 = winrt::hstring::c_str(a3);
    v7 = v15;
    if ( (_QWORD)v15 == 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v8 = Src;
    v9 = 7LL;
    if ( *((_QWORD *)&v15 + 1) > 7uLL )
      v8 = (void **)Src[0];
    v16 = 0LL;
    v17 = 0LL;
    v10 = v15 + 1;
    v11 = &v16;
    if ( (unsigned __int64)(v15 + 1) > 7 )
    {
      v9 = std::wstring::_Calculate_growth(v15 + 1, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
      size_of = std::_Get_size_of_n<2>(v9 + 1);
      v11 = (__int128 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *(_QWORD *)&v16 = v11;
    }
    *(_QWORD *)&v17 = v7 + 1;
    *((_QWORD *)&v17 + 1) = v9;
    memcpy_0(v11, v8, 2 * v7);
    *((_WORD *)v11 + v7) = asc_180780208[0];
    *((_WORD *)v11 + v10) = 0;
    std::operator+<unsigned short>(&v18, &v16, v6);
    std::wstring::_Tidy_deallocate((void **)&v16);
    *a2 = v18;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v18) = 0;
    std::wstring::_Tidy_deallocate((void **)&v18);
  }
  else
  {
    *a2 = *(_OWORD *)Src;
    a2[1] = v15;
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = 7LL;
    LOWORD(Src[0]) = 0;
  }
  std::wstring::_Tidy_deallocate(Src);
  return a2;
}
