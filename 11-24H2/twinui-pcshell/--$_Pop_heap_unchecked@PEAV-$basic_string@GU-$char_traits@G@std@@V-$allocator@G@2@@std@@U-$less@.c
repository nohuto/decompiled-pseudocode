/*
 * XREFs of ??$_Pop_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803440F8
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803443B4 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x180343FF4 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 */

void __fastcall std::_Pop_heap_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int128 v4; // xmm0
  _OWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF

  if ( (__int64)((a2 - a1) & 0xFFFFFFFFFFFFFFE0uLL) >= 64 )
  {
    v3 = a2 - 32;
    v5[1] = *(_OWORD *)(a2 - 16);
    v4 = *(_OWORD *)(a2 - 32);
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 24) = 7LL;
    v5[0] = v4;
    *(_WORD *)v3 = 0;
    std::wstring::operator=(a2 - 32, a1);
    std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(
      a1,
      0LL,
      (v3 - a1) >> 5,
      (unsigned __int16 *)v5);
    std::wstring::_Tidy_deallocate((void **)v5);
  }
}
