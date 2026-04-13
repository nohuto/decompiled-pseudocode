/*
 * XREFs of ?_Inside@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_NPEB_W@Z @ 0x18005B67C
 * Callers:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005C228 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18006A26C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180088B0C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::wstring::_Inside(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  if ( !a2 )
    return 0;
  v3 = a1[3] < 8uLL ? a1 : (_QWORD *)*a1;
  if ( a2 < (unsigned __int64)v3 )
    return 0;
  if ( a1[3] < 8uLL )
    v4 = a1;
  else
    v4 = (_QWORD *)*a1;
  return (unsigned __int64)v4 + 2 * a1[2] > a2;
}
