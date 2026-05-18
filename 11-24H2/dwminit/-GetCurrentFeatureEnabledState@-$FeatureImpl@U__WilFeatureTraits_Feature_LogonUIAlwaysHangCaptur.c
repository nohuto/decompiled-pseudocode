/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000BED8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B968 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCapture.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000D790 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edx
  unsigned int v5; // r8d
  int v6; // ecx
  _QWORD *v7; // rdx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  char v12; // si
  char IsEnabled; // al

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v4 = v2(61208716LL, 3LL);
  }
  else
  {
    v4 = 0;
  }
  *a2 = 0LL;
  v5 = v4 & 0xFFFFFF3F;
  v6 = v4 & 0x80 | (4 * (v4 & 0x40 | (4 * (v4 & 3))));
  v7 = a2;
  v8 = 8 * v6;
  *(_DWORD *)a2 = v8;
  if ( v5 )
  {
    v9 = 0;
    if ( v5 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = 64;
  }
  v10 = v9 | v8;
  *(_DWORD *)a2 = v10;
  LOBYTE(v7) = 0;
  v11 = 1;
  if ( (v10 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v10 & 0x40) == 0 )
    {
LABEL_17:
      v11 = 0;
      goto LABEL_18;
    }
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::__private_IsEnabled(
                &`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::GetImpl'::`2'::impl,
                v7);
  v10 = *(_DWORD *)a2;
  if ( v12 && !IsEnabled )
    v10 &= ~0x400u;
  if ( (v10 & 0x40) == 0 || !IsEnabled )
    goto LABEL_17;
LABEL_18:
  *(_DWORD *)a2 = v11 | v10 & 0xFFFFFFFE;
  return a2;
}
