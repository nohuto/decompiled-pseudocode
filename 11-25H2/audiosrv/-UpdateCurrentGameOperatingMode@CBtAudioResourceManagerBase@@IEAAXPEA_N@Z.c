/*
 * XREFs of ?UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z @ 0x1800DD370
 * Callers:
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUSaDeviceParams@@@Z @ 0x1800D9620 (-OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUSaDeviceParams@@@Z.c)
 *     ?ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800D9AE8 (-ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

void __fastcall CBtAudioResourceManagerBase::UpdateCurrentGameOperatingMode(
        struct _RTL_CRITICAL_SECTION *this,
        bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int DebugInfo; // ecx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 6;
  EnterCriticalSection(this + 6);
  DebugInfo = (int)this[12].DebugInfo;
  v6 = 0;
  v7 = v2;
  if ( HIDWORD(this[11].SpinCount) )
  {
    v6 = 2;
    if ( SLODWORD(this[11].SpinCount) <= 0 )
      v6 = 1;
  }
  LODWORD(this[12].DebugInfo) = v6;
  *a2 = DebugInfo != v6;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
}
