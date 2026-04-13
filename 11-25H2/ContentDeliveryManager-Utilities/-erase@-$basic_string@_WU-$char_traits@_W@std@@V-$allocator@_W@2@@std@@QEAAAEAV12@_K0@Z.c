/*
 * XREFs of ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x18005D390
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005BC40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800B3088 (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004800 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?move@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x18005D9C8 (-move@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax

  v3 = a1[2];
  if ( v3 < a2 )
    std::_Xout_of_range("invalid string position");
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] < 8uLL )
        v6 = a1;
      else
        v6 = (_QWORD *)*a1;
      v7 = v3 - a3;
      std::char_traits<unsigned short>::move((char *)v6 + 2 * a2, (char *)v6 + 2 * a2 + 2 * a3, v7 - a2);
      if ( a1[3] < 8uLL )
        v8 = a1;
      else
        v8 = (_QWORD *)*a1;
      a1[2] = v7;
      *((_WORD *)v8 + v7) = 0;
    }
  }
  else
  {
    if ( a1[3] < 8uLL )
      v5 = a1;
    else
      v5 = (_QWORD *)*a1;
    a1[2] = a2;
    *((_WORD *)v5 + a2) = 0;
  }
  return a1;
}
