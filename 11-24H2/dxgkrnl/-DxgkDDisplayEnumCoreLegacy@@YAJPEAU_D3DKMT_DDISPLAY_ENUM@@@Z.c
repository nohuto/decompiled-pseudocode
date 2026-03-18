/*
 * XREFs of ?DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1401C39E8
 * Callers:
 *     DxgkDDisplayEnumInternalLegacy @ 0x1401C5D60 (DxgkDDisplayEnumInternalLegacy.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCoreLegacy(struct _D3DKMT_DDISPLAY_ENUM *a1)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v2; // rax
  struct DXGGLOBAL *v3; // rax
  int *v5; // [rsp+20h] [rbp-20h] BYREF
  struct _D3DKMT_DDISPLAY_ENUM **v6; // [rsp+28h] [rbp-18h]
  unsigned int *v7; // [rsp+30h] [rbp-10h]
  struct _D3DKMT_DDISPLAY_ENUM *v8; // [rsp+50h] [rbp+10h] BYREF
  int v9; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v5 = &v9;
  v6 = &v8;
  v7 = &v10;
  DXGGLOBAL::IterateAdaptersWithCallback(
    Global,
    lambda_41398c31cc0f700d760001d873ef57ff_::_lambda_invoker_cdecl_,
    &v5,
    4LL);
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = DXGGLOBAL::GetGlobal();
    v5 = &v9;
    v6 = &v8;
    DXGGLOBAL::IterateAdaptersWithCallback(
      v2,
      lambda_32314699c3d123d464792da9f7a50c6a_::_lambda_invoker_cdecl_,
      &v5,
      3LL);
    v3 = DXGGLOBAL::GetGlobal();
    v5 = &v9;
    v6 = &v8;
    DXGGLOBAL::IterateAdaptersWithCallback(
      v3,
      lambda_32314699c3d123d464792da9f7a50c6a_::_lambda_invoker_cdecl_,
      &v5,
      5LL);
  }
  *(_DWORD *)v8 = v9;
  *((_DWORD *)v8 + 4) = v10;
  if ( *((_DWORD *)v8 + 1) < *(_DWORD *)v8 )
    return 3221225507LL;
  else
    return *((_DWORD *)v8 + 5) < v10 ? 0xC0000023 : 0;
}
