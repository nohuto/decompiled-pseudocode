/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000A1B0
 * Callers:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000A450 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B358 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        CProcess *this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  __int64 v4; // r13
  _WORD *v5; // rax
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // r15
  __int64 v8; // r8
  _QWORD *v9; // r11
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // r10
  char *v15; // rdx
  char *v16; // r9
  _QWORD *v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rax
  signed __int64 v20; // r9
  unsigned __int16 v21; // cx
  int v22; // eax
  unsigned __int16 *v23; // rdx
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int16 v28; // cx
  __int64 v29; // rcx
  struct IApplicationSpecificEndpointInfo *v30; // rcx
  __int128 v32; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h]

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 28);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this + 72LL))(this);
  v6 = (__int64)v5;
  if ( !v5 || !*v5 )
    v6 = (*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this + 80LL))(this);
  v7 = (struct _RTL_CRITICAL_SECTION *)(v4 + 32);
  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  v33 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v6 + 2 * v8) );
  std::wstring::_Construct<1,unsigned short const *>(&v32, v6);
  v9 = *(_QWORD **)(v4 + 704);
  v10 = v33;
  v11 = v9;
  v12 = v32;
  v13 = 1;
  if ( !*(_BYTE *)(v9[1] + 25LL) )
  {
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v32);
    do
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v14 + 32) )
        v16 = *(char **)v16;
      v19 = v10;
      if ( v10 >= v18 )
        v19 = v18;
      v20 = v16 - v15;
      while ( v19 )
      {
        v21 = *(_WORD *)&v15[v20];
        if ( v21 != *(_WORD *)v15 )
        {
          v22 = 1;
          if ( v21 < *(_WORD *)v15 )
            v22 = -1;
          if ( v22 >= 0 )
            goto LABEL_18;
          goto LABEL_20;
        }
        --v19;
        v15 += 2;
      }
      if ( v18 >= v10 )
      {
LABEL_18:
        v11 = v17;
        v14 = *v17;
        continue;
      }
LABEL_20:
      v14 = v17[2];
    }
    while ( !*(_BYTE *)(v14 + 25) );
    v9 = *(_QWORD **)(v4 + 704);
    v7 = (struct _RTL_CRITICAL_SECTION *)(v4 + 32);
  }
  if ( *((_BYTE *)v11 + 25) )
  {
LABEL_49:
    v11 = v9;
  }
  else
  {
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v11 + 4);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v32) )
      v24 = v12;
    v26 = v25;
    if ( v25 >= v10 )
      v26 = v10;
    v27 = v24 - (_QWORD)v23;
    while ( 1 )
    {
      if ( !v26 )
      {
        if ( v10 >= v25 )
          goto LABEL_35;
        goto LABEL_49;
      }
      v28 = *(unsigned __int16 *)((char *)v23 + v27);
      if ( v28 != *v23 )
        break;
      --v26;
      ++v23;
    }
    if ( v28 < *v23 )
      v13 = -1;
    if ( v13 < 0 )
      goto LABEL_49;
  }
LABEL_35:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v32) )
    std::wstring::_Deallocate_for_capacity(v29, v12, v34);
  if ( v11 == *(_QWORD **)(v4 + 704) )
  {
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147943568LL;
  }
  else
  {
    v30 = (struct IApplicationSpecificEndpointInfo *)v11[8];
    if ( v30 )
    {
      *a2 = v30;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v30 + 8LL))(v30);
    }
    else
    {
      *a2 = 0LL;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    return 0LL;
  }
}
