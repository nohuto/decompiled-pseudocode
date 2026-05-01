/*
 * XREFs of ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000A838 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x18010A810 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x1802CDBC0 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceRemoval(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  const char *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 )
  {
    --*((_DWORD *)this + 80);
    v3 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v6 = "AccessibilityExperienceManager::OnDeviceRemoval";
      v7 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)v3,
        (__int64)&unk_180804EEC,
        v4,
        v5,
        (__int64)&v7,
        &v6);
    }
    if ( !*((_DWORD *)this + 80) )
    {
      SHRegSetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 0);
      AccessibilityExperienceManager::OnNotificationEvent((AccessibilityExperienceManager *)((char *)this - 16), 0LL);
    }
  }
}
