/*
 * XREFs of ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z @ 0x1401C38F4
 * Callers:
 *     ?DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1401C3AD8 (-DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z @ 0x1401C3DFC (-DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCore(struct _D3DKMT_DDISPLAY_ENUM2 *a1)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v2; // rax
  struct DXGGLOBAL *v3; // rax
  int *v5; // [rsp+20h] [rbp-20h] BYREF
  struct _D3DKMT_DDISPLAY_ENUM2 **v6; // [rsp+28h] [rbp-18h]
  unsigned int *v7; // [rsp+30h] [rbp-10h]
  struct _D3DKMT_DDISPLAY_ENUM2 *v8; // [rsp+50h] [rbp+10h] BYREF
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
    lambda_28a548c3cef59bc16f2e75f291da39e4_::_lambda_invoker_cdecl_,
    &v5,
    4LL);
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = DXGGLOBAL::GetGlobal();
    v5 = &v9;
    v6 = &v8;
    DXGGLOBAL::IterateAdaptersWithCallback(
      v2,
      lambda_1a6c10c8c8641df7e741d522bb5c41ae_::_lambda_invoker_cdecl_,
      &v5,
      3LL);
    v3 = DXGGLOBAL::GetGlobal();
    v5 = &v9;
    v6 = &v8;
    DXGGLOBAL::IterateAdaptersWithCallback(
      v3,
      lambda_1a6c10c8c8641df7e741d522bb5c41ae_::_lambda_invoker_cdecl_,
      &v5,
      5LL);
  }
  *((_DWORD *)v8 + 1) = v9;
  *((_DWORD *)v8 + 6) = v10;
  if ( *((_DWORD *)v8 + 2) < *((_DWORD *)v8 + 1) )
    return 3221225507LL;
  else
    return *((_DWORD *)v8 + 7) < v10 ? 0xC0000023 : 0;
}
