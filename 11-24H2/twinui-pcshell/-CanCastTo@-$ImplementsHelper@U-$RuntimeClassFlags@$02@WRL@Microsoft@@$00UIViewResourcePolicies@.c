/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DFD9C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180431920 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VWi.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180433660 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_180433660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // eax

  if ( *a2 == 905012364
    && a2[1] == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data2
    && a2[2] == *(_DWORD *)GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4
    && a2[3] == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == 1935131509
    && a2[1] == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data2
    && a2[2] == *(_DWORD *)GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4
    && a2[3] == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == 1906570277
    && a2[1] == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data2
    && a2[2] == *(_DWORD *)GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4
    && a2[3] == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == 994192510
    && a2[1] == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data2
    && a2[2] == *(_DWORD *)GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4
    && a2[3] == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == -1796592748 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      return 2147500034LL;
    }
    v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
  }
  else
  {
    if ( *a2 != 3
      || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      return 2147500034LL;
    }
    v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] == v4 )
  {
LABEL_5:
    *a3 = a1;
    return 0LL;
  }
  return 2147500034LL;
}
