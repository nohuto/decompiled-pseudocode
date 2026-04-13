/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180031704
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030F5C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        __int64 a3)
{
  int v4; // edx
  __int64 (__fastcall *v5)(__int64, _QWORD, int *, int *, __int64); // rax
  int v6; // r9d
  int v7; // r8d
  unsigned int v8; // edx
  int *result; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = HIDWORD(a1);
  v10 = 0;
  v12 = 0;
  v4 = 0;
  v5 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, __int64))g_wil_details_internalGetFeatureVariant;
  if ( g_wil_details_internalGetFeatureVariant
    || (v5 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, __int64))g_wil_details_apiGetFeatureVariant) != 0LL )
  {
    v4 = v5(16257538LL, 0LL, &v12, &v10, a3);
  }
  v6 = v4 & 0x100;
  v7 = (v10 != 0 ? 0x400 : 0) | (16 * (v4 & 0x80));
  *a2 = v7;
  v8 = v4 & 0xFFFFFE7F;
  if ( v8 && (v7 ^= (v8 & 0x3F) << 12, v6) )
    a2[1] = v12;
  else
    a2[1] = 0;
  result = a2;
  *a2 = v7;
  return result;
}
