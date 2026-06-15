/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180009620
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009830 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000A450 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015760 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B358 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180044664 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 */

float __fastcall CEndpointVolumeStateManager::GetEndpointVolumeOverridePolicyVolume(
        CEndpointVolumeStateManager *this,
        const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v5; // rdi
  __int64 v6; // r8
  char v7; // al
  __int64 v8; // r9
  char *v9; // rbp
  char v10; // r11
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 i; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r10
  char *v20; // r8
  __int64 v21; // rdx
  signed __int64 v22; // r8
  __int64 v23; // rbx
  float v24; // xmm6_4
  __int128 v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int64 v28; // [rsp+38h] [rbp-70h]
  _BYTE v29[32]; // [rsp+40h] [rbp-68h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v6 = -1LL;
  v28 = 0LL;
  do
    ++v6;
  while ( a2[v6] );
  std::wstring::_Construct<1,unsigned short const *>(&v26, a2);
  v7 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v26);
  v9 = (char *)v26;
  v10 = v7;
  if ( v7 )
    v8 = v26;
  v11 = v27;
  v12 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v27; v12 = 0x100000001B3LL * (v14 ^ v12) )
  {
    v14 = *(unsigned __int8 *)(i + v8);
    ++i;
  }
  v15 = (_QWORD *)*((_QWORD *)this + 10);
  v16 = v15[2 * (v12 & *((_QWORD *)this + 13)) + 1];
  if ( v16 != *((_QWORD *)this + 8) )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v16 + 16) )
        v15 = (_QWORD *)*v15;
      v20 = (char *)&v26;
      if ( v10 )
        v20 = v9;
      if ( v11 == v17 )
        break;
LABEL_17:
      if ( v18 == v19 )
        goto LABEL_20;
      v16 = *(_QWORD *)(v18 + 8);
    }
    v21 = v11;
    v22 = v20 - (char *)v15;
    while ( v21 )
    {
      if ( *(_WORD *)((char *)v15 + v22) != *(_WORD *)v15 )
        goto LABEL_17;
      --v21;
      v15 = (_QWORD *)((char *)v15 + 2);
    }
    v5 = v18;
  }
LABEL_20:
  if ( v10 )
    std::wstring::_Deallocate_for_capacity(v15, v9, v28);
  if ( v5 )
  {
    std::wstring::wstring(v29, a2);
    v23 = std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at((char *)this + 56, v29);
    std::wstring::~wstring(v29);
    if ( *(_BYTE *)(*(_QWORD *)v23 + 8LL) )
      v24 = 0.0;
    else
      v24 = *(float *)(*(_QWORD *)v23 + 4LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v24;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return FLOAT_1_0;
  }
}
