/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180014630
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180046E84 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 */

float __fastcall CEndpointVolumeStateManager::GetEndpointVolumeOverridePolicyVolume(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // al
  __int64 v10; // r9
  __int128 *v11; // rbp
  char v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int128 *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rbx
  float v25; // xmm6_4
  __int128 v27; // [rsp+20h] [rbp-88h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h]
  __int64 v29; // [rsp+38h] [rbp-70h]
  _BYTE v30[32]; // [rsp+40h] [rbp-68h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v6 = -1LL;
  v29 = 0LL;
  do
    ++v6;
  while ( a2[v6] );
  std::wstring::_Construct<1,unsigned short const *>((char **)&v27, a2, v6);
  v9 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v27, v7, v8, &v27);
  v11 = (__int128 *)v27;
  v12 = v9;
  if ( v9 )
    v10 = v27;
  v13 = v28;
  v14 = 0xCBF29CE484222325uLL;
  v15 = 0LL;
  v16 = (__int128 *)(2 * v28);
  if ( 2 * v28 )
  {
    do
    {
      v17 = *(unsigned __int8 *)(v15 + v10);
      ++v15;
      v14 = 0x100000001B3LL * (v17 ^ v14);
    }
    while ( v15 < (unsigned __int64)v16 );
  }
  v18 = (_QWORD *)*((_QWORD *)this + 10);
  v19 = v18[2 * (v14 & *((_QWORD *)this + 13)) + 1];
  if ( v19 != *((_QWORD *)this + 8) )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v19 + 16,
                              *(_QWORD *)(v19 + 32),
                              v16,
                              v19) )
        v18 = (_QWORD *)*v18;
      v16 = &v27;
      if ( v12 )
        v16 = v11;
      if ( v13 == v20 )
        break;
LABEL_17:
      if ( v21 == v22 )
        goto LABEL_20;
      v19 = *(_QWORD *)(v21 + 8);
    }
    v23 = v13;
    v16 = (__int128 *)((char *)v16 - (__int64)v18);
    while ( v23 )
    {
      if ( *(_WORD *)((char *)v18 + (_QWORD)v16) != *(_WORD *)v18 )
        goto LABEL_17;
      --v23;
      v18 = (_QWORD *)((char *)v18 + 2);
    }
    v5 = v21;
  }
LABEL_20:
  if ( v12 )
    std::wstring::_Deallocate_for_capacity(v18, v11, v29);
  if ( v5 )
  {
    std::wstring::wstring((__int64)v30, a2);
    v24 = std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at((char *)this + 56, v30);
    std::wstring::~wstring(v30);
    if ( *(_BYTE *)(*(_QWORD *)v24 + 8LL) )
      v25 = 0.0;
    else
      v25 = *(float *)(*(_QWORD *)v24 + 4LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v25;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return FLOAT_1_0;
  }
}
