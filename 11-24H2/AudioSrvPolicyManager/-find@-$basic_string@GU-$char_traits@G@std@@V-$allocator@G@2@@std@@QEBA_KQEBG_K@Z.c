/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180046684
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180045940 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18000E930 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::wstring::find(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  _WORD *i; // rcx
  _WORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  v1 = -1LL;
  do
    ++v1;
  while ( aP[v1] );
  v2 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1);
  v6 = v2;
  if ( v5 > v3 )
    return -1LL;
  v7 = v3 - v5;
  if ( v5 )
  {
    v8 = v2 + 2 * v7;
    for ( i = (_WORD *)v2; ; i = (_WORD *)(v14 + 2) )
    {
      v10 = i;
      v11 = v8 + 2 - (_QWORD)i;
      v12 = v4;
      v13 = v11 >> 1;
      if ( v13 )
      {
        while ( *v10 != 95 )
        {
          if ( v13 == 1 )
            goto LABEL_11;
          --v13;
          ++v10;
        }
        v12 = (__int64)v10;
      }
LABEL_11:
      if ( !v12 )
        break;
      if ( !(unsigned int)std::_WChar_traits<unsigned short>::compare(v12, L"_p", v5) )
        return (v14 - v6) >> 1;
    }
    return -1LL;
  }
  return v4;
}
