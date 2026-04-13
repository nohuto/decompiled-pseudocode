/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180034154 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  bool IsFeatureConfigured; // al
  unsigned int v5; // ecx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (wil::details *)&v7,
                          (int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1,
                          a3);
  v5 = 0;
  if ( IsFeatureConfigured )
    v5 = v7;
  if ( (_DWORD)v8 )
    v5 |= 0x80u;
  if ( HIDWORD(v8) )
    v5 |= 0x40u;
  return v5;
}
