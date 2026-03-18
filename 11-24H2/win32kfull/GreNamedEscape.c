/*
 * XREFs of GreNamedEscape @ 0x14025E294
 * Callers:
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdFontManagement @ 0x140101B50 (UmfdFontManagement.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14011917C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401C5E94 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline @ 0x140336CFC (Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline @ 0x140336D50 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int CurrentServiceSessionId; // esi
  __int64 v20; // r9
  BOOL v21; // [rsp+40h] [rbp-18h] BYREF
  BOOL v22; // [rsp+44h] [rbp-14h] BYREF
  __int64 v23; // [rsp+48h] [rbp-10h]

  v10 = 0;
  if ( (unsigned int)Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !_wcsicmp(Str1, L"atmlib.dll") )
      goto LABEL_3;
    if ( !_wcsicmp(Str1, L"atmfd.dll") )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
      v11 = (__int64)CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v12 = a2 - 9473;
          if ( (unsigned int)v12 <= 0x13 )
          {
            v13 = (unsigned int)(1 << (a2 - 1));
            _m_prefetchw((char *)CurrentProcessWin32Process + 292);
            v17 = *((_DWORD *)CurrentProcessWin32Process + 73);
            do
            {
              v12 = (unsigned int)v13 | v17;
              v18 = v17;
              v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 292), v12, v17);
            }
            while ( v18 != v17 );
            if ( (v17 & (unsigned int)v13) == 0 )
            {
              CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
              if ( (unsigned int)Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline() )
              {
                if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
                {
                  v22 = a2;
                  v23 = 0x1000000LL;
                  v21 = CurrentServiceSessionId != 0;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)&dword_140398BB8,
                    (__int64)&unk_14036A44D);
                }
              }
              else if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
              {
                v21 = a2;
                v22 = CurrentServiceSessionId != 0;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_140398BB8,
                  byte_14036A40D,
                  v13,
                  v20,
                  (__int64)&v21,
                  (__int64)&v22);
              }
            }
          }
        }
      }
      goto LABEL_3;
    }
    return 3221225474LL;
  }
  if ( _wcsicmp(Str1, L"atmfd.dll") )
    return 3221225474LL;
LABEL_3:
  if ( a2 == 256 || a2 - 9473 <= 0x13 )
  {
    UmfdHostLifeTimeManager::EnsureUmfdHost(v12, v11, v13);
    return (unsigned int)UmfdFontManagement(0LL, 0LL, a2, a3, a4, a5, a6);
  }
  return v10;
}
