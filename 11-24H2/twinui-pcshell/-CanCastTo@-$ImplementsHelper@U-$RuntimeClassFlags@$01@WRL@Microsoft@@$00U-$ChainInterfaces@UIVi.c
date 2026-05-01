/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ChainInterfaces@UIVirtualDesktopNotificationServicePrivate@@UIVirtualDesktopNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801DF0E8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DF060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801DF060.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180101890 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IVirtualDesktopNotificationServicePrivate,IVirtualDesktopNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopNotification,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // r10

  if ( *(_DWORD *)a2 == -2119300642
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68.Data4[4]
    || *(_DWORD *)a2 == 215244401
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID((const struct _GUID *)a2, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade);
    v3 = 0;
    if ( IsEqualGUID )
      *v5 = v7;
    else
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
                             v7 + 8,
                             v6,
                             v5);
  }
  return v3;
}
