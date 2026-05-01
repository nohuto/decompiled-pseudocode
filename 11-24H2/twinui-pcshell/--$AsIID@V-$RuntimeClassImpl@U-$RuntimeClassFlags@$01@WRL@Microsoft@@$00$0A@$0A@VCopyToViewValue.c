/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DB9C4
 * Callers:
 *     ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18022BCF0 (-QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CB480 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToVie.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DBADC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSite@@UISer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rdx
  int CanCastTo; // ebx
  _QWORD *v6; // r8
  __int64 v7; // r10
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
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo();
  if ( CanCastTo != -2147467262 )
  {
LABEL_23:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_12;
  }
  if ( *v4 != 276
    || v4[1] != *(_DWORD *)&GUID_00000114_0000_0000_c000_000000000046.Data2
    || v4[2] != *(_DWORD *)GUID_00000114_0000_0000_c000_000000000046.Data4
    || v4[3] != *(_DWORD *)&GUID_00000114_0000_0000_c000_000000000046.Data4[4] )
  {
    v8 = v7 + 88;
    if ( *v4 == 594609810
      && v4[1] == *(_DWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data2
      && v4[2] == *(_DWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4
      && v4[3] == *(_DWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4[4]
      || (v8 = v7 + 96, *v4 == -1414719331)
      && v4[1] == *(_DWORD *)&GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb.Data2
      && v4[2] == *(_DWORD *)GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb.Data4
      && v4[3] == *(_DWORD *)&GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb.Data4[4] )
    {
      *v6 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = -2147467262;
    }
    goto LABEL_23;
  }
  *v6 = v7 + 80;
  CanCastTo = 0;
LABEL_12:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
  return (unsigned int)CanCastTo;
}
