/*
 * XREFs of ?copy_name@reg_iterator_details@reg@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV45@_K@Z @ 0x1803C23F8
 * Callers:
 *     ??0?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x1803B50FC (--0-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ??0?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x180673540 (--0-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@Q.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x18010EC08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
_OWORD *__fastcall wil::reg::reg_iterator_details::copy_name(_OWORD *a1, char *a2, unsigned __int64 a3)
{
  __int64 v5; // r8
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __m128i si128; // [rsp+40h] [rbp-38h]

  std::wstring::wstring((__int64)&v7, a3, 48);
  std::wstring::operator=((char *)&v7, a2, v5);
  *a1 = v7;
  a1[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v7) = 0;
  std::wstring::_Tidy_deallocate((void **)&v7);
  return a1;
}
