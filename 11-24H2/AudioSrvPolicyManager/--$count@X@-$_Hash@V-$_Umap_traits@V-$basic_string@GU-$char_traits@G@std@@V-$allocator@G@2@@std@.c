/*
 * XREFs of ??$count@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180016650
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180043DF0 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180044190 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count<void>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  char v4; // al
  __int64 *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rdx
  _WORD *v19; // r9
  __int64 *v20; // r10
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // r11

  v2 = *(_QWORD *)(a2 + 16);
  v4 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a2);
  v7 = 0LL;
  if ( v4 )
    v6 = *v5;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v2; v8 = 0x100000001B3LL * (v10 ^ v8) )
  {
    v10 = *(unsigned __int8 *)(i + v6);
    ++i;
  }
  v11 = v8 & a1[6];
  v12 = a1[3];
  v13 = 2 * v11;
  v14 = *(_QWORD *)(v12 + 8 * v13 + 8);
  if ( v14 == a1[1] )
  {
LABEL_16:
    v18 = v7;
  }
  else
  {
    v15 = *(_QWORD *)(v12 + 8 * v13);
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 32);
      std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v14 + 16);
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v17) )
        v21 = *v20;
      if ( v2 == v16 )
        break;
LABEL_14:
      if ( v18 == v15 )
        goto LABEL_16;
      v14 = *(_QWORD *)(v18 + 8);
    }
    v22 = v2;
    v23 = v21 - (_QWORD)v19;
    while ( v22 )
    {
      if ( *(_WORD *)((char *)v19 + v23) != *v19 )
        goto LABEL_14;
      --v22;
      ++v19;
    }
  }
  LOBYTE(v7) = v18 != 0;
  return v7;
}
