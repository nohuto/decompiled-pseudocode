/*
 * XREFs of ??$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x1800487E8
 * Callers:
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x180047F38 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     ??$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA_KAEB_K@Z @ 0x180047FFC (--$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA.c)
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x18004C4CC (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A498 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x180047BC8 (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 */

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::PlacementReportedInfo>(
        __int64 a1,
        const BYTE *a2,
        HKEY a3,
        _BYTE *a4,
        _BYTE *a5)
{
  LSTATUS result; // eax
  const WCHAR *v8; // rdx
  const WCHAR *v9; // [rsp+50h] [rbp-18h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+18h] BYREF

  hKey = a3;
  result = (int)a5;
  v9 = L"PlacementReported";
  if ( *a5 && *a4 )
  {
    hKey = 0LL;
    v8 = (const WCHAR *)(a1 + 216);
    if ( *(_QWORD *)(a1 + 240) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, v8, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL)
      || RegSetValueExW(hKey, L"PlacementReported", 0, 3u, a2, 0x24u) )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthInfoWriteFailure<unsigned short const * &>((__int64 *)&v9);
    }
    *a4 = 0;
    return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  return result;
}
