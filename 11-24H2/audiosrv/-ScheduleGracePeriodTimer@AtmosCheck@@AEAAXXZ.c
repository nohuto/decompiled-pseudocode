/*
 * XREFs of ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015EB20
 * Callers:
 *     _lambda_383ae521043a10c2e2d9282b6295b11b_::operator() @ 0x18014FEC4 (_lambda_383ae521043a10c2e2d9282b6295b11b_--operator().c)
 *     _lambda_4accf571eb38f7e0aa8a7d61bf2f02b1_::operator() @ 0x18014FFE8 (_lambda_4accf571eb38f7e0aa8a7d61bf2f02b1_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005A4B0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006ADFC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_18006ADFC.c)
 */

void __fastcall AtmosCheck::ScheduleGracePeriodTimer(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int pvData; // [rsp+70h] [rbp+30h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+40h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  if ( pv[217] )
  {
    if ( !pv[216] && !*((_QWORD *)pv + 26) && pv[265] && pv[264] )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticGracePeriodExpiredFired, pv, 0LL);
      *((_QWORD *)pv + 26) = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v7 = 0;
        pcbData = 4;
        pvData = 0;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy\\Spatial",
                L"SpatialAudioLicenseCheckStartDelay",
                0x18u,
                0LL,
                &pvData,
                &pcbData)
          && pvData <= 0xDBBA0 )
        {
          v7 = pvData;
        }
        if ( !v7 )
          v7 = 5;
        if ( (unsigned int)CallbackContext > 5 )
        {
          pvData = v7;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)&CallbackContext,
            byte_1801B2CA8,
            v8,
            v9,
            (__int64)&pvData);
        }
        pftDueTime = (struct _FILETIME)(-10000LL * v7);
        SetThreadpoolTimer(*((PTP_TIMER *)pv + 26), &pftDueTime, 0, 0);
        if ( (unsigned int)CallbackContext > 5 )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            v10,
            byte_1801B2FDC);
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( (unsigned int)CallbackContext > 5 )
        {
          pvData = LastError;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)&CallbackContext,
            byte_1801B30B1,
            v5,
            v6,
            (__int64)&pvData);
        }
      }
    }
  }
  else
  {
    pv[216] = 1;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
