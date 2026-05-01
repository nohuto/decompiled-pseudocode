/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18018F79C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180218C30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180218C30.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // eax
  int v5; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        goto LABEL_20;
      }
      v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        goto LABEL_20;
      }
      v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( a2[3] == v4 )
    {
      *a3 = a1;
      v5 = 0;
LABEL_13:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v5;
    }
LABEL_20:
    v7 = a1 + 32;
    if ( *a2 == -124057211 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data2
        || a2[2] != *(_DWORD *)GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4 )
      {
        goto LABEL_26;
      }
      v8 = *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4[4];
    }
    else
    {
      if ( *a2 != -132485016
        || a2[1] != *(_DWORD *)&GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data2
        || a2[2] != *(_DWORD *)GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data4 )
      {
        goto LABEL_26;
      }
      v8 = *(_DWORD *)&GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data4[4];
    }
    if ( a2[3] == v8 )
    {
      *a3 = v7;
      goto LABEL_31;
    }
LABEL_26:
    v9 = v7 + 8;
    if ( *a2 != 179198059
      || a2[1] != *(_DWORD *)&GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data2
      || a2[2] != *(_DWORD *)GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data4
      || a2[3] != *(_DWORD *)&GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data4[4] )
    {
      v9 += 8LL;
      if ( *a2 != 751684338
        || a2[1] != *(_DWORD *)&GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data2
        || a2[2] != *(_DWORD *)GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data4
        || a2[3] != *(_DWORD *)&GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data4[4] )
      {
        v9 += 8LL;
        if ( *a2 != 1261062896
          || a2[1] != *(_DWORD *)&GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7.Data2
          || a2[2] != *(_DWORD *)GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7.Data4
          || a2[3] != *(_DWORD *)&GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7.Data4[4] )
        {
          v9 += 8LL;
          if ( *a2 != 1639578286
            || a2[1] != *(_DWORD *)&GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data2
            || a2[2] != *(_DWORD *)GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data4
            || a2[3] != *(_DWORD *)&GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data4[4] )
          {
            v5 = -2147467262;
LABEL_32:
            if ( v5 < 0 )
              return (unsigned int)v5;
            goto LABEL_13;
          }
        }
      }
    }
    *a3 = v9;
LABEL_31:
    v5 = 0;
    goto LABEL_32;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
