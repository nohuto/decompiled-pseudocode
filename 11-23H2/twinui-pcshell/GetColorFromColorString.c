/*
 * XREFs of GetColorFromColorString @ 0x18050FBE8
 * Callers:
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x18050FB48 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1801E485C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18050A9BC (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18051D74C (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetColorFromColorString(char *a1)
{
  unsigned __int64 v2; // r8
  _BYTE *v3; // r14
  _BYTE *v4; // rbx
  __int64 v5; // rax
  char *v6; // r10
  unsigned __int64 v7; // rax
  char *v8; // r15
  char *i; // rdi
  __int64 v10; // rax
  char *v11; // rcx
  __int64 v12; // rdi
  wchar_t *v13; // rcx
  int v14; // eax
  wchar_t *v15; // rax
  int v16; // eax
  _BYTE *v17; // rbx
  const char *v18; // r9
  unsigned int v19; // ebx
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+28h] [rbp-60h] BYREF
  _BYTE *v23; // [rsp+38h] [rbp-50h]
  const wchar_t *v24; // [rsp+40h] [rbp-48h]
  _BYTE v25[32]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v24 = L",";
  v4 = 0LL;
  try
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)a1 + 2);
      v6 = a1;
      if ( *((_QWORD *)a1 + 3) >= 8uLL )
        v6 = *(char **)a1;
      if ( v5 )
      {
        v7 = v5 - 1;
        if ( v2 <= v7 )
        {
          v8 = &v6[2 * v7 + 2];
          for ( i = &v6[2 * v2]; ; i = v11 + 2 )
          {
            v10 = (v8 - i) >> 1;
            v11 = 0LL;
            if ( v10 )
            {
              while ( *(_WORD *)i != 44 )
              {
                if ( v10 == 1 )
                  goto LABEL_13;
                --v10;
                i += 2;
              }
              v11 = i;
            }
LABEL_13:
            if ( !v11 )
              break;
            if ( *(_WORD *)v11 == 44 )
            {
              v12 = (v11 - v6) >> 1;
              goto LABEL_18;
            }
          }
        }
      }
      v12 = -1LL;
LABEL_18:
      if ( v12 == -1 )
        break;
      v13 = (wchar_t *)std::wstring::substr(a1, (__int64)v25, v2, v12 - v2);
      v14 = std::stoi(v13);
      v21 = v14;
      if ( v4 == v3 )
      {
        std::vector<int>::_Emplace_reallocate<int>((const void **)&v22, v4, &v21);
        v3 = v23;
        v4 = (_BYTE *)*((_QWORD *)&v22 + 1);
      }
      else
      {
        *(_DWORD *)v4 = v14;
        v4 += 4;
        *((_QWORD *)&v22 + 1) = v4;
      }
      std::wstring::_Tidy_deallocate((__int64)v25);
      v2 = v12 + 1;
    }
    v15 = (wchar_t *)std::wstring::substr(a1, (__int64)v25, v2, 0xFFFFFFFFFFFFFFFFuLL);
    v16 = std::stoi(v15);
    v21 = v16;
    if ( v4 == v3 )
    {
      std::vector<int>::_Emplace_reallocate<int>((const void **)&v22, v4, &v21);
      v17 = (_BYTE *)*((_QWORD *)&v22 + 1);
    }
    else
    {
      *(_DWORD *)v4 = v16;
      v17 = v4 + 4;
      *((_QWORD *)&v22 + 1) = v17;
    }
    std::wstring::_Tidy_deallocate((__int64)v25);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1621,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v18);
    goto LABEL_32;
  }
  if ( (__int64)&v17[-v22] >> 2 == 3
    && *(_DWORD *)v22 <= 0xFFu
    && *(_DWORD *)(v22 + 4) <= 0xFFu
    && *(_DWORD *)(v22 + 8) <= 0xFFu )
  {
    v19 = *(unsigned __int8 *)v22 | (*(unsigned __int8 *)(v22 + 8) << 16) | (*(unsigned __int8 *)(v22 + 4) << 8);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v22);
    return v19;
  }
  else
  {
LABEL_32:
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v22);
    return 0LL;
  }
}
