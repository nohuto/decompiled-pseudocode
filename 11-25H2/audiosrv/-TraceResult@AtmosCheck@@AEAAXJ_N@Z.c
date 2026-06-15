/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x1800629B4
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180062D54 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@53@Z @ 0x180062BE4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U3@U1@@-$_tlgWrite.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, int a2, char a3)
{
  const char *v3; // r10
  const char *v6; // r11
  int v7; // r9d
  int v8; // ecx
  int v9; // ecx
  char v10; // r8
  int v11; // r9d
  const char *v12; // r10
  __int64 v13; // r11
  const char *v14; // [rsp+50h] [rbp-20h] BYREF
  const char *v15; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-10h] BYREF
  int v17; // [rsp+80h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+28h] BYREF

  v3 = "None";
  v6 = "None";
  v7 = *((_DWORD *)this + 46) - 1;
  if ( *((_DWORD *)this + 46) == 1 )
  {
    v3 = "Initialization";
  }
  else
  {
    v7 = *((_DWORD *)this + 46) - 2;
    if ( *((_DWORD *)this + 46) == 2 )
    {
      v3 = "AppInstallation";
    }
    else
    {
      v7 = *((_DWORD *)this + 46) - 3;
      if ( *((_DWORD *)this + 46) == 3 )
      {
        v3 = "AppUninstallation";
      }
      else
      {
        v7 = *((_DWORD *)this + 46) - 4;
        if ( *((_DWORD *)this + 46) == 4 )
        {
          v3 = "AppUpdating";
        }
        else
        {
          v7 = *((_DWORD *)this + 46) - 5;
          if ( *((_DWORD *)this + 46) == 5 )
          {
            v3 = "TimerCallback";
          }
          else
          {
            v7 = *((_DWORD *)this + 46) - 6;
            if ( *((_DWORD *)this + 46) == 6 )
            {
              v3 = "LicenseRefreshTimerCallback";
            }
            else
            {
              v7 = *((_DWORD *)this + 46) - 7;
              if ( *((_DWORD *)this + 46) == 7 )
              {
                v3 = "ForceLicenseRefresh";
              }
              else if ( *((_DWORD *)this + 46) == 8 )
              {
                v3 = "ClientEventFired";
              }
            }
          }
        }
      }
    }
  }
  v8 = *((_DWORD *)this + 47);
  if ( v8 )
  {
    if ( --v8 )
    {
      if ( v8 == 1 )
        v6 = "Skipped";
    }
    else
    {
      v6 = "Disabled";
    }
  }
  else
  {
    v6 = "Enabled";
  }
  if ( !*((_BYTE *)this + 98) || a3 )
  {
    if ( (unsigned int)CallbackContext > 4 && tlgKeywordOn((__int64)&CallbackContext, 0x400000000000LL) )
    {
      v17 = a2;
      v14 = (char *)this + 168;
      v16[0] = v13;
      v15 = v12;
      v18 = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned int)&unk_1801A7BF6,
        v10,
        v11,
        (__int64)&v18,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)v16,
        (__int64)&v17);
    }
    *((_BYTE *)this + 98) = 1;
  }
  else if ( (unsigned int)CallbackContext > 4 )
  {
    v17 = a2;
    v16[0] = (char *)this + 168;
    v14 = v6;
    v15 = v3;
    v18 = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v8,
      (unsigned int)&unk_1801A7CDD,
      a3,
      v7,
      (__int64)&v18,
      (__int64)v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v17);
  }
}
