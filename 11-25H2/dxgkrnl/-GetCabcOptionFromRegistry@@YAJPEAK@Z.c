/*
 * XREFs of ?GetCabcOptionFromRegistry@@YAJPEAK@Z @ 0x14018D1EC
 * Callers:
 *     ?InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ @ 0x14018FC60 (-InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCabcOptionFromRegistry(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+38h] [rbp-C8h]
  const WCHAR *v9; // [rsp+40h] [rbp-C0h]
  int *v10; // [rsp+48h] [rbp-B8h]
  int v11; // [rsp+50h] [rbp-B0h]
  int *v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int128 v17; // [rsp+80h] [rbp-80h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-60h] BYREF
  int v20; // [rsp+A8h] [rbp-58h]
  const wchar_t *v21; // [rsp+B0h] [rbp-50h]
  int *v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+C0h] [rbp-40h]
  int *v24; // [rsp+C8h] [rbp-38h]
  int v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int128 v29; // [rsp+F0h] [rbp-10h]
  __int128 v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+140h] [rbp+40h] BYREF
  int v32; // [rsp+148h] [rbp+48h] BYREF
  int v33; // [rsp+150h] [rbp+50h] BYREF
  int v34; // [rsp+158h] [rbp+58h] BYREF

  v33 = 2;
  v32 = 2;
  v7 = 0LL;
  v9 = L"CABCOption";
  v8 = 292;
  v10 = &v32;
  v11 = 0x4000000;
  v12 = &v33;
  v13 = 4;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v7, 0LL, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v32;
  }
  else
  {
    WdLogSingleEntry1(3LL, v2);
    WdLogGlobalForLineNumber = 4635;
    v31 = 0;
    v21 = L"DisableCABC";
    v34 = 0;
    v22 = &v31;
    v19 = 0LL;
    v24 = &v34;
    v20 = 288;
    v23 = 0x4000000;
    v25 = 4;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v4 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v19, 0LL, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(3LL, v4);
      WdLogGlobalForLineNumber = 4657;
    }
    v5 = v31 != 1 ? 2 : 0;
  }
  *a1 = v5;
  return v3;
}
