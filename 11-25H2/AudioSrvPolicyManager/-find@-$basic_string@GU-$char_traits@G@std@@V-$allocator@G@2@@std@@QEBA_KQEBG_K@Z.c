/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180048EA4
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180048160 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18000ECB0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::wstring::find(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  _WORD *i; // rcx
  _WORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

  v4 = -1LL;
  do
    ++v4;
  while ( aP[v4] );
  v5 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1, *(_QWORD *)(a1 + 16), a3, a4);
  v9 = v5;
  if ( v8 > v6 )
    return -1LL;
  v10 = v6 - v8;
  if ( v8 )
  {
    v11 = v5 + 2 * v10;
    for ( i = (_WORD *)v5; ; i = (_WORD *)(v17 + 2) )
    {
      v13 = i;
      v14 = v11 + 2 - (_QWORD)i;
      v15 = v7;
      v16 = v14 >> 1;
      if ( v16 )
      {
        while ( *v13 != 95 )
        {
          if ( v16 == 1 )
            goto LABEL_11;
          --v16;
          ++v13;
        }
        v15 = (__int64)v13;
      }
LABEL_11:
      if ( !v15 )
        break;
      if ( !(unsigned int)std::_WChar_traits<unsigned short>::compare(v15, L"_p", v8) )
        return (v17 - v9) >> 1;
    }
    return -1LL;
  }
  return v7;
}
