/*
 * XREFs of ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x14027ECEC
 * Callers:
 *     ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x140276024 (-_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1403E3A38 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1403DCE70 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(PCWSTR *this, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // edi
  NTSTATUS v5; // eax
  int ValueData; // [rsp+40h] [rbp+8h] BYREF
  PCWSTR Path; // [rsp+50h] [rbp+18h] BYREF

  Path = 0LL;
  v3 = a2;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&Path,
    0LL);
  v4 = DXGMONITOR::OpenMonitorDataStore((DXGMONITOR *)(this + 3), 0, (void **)&Path);
  if ( v4 >= 0 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v3, *((unsigned int *)this + 45));
    WdLogGlobalForLineNumber = 1336;
    ValueData = *(_DWORD *)((char *)this + SHIDWORD(this[4 * (unsigned int)v3 + 101]));
    v5 = RtlWriteRegistryValue(0x40000000u, Path, this[4 * v3 + 100], 4u, &ValueData, 4u);
    v4 = v5;
    if ( v5 < 0 )
    {
      WdLogSingleEntry3(2LL, (unsigned int)v3, *((unsigned int *)this + 45), v5);
      WdLogGlobalForLineNumber = 1353;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Path);
  return (unsigned int)v4;
}
