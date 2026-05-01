/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180069D80
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180311BF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180311BF0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180311C00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180311C00.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180311C10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180311C10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180311C20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180311C20.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180311C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180311C40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180311C60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180311C60.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v4; // ecx
  int v7; // ebx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r9

  *a3 = 0LL;
  v4 = *a2;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( v4 == -1350114592 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
  }
  else if ( v4 == 925769019
         && a2[1] == *(_DWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data2
         && a2[2] == *(_DWORD *)GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4
         && a2[3] == *(_DWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4[4] )
  {
    goto LABEL_16;
  }
  if ( v4 == 2133140026
    && a2[1] == *(_DWORD *)&GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data2
    && a2[2] == *(_DWORD *)GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data4
    && a2[3] == *(_DWORD *)&GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data4[4] )
  {
    *a3 = a1 + 8;
    v7 = 0;
  }
  else if ( v4 == -1751327192
         && a2[1] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data2
         && a2[2] == *(_DWORD *)GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4
         && a2[3] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4[4] )
  {
    *a3 = a1 + 16;
    v7 = 0;
  }
  else if ( v4 == 480212245
         && a2[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
         && a2[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
         && a2[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
  {
    *a3 = a1 + 24;
    v7 = 0;
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 != -2147467262 )
    goto LABEL_34;
  a1 += 144LL;
  v8 = *a2;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v9 = a1 + 8;
    if ( v8 == -659269936
      && a2[1] == *(_DWORD *)&GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b.Data2
      && a2[2] == *(_DWORD *)GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b.Data4
      && a2[3] == *(_DWORD *)&GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b.Data4[4] )
    {
      *a3 = v9;
      v7 = 0;
      goto LABEL_34;
    }
    v10 = v9 + 8;
    if ( v8 == -1796592748 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
        && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
      {
        *a3 = v10;
        v7 = 0;
        goto LABEL_34;
      }
    }
    else if ( v8 == 3
           && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
           && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
           && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v10;
      v7 = 0;
      goto LABEL_34;
    }
    v7 = -2147467262;
LABEL_34:
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_17;
  }
LABEL_16:
  *a3 = a1;
  v7 = 0;
LABEL_17:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v7;
}
