/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B8638
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B8534 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistory,IRealmActivationHistoryInternal>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 1729326731
    || a2[1] != *(_DWORD *)&GUID_67136e8b_6914_43f0_8f25_05619927d22e.Data2
    || a2[2] != *(_DWORD *)GUID_67136e8b_6914_43f0_8f25_05619927d22e.Data4
    || a2[3] != *(_DWORD *)&GUID_67136e8b_6914_43f0_8f25_05619927d22e.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -1450441614
      || a2[1] != *(_DWORD *)&GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600.Data2
      || a2[2] != *(_DWORD *)GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600.Data4
      || a2[3] != *(_DWORD *)&GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600.Data4[4] )
    {
      return 2147500034LL;
    }
  }
  *a3 = a1;
  return 0LL;
}
