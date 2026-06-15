/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180006310
 * Callers:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180034568 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char *v9; // rdx
  __int64 v10; // r8
  signed __int64 v11; // r9
  _QWORD *v12; // r11
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rbp
  __int128 *v15; // rdi
  int v16; // r14d
  char v17; // bl
  __int64 v18; // r10
  __int128 *v19; // rdx
  char *v20; // r9
  _QWORD *v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rax
  unsigned __int16 v24; // cx
  int v25; // eax
  _QWORD *v26; // rdx
  __int64 v27; // r8
  char *v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int16 v31; // cx
  __int64 v32; // rcx
  struct IApplicationSpecificEndpointInfo *v33; // rcx
  __int128 v35; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 28);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this + 72LL))(this);
  v6 = (__int64)v5;
  if ( !v5 || !*v5 )
    v6 = (*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this + 80LL))(this);
  v7 = (struct _RTL_CRITICAL_SECTION *)(v4 + 32);
  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  v36 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v6 + 2 * v8) );
  std::wstring::_Construct<1,unsigned short const *>(&v35, v6);
  v12 = *(_QWORD **)(v4 + 704);
  v13 = v36;
  v14 = v12;
  v15 = (__int128 *)v35;
  v16 = 1;
  if ( !*(_BYTE *)(v12[1] + 25LL) )
  {
    v17 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v35, v9, v10, v11);
    do
    {
      v19 = &v35;
      if ( v17 )
        v19 = v15;
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v18 + 32,
                              v19,
                              v10,
                              v18 + 32) )
        v20 = *(char **)v20;
      v23 = v13;
      if ( v13 >= v22 )
        v23 = v22;
      v11 = v20 - v9;
      while ( v23 )
      {
        v24 = *(_WORD *)&v9[v11];
        if ( v24 != *(_WORD *)v9 )
        {
          v25 = 1;
          if ( v24 < *(_WORD *)v9 )
            v25 = -1;
          if ( v25 >= 0 )
            goto LABEL_20;
          goto LABEL_22;
        }
        --v23;
        v9 += 2;
      }
      if ( v22 >= v13 )
      {
LABEL_20:
        v14 = v21;
        v18 = *v21;
        continue;
      }
LABEL_22:
      v18 = v21[2];
    }
    while ( !*(_BYTE *)(v18 + 25) );
    v12 = *(_QWORD **)(v4 + 704);
    v7 = (struct _RTL_CRITICAL_SECTION *)(v4 + 32);
  }
  if ( *((_BYTE *)v14 + 25) )
  {
LABEL_53:
    v14 = v12;
  }
  else
  {
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            v14 + 4,
                            v14 + 4,
                            v10,
                            v11) )
      v26 = (_QWORD *)*v26;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            &v35,
                            v26,
                            v27,
                            &v35) )
      v28 = (char *)v15;
    v30 = v29;
    if ( v29 >= v13 )
      v30 = v13;
    v11 = v28 - v9;
    while ( 1 )
    {
      if ( !v30 )
      {
        if ( v13 >= v29 )
          goto LABEL_39;
        goto LABEL_53;
      }
      v31 = *(_WORD *)&v9[v11];
      if ( v31 != *(_WORD *)v9 )
        break;
      --v30;
      v9 += 2;
    }
    if ( v31 < *(_WORD *)v9 )
      v16 = -1;
    if ( v16 < 0 )
      goto LABEL_53;
  }
LABEL_39:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v35, v9, v10, v11) )
    std::wstring::_Deallocate_for_capacity(v32, v15, v37);
  if ( v14 == *(_QWORD **)(v4 + 704) )
  {
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147943568LL;
  }
  else
  {
    v33 = (struct IApplicationSpecificEndpointInfo *)v14[8];
    if ( v33 )
    {
      *a2 = v33;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v33 + 8LL))(v33);
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
