/*
 * XREFs of ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x18005B12C
 * Callers:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18004ADE0 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x18009D8BC (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x180048BAC (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005C494 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

void __fastcall std::wstringbuf::_Init(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  bool v9; // zf
  __int64 v10; // rcx

  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = a4;
  if ( a3 && (a4 & 6) != 6 )
  {
    v7 = (__int64)std::_Allocate<unsigned short>(a3);
    std::char_traits<wchar_t>::copy(v7, a2, a3);
    v8 = 2 * a3;
    v9 = (*(_BYTE *)(a1 + 112) & 4) == 0;
    *(_QWORD *)(a1 + 104) = v8 + v7;
    if ( v9 )
    {
      **(_QWORD **)(a1 + 24) = v7;
      **(_QWORD **)(a1 + 56) = v7;
      **(_DWORD **)(a1 + 80) = v8 >> 1;
    }
    if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    {
      v10 = v7;
      if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
        v10 = v8 + v7;
      **(_QWORD **)(a1 + 32) = v7;
      **(_QWORD **)(a1 + 64) = v10;
      **(_DWORD **)(a1 + 88) = (v8 + v7 - v10) >> 1;
      if ( !**(_QWORD **)(a1 + 56) )
      {
        **(_QWORD **)(a1 + 24) = v7;
        **(_QWORD **)(a1 + 56) = 0LL;
        **(_DWORD **)(a1 + 80) = v7 >> 1;
      }
    }
    *(_DWORD *)(a1 + 112) |= 1u;
  }
}
