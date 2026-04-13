/*
 * XREFs of ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x18004AA50
 * Callers:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18004ABE0 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x18005FAF8 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x18008360C (--0-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x18009D51C (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005328 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(__int64 a1)
{
  struct std::locale::_Locimp **v2; // rdi

  *(_QWORD *)a1 = &std::wstreambuf::`vftable';
  v2 = (struct std::locale::_Locimp **)operator new(8uLL);
  if ( v2 )
    *v2 = std::locale::_Init(1);
  else
    v2 = 0LL;
  *(_QWORD *)(a1 + 96) = v2;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 56) = a1 + 40;
  *(_QWORD *)(a1 + 64) = a1 + 48;
  *(_QWORD *)(a1 + 80) = a1 + 72;
  *(_QWORD *)(a1 + 88) = a1 + 76;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  return a1;
}
