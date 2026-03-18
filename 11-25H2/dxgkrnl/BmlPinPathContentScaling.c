/*
 * XREFs of BmlPinPathContentScaling @ 0x1402D43AC
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1402D3EC4 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x14039C56C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001C548 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlInternalTryPinningScaling @ 0x1402D3678 (BmlInternalTryPinningScaling.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403F40A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPinPathContentScaling(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // r13
  int *v5; // rsi
  __int64 v6; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v8; // ebx
  int v9; // ebx
  __int64 result; // rax
  int v11; // edi
  VIDPN_MGR *v12; // rcx
  __int64 v13; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v14; // r8d
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v4 = a3;
  v5 = (int *)(a1 + 16 + 120LL * a3);
  v6 = v5[2];
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)v5 + 24LL),
           *(_DWORD *)(*(_QWORD *)v5 + 28LL));
  v8 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)*((_DWORD *)Path + 30);
  if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(Path) )
  {
    if ( (_DWORD)v6 == 5 )
    {
      result = BmlInternalTryPinningScaling((__int64)v5, a2, D3DKMDT_VPPS_CUSTOM, v8);
      if ( (int)result >= 0 )
        return result;
      WdLogSingleEntry3(3LL, v15, a2, v4);
      WdLogGlobalForLineNumber = 3268;
    }
    v9 = BmlInternalTryPinningScaling((__int64)v5, a2, D3DKMDT_VPPS_IDENTITY, v8);
    if ( v9 < 0 )
    {
      WdLogSingleEntry4(3LL, v5[2], v15, a2, v4);
      result = (unsigned int)v9;
      WdLogGlobalForLineNumber = 3279;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v11 = -1071774970;
    if ( (unsigned int)(v6 - 2) > 3 && (_DWORD)v6 != 255
      || (v11 = BmlInternalTryPinningScaling((__int64)v5, a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v6, v8),
          v11 == -1071774970) )
    {
      if ( (dword_14015E6C8 & 1) == 0 )
      {
        v12 = *(VIDPN_MGR **)(a2 + 48);
        dword_14015E6C8 |= 1u;
        dword_14015E480[0] = VIDPN_MGR::GetAdapterDefaultScaling(v12);
        dword_14015E484 = 3;
        dword_14015E488 = 4;
        dword_14015E48C = 2;
      }
      v13 = 0LL;
      do
      {
        if ( (unsigned int)v13 >= 4 )
          break;
        v14 = dword_14015E480[v13];
        if ( v14 != (_DWORD)v6 )
          v11 = BmlInternalTryPinningScaling((__int64)v5, a2, v14, v8);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( v11 == -1071774970 );
    }
    if ( v11 < 0 )
    {
      ++v5[16];
      v5[18] = v11;
      if ( v11 != -1071774970 )
      {
        WdLogSingleEntry4(3LL, v6, &v15, a2, v4);
        WdLogGlobalForLineNumber = 3342;
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
