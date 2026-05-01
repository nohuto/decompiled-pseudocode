/*
 * XREFs of ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180343C6C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803443B4 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x180343FF4 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 */

void __fastcall std::_Make_heap_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 *v5; // rsi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (a2 - a1) >> 5;
  v4 = (a2 - a1) >> 6;
  if ( v4 > 0 )
  {
    v5 = (__int128 *)(a1 + 32 * v4 - 32);
    do
    {
      v6 = *v5;
      --v4;
      v7 = v5[1];
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 3) = 7LL;
      *(_WORD *)v5 = 0;
      v8[0] = v6;
      v8[1] = v7;
      std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(a1, v4, v3, v8);
      std::wstring::_Tidy_deallocate((void **)v8);
      v5 -= 2;
    }
    while ( v4 > 0 );
  }
}
