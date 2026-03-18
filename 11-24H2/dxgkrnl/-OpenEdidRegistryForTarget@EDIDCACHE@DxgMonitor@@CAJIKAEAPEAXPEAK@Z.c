/*
 * XREFs of ?OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z @ 0x1402702A4
 * Callers:
 *     ?ReadEdidFromRegistry@EDIDCACHE@DxgMonitor@@CAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x14027042C (-ReadEdidFromRegistry@EDIDCACHE@DxgMonitor@@CAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140270754 (-WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x140091228 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1403E708C (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::EDIDCACHE::OpenEdidRegistryForTarget(
        unsigned int a1,
        ACCESS_MASK a2,
        void **a3,
        unsigned int *a4)
{
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm0
  int v16; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v20; // [rsp+48h] [rbp-B8h] BYREF
  char v21; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v22[10]; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+110h] [rbp+10h]
  wchar_t v24; // [rsp+114h] [rbp+14h]

  *(_QWORD *)&v20.Length = 10879140LL;
  *(_QWORD *)&v19.Length = 1179648LL;
  v6 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v22[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v9 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  KeyHandle = 0LL;
  v22[1] = v6;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v22[2] = v9;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v22[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\InternalMonEdid";
  v22[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers\\InternalMonEdid";
  v22[5] = v12;
  v22[6] = v13;
  v22[7] = *(_OWORD *)L"icsDrivers\\InternalMonEdid";
  v14 = *(_DWORD *)L"id";
  v15 = *(_OWORD *)L"nalMonEdid";
  v22[8] = *(_OWORD *)L"rs\\InternalMonEdid";
  v22[9] = v15;
  v23 = v14;
  v24 = aRegistryMachin_23[82];
  v20.Buffer = (wchar_t *)v22;
  v19.Buffer = (wchar_t *)&v21;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  v16 = OpenRegistrySubkey(&KeyHandle, a2, 0LL, &v20, a4);
  if ( v16 >= 0 )
  {
    RtlUnicodeStringPrintf(&v19, L"%08x", a1);
    v16 = OpenRegistrySubkey(a3, a2, KeyHandle, &v19, a4);
    if ( v16 == -1073741772 && !a4 )
    {
      *a3 = KeyHandle;
      KeyHandle = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &KeyHandle,
        0LL);
      v16 = 0;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return (unsigned int)v16;
}
