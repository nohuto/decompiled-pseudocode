/*
 * XREFs of ??$count@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180016430
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180046610 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800469B0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count<void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  char v5; // al
  __int64 *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 i; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  _WORD *v23; // r9
  __int64 *v24; // r10
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // r11

  v3 = *(_QWORD *)(a2 + 16);
  v5 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a2, a2, a3, a2);
  v8 = 0LL;
  if ( v5 )
    v7 = *v6;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v3; v9 = 0x100000001B3LL * (v11 ^ v9) )
  {
    v11 = *(unsigned __int8 *)(i + v7);
    ++i;
  }
  v12 = v9 & a1[6];
  v13 = a1[3];
  v14 = 2 * v12;
  v15 = *(_QWORD *)(v13 + 8 * v14 + 8);
  if ( v15 == a1[1] )
  {
LABEL_18:
    v22 = v8;
  }
  else
  {
    v16 = *(_QWORD *)(v13 + 8 * v14);
    while ( 1 )
    {
      v17 = *(_QWORD *)(v15 + 32);
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v15 + 16,
                              v15,
                              v8,
                              v15 + 16) )
        v20 = (_QWORD *)*v20;
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v21,
                              v18,
                              v19,
                              v20) )
        v25 = *v24;
      if ( v3 == v17 )
        break;
LABEL_16:
      if ( v22 == v16 )
        goto LABEL_18;
      v15 = *(_QWORD *)(v22 + 8);
    }
    v26 = v3;
    v27 = v25 - (_QWORD)v23;
    while ( v26 )
    {
      if ( *(_WORD *)((char *)v23 + v27) != *v23 )
        goto LABEL_16;
      --v26;
      ++v23;
    }
  }
  LOBYTE(v8) = v22 != 0;
  return v8;
}
