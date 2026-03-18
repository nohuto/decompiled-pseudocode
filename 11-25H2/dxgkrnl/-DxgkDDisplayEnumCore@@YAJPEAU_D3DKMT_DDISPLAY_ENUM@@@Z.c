/*
 * XREFs of ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x14039ED68
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x14039E730 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140067D78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCore(struct _D3DKMT_DDISPLAY_ENUM *a1)
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
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_c156edba848838830db052637bc2438f_::_lambda_invoker_cdecl_,
    (__int64)&v5,
    4);
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = DXGGLOBAL::GetGlobal();
    v5 = &v9;
    v6 = &v8;
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v2,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_741d6930f3c78034c5525c2534e5dd10_::_lambda_invoker_cdecl_,
      (__int64)&v5,
      3);
    v3 = DXGGLOBAL::GetGlobal();
    v5 = &v9;
    v6 = &v8;
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v3,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_741d6930f3c78034c5525c2534e5dd10_::_lambda_invoker_cdecl_,
      (__int64)&v5,
      5);
  }
  *(_DWORD *)v8 = v9;
  *((_DWORD *)v8 + 4) = v10;
  if ( *((_DWORD *)v8 + 1) < *(_DWORD *)v8 )
    return 3221225507LL;
  else
    return *((_DWORD *)v8 + 5) < v10 ? 0xC0000023 : 0;
}
