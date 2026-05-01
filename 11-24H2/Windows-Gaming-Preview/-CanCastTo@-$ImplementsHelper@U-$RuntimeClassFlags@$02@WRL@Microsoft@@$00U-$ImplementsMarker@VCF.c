/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCFTMCrossProcServer@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000D860
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E4F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcServer>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  int v6; // edi
  int v7; // esi
  unsigned int v8; // ecx
  int v9; // r12d
  _DWORD *v10; // r9
  int v11; // r13d
  _DWORD *v12; // r8
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  _DWORD *v17; // r15
  _DWORD *v18; // r14
  _DWORD *v19; // rbp
  bool v20; // zf

  v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  v6 = *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4;
  v7 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2;
  if ( *a2 != 3
    || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    v10 = a2 + 1;
    v11 = *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
    v12 = a2 + 2;
    v13 = a2 + 3;
    v14 = a1 + 8;
    if ( *a2 == -1796592748
      && *v10 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && *v12 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && *v13 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v14;
      v8 = 0;
      v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
      v15 = 0;
      v6 = *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4;
      v7 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2;
      v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
      v11 = *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
    }
    else
    {
      v16 = v14 + 8;
      v17 = v10;
      v8 = 0;
      v18 = v12;
      v19 = v13;
      if ( *a2 == 64
        && *v10 == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
        && *v12 == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
        && *v13 == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v16;
        v15 = 0;
        v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
        v6 = *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4;
        v7 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2;
        v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
        v11 = *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
        goto LABEL_18;
      }
      v15 = -2147467262;
    }
    v17 = v10;
    v18 = v12;
    v19 = v13;
LABEL_18:
    if ( v15 != -2147467262 )
      return v15;
    if ( *a2 == -1796592748 )
    {
      if ( *v17 != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2 || *v18 != v11 )
        return (unsigned int)-2147467262;
      v20 = *v19 == v9;
    }
    else
    {
      if ( *a2 != 3 || *v10 != v7 || *v12 != v6 )
        return (unsigned int)-2147467262;
      v20 = *v13 == v4;
    }
    if ( v20 )
    {
      *a3 = a1 + 64;
      return v8;
    }
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  return 0;
}
