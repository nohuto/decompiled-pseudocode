/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C7A0
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F554 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FC30 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180010F90 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180010FD8 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rsi
  signed __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  void *v11; // rax
  const struct std::nothrow_t *v12; // rdx
  char *v13; // rcx
  char *v14; // rbx
  unsigned __int64 v15; // r12
  char *v16; // r9
  __int64 v17; // r8
  signed __int64 v18; // rcx
  bool v19; // zf
  signed __int64 v20; // rax
  signed __int32 v21; // eax
  char *v22; // r8
  char *v23; // rcx
  char *v24; // rdx
  char *v25; // rdx
  char *v26; // r8
  char *v27; // rsi
  char *v28; // r15
  __int64 v29; // rcx
  char *v30; // rcx
  char *v31; // r8
  __int64 v33; // rcx
  __int64 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+80h] [rbp+8h]
  _QWORD *v36; // [rsp+90h] [rbp+18h]
  __int64 *v37; // [rsp+98h] [rbp+20h]

  v36 = a3;
  v3 = a2;
  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v34 = v6 + 1;
  v7 = (a1[2] - *a1) >> 3;
  v8 = v7 >> 1;
  if ( v7 > 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    goto LABEL_52;
  v9 = v6 + 1;
  if ( v8 + v7 >= v6 + 1 )
    v9 = v8 + v7;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_52:
    __scrt_throw_std_bad_array_new_length();
  v10 = 8 * v9;
  v35 = v9;
  if ( 8 * v9 < 0x1000 )
  {
    if ( v10 )
    {
      v14 = (char *)operator new(8 * v9);
      a3 = v36;
    }
    else
    {
      v14 = 0LL;
    }
    v35 = v9;
  }
  else
  {
    if ( v10 + 39 < v10 )
      goto LABEL_52;
    v11 = operator new(v10 + 39);
    if ( !v11 )
      goto LABEL_51;
    v14 = (char *)(((unsigned __int64)v11 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v14 - 1) = v11;
    a3 = v36;
  }
  v15 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = &v14[v15];
  try
  {
    v17 = *a3;
    *(_QWORD *)v16 = v17;
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 136);
      while ( v18 >= 0 )
      {
        if ( (_DWORD)v18 != 0x7FFFFFFF )
        {
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 136), v18 + 1, v18);
          v19 = v18 == v20;
          v18 = v20;
          if ( !v19 )
            continue;
        }
        goto LABEL_23;
      }
      do
        v21 = *(_DWORD *)(2 * v18 + 0x10);
      while ( v21 != 0x7FFFFFFF
           && v21 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v18 + 16), v21 + 1, v21) );
    }
LABEL_23:
    v37 = (__int64 *)&v14[v15];
    v22 = a1[1];
    v23 = *a1;
    v24 = v14;
    if ( v3 == v22 )
    {
      while ( v23 != v22 )
      {
        *(_QWORD *)v24 = 0LL;
        if ( v24 != v23 )
        {
          *(_QWORD *)v24 = *(_QWORD *)v23;
          *(_QWORD *)v23 = 0LL;
        }
        v24 += 8;
        v23 += 8;
      }
    }
    else
    {
      while ( v23 != v3 )
      {
        *(_QWORD *)v24 = 0LL;
        if ( v24 != v23 )
        {
          *(_QWORD *)v24 = *(_QWORD *)v23;
          *(_QWORD *)v23 = 0LL;
        }
        v24 += 8;
        v23 += 8;
      }
      v37 = (__int64 *)v14;
      v25 = a1[1];
      if ( v3 != v25 )
      {
        v26 = &v14[v15 - (_QWORD)v3 + 8];
        do
        {
          *(_QWORD *)&v26[(_QWORD)v3] = 0LL;
          if ( &v26[(_QWORD)v3] != v3 )
          {
            *(_QWORD *)&v26[(_QWORD)v3] = *(_QWORD *)v3;
            *(_QWORD *)v3 = 0LL;
          }
          v3 += 8;
        }
        while ( v3 != v25 );
      }
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>(
      v37,
      (__int64 *)&v14[v15 + 8]);
    std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
      v33,
      v14,
      v35);
    throw;
  }
  v27 = *a1;
  if ( *a1 )
  {
    v28 = a1[1];
    while ( v27 != v28 )
    {
      v29 = *(_QWORD *)v27;
      if ( *(_QWORD *)v27 )
      {
        *(_QWORD *)v27 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v29);
      }
      v27 += 8;
    }
    v30 = *a1;
    v12 = (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v12 < 0x1000 )
      goto LABEL_49;
    v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
    v31 = (char *)*((_QWORD *)v30 - 1);
    v13 = (char *)(v30 - v31);
    if ( (unsigned __int64)(v13 - 8) <= 0x1F )
    {
      v30 = v31;
LABEL_49:
      operator delete(v30, v12);
      v16 = &v14[v15];
      goto LABEL_50;
    }
LABEL_51:
    _o__invalid_parameter_noinfo_noreturn(v13, v12);
    __debugbreak();
    goto LABEL_52;
  }
LABEL_50:
  *a1 = v14;
  a1[1] = &v14[8 * v34];
  a1[2] = &v14[v10];
  return v16;
}
