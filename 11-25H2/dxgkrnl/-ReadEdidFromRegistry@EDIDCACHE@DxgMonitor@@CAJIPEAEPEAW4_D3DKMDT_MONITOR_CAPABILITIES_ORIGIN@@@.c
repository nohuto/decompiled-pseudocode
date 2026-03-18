/*
 * XREFs of ?ReadEdidFromRegistry@EDIDCACHE@DxgMonitor@@CAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1402694CC
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140269090 (-GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_OR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z @ 0x140269344 (-OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::EDIDCACHE::ReadEdidFromRegistry(
        unsigned int a1,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rdx
  int v9; // eax
  void *v11; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v12; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  const WCHAR *v15; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  const WCHAR *v22; // [rsp+A8h] [rbp-58h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+E8h] [rbp-18h]
  __int128 v31; // [rsp+F8h] [rbp-8h]

  v11 = 0LL;
  v6 = DxgMonitor::EDIDCACHE::OpenEdidRegistryForTarget(a1, 0x20019u, &v11, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v11;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 209;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"InternalMonEdidHandle", 209LL, 0LL, 0LL, 0LL, 0LL);
      v8 = v11;
    }
    v13 = 0LL;
    v20 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v15 = L"EDID";
    v22 = L"Origin";
    v23 = &v12;
    v14 = 292;
    v21 = 292;
    v25 = &v12;
    v12 = -1;
    *(_DWORD *)a2 = -128;
    v16 = a2;
    v17 = 50331651;
    v18 = a2;
    v19 = 128;
    v24 = 67108868;
    v26 = 4;
    v30 = 0LL;
    v31 = 0LL;
    v9 = RtlQueryRegistryValuesEx(0x40000000LL, v8, &v13, 0LL, 0LL);
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( v12 == -1 || *(_DWORD *)a2 == -128 )
      {
        v7 = -1073741823;
        WdLogSingleEntry3(3LL, -1073741823LL, v11, &v13);
        WdLogGlobalForLineNumber = 260;
      }
      else
      {
        *a3 = v12;
      }
    }
    else
    {
      WdLogSingleEntry3(3LL, v9, v11, &v13);
      WdLogGlobalForLineNumber = 248;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, v6, a1);
    WdLogGlobalForLineNumber = 206;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11);
  return v7;
}
