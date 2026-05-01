/*
 * XREFs of HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x18006FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B30 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     CempGetTokenHostInfo @ 0x180039DA0 (CempGetTokenHostInfo.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004583C (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvCreateAutoRestartActivityForDesktopBridge(__int64 a1, void *a2, unsigned __int64 *a3)
{
  int TokenHostInfo; // ebx
  char IsEnabled; // al
  int v7; // edx
  void *TokenHandle[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh]
  int v12; // [rsp+58h] [rbp-A8h]
  char v13[532]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v14; // [rsp+3F4h] [rbp+2F4h]

  memset_0(&v10, 0, 0x188uLL);
  memset_0(v13, 0, 0x228uLL);
  TokenHandle[0] = 0LL;
  TokenHostInfo = NtOpenProcessToken(a2, 8u, TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle[0], v13);
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( TokenHostInfo >= 0 )
  {
    HampActivityPropertiesInitialize(
      (char *)L"BridgeAppActivity",
      (char *)&word_1800C1FFC,
      (struct _HAM_ACTIVITY_PROPERTIES *)&v10);
    v10 = v10 & 0xFC7FFFFF | 0x2000000;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl)
      && (!(unsigned __int8)RtlIsMultiSessionSku() || v14) )
    {
      v11 |= 0x400u;
      v12 |= 0x200u;
    }
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl);
    v7 = 0;
    if ( !IsEnabled )
      v7 = 2;
    LODWORD(TokenHandle[0]) = v7;
    TokenHostInfo = ArSrvCheckCreateActivityForHost(
                      a3,
                      (struct _RM_PSM_HOST_INFO *)v13,
                      a2,
                      (struct _HAM_ACTIVITY_PROPERTIES *)&v10,
                      (union _HAM_RESTART_PROPERTIES *)TokenHandle);
    if ( TokenHostInfo >= 0 )
      return 0;
  }
  return (unsigned int)TokenHostInfo;
}
