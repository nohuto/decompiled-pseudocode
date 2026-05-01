/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCFTMCrossProcClientImpl@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180027968
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D410 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcClientImpl>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rcx
  _DWORD *v7; // r10
  _DWORD *v8; // r9
  _DWORD *v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx

  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  v6 = a1 + 8;
  v7 = a2 + 1;
  v8 = a2 + 2;
  v9 = a2 + 3;
  if ( *a2 == -1796592748
    && *v7 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *v8 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *v9 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = v6;
    v5 = 0;
LABEL_11:
    v10 = 0;
    goto LABEL_18;
  }
  v11 = v6 + 8;
  v5 = 0;
  if ( *a2 == 64
    && *v7 == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
    && *v8 == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
    && *v9 == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v11;
    goto LABEL_11;
  }
  v10 = -2147467262;
LABEL_18:
  if ( v10 == -2147467262 )
  {
    v12 = a1 + 56;
    if ( *a2 == 324
      && *v7 == *(_DWORD *)&GUID_00000144_0000_0000_c000_000000000046.Data2
      && *v8 == *(_DWORD *)GUID_00000144_0000_0000_c000_000000000046.Data4
      && *v9 == *(_DWORD *)&GUID_00000144_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v12;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return v10;
  }
  return v5;
}
