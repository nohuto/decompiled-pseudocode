/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A599C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180215850 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180215850.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<ITabletModeViewManagerInternal,ITabletModeViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IEdgeUiTouchInvocation,IEdgeUiMouseInvocation>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  if ( *a2 != -62389853
    || a2[1] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    || a2[2] != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    || a2[3] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = a1 + 24;
      v5 = 0;
    }
    else
    {
      if ( *a2 == 1834041537
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = a1 + 32;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
      }
      if ( v5 == -2147467262 )
        v5 = -2147467262;
    }
    if ( v5 != -2147467262 )
      goto LABEL_34;
    v6 = a1 + 88;
    if ( *a2 == -2079748236 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_84098f74_87a7_4582_b398_f6c3178e9dd6.Data2
        && a2[2] == *(_DWORD *)GUID_84098f74_87a7_4582_b398_f6c3178e9dd6.Data4 )
      {
        v7 = *(_DWORD *)&GUID_84098f74_87a7_4582_b398_f6c3178e9dd6.Data4[4];
        goto LABEL_26;
      }
    }
    else if ( *a2 == 926832335
           && a2[1] == *(_DWORD *)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data2
           && a2[2] == *(_DWORD *)GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data4 )
    {
      v7 = *(_DWORD *)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data4[4];
LABEL_26:
      if ( a2[3] == v7 )
      {
        *a3 = v6;
LABEL_33:
        v5 = 0;
        goto LABEL_34;
      }
    }
    v8 = v6 + 8;
    if ( *a2 == 2119596781
      && a2[1] == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data2
      && a2[2] == *(_DWORD *)GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4
      && a2[3] == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4[4]
      || (v8 += 8LL, *a2 == -1370471653)
      && a2[1] == *(_DWORD *)&GUID_ae50431b_f86a_4c3c_b11d_2910d9407613.Data2
      && a2[2] == *(_DWORD *)GUID_ae50431b_f86a_4c3c_b11d_2910d9407613.Data4
      && a2[3] == *(_DWORD *)&GUID_ae50431b_f86a_4c3c_b11d_2910d9407613.Data4[4] )
    {
      *a3 = v8;
      goto LABEL_33;
    }
    v5 = -2147467262;
LABEL_34:
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_13;
  }
  *a3 = a1;
  v5 = 0;
LABEL_13:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
