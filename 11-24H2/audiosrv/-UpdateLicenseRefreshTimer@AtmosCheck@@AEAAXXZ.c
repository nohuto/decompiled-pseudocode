/*
 * XREFs of ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18006F178
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x18007069C (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180151B38 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015F104 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005A4B0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x180150B4C (-GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ.c)
 */

void __fastcall AtmosCheck::UpdateLicenseRefreshTimer(AtmosCheck *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int LastError; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 NearestLicenseExpiryDate; // rax
  unsigned __int64 v7; // rcx
  struct _TP_TIMER *v8; // rcx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            pv,
                            0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    if ( *((_BYTE *)pv + 217) )
    {
      if ( *((_BYTE *)pv + 216) )
      {
        NearestLicenseExpiryDate = AtmosCheck::GetNearestLicenseExpiryDate(pv);
        if ( NearestLicenseExpiryDate )
        {
          v7 = *((_QWORD *)pv + 29);
          if ( !v7 || NearestLicenseExpiryDate < v7 )
            AtmosCheck::SetExpiryTimer(pv, NearestLicenseExpiryDate);
        }
      }
    }
    else if ( !IsThreadpoolTimerSet(ThreadpoolTimer) )
    {
      pftDueTime.dwHighDateTime = -1;
      v8 = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
      pftDueTime.dwLowDateTime = 1294967296;
      SetThreadpoolTimer(v8, &pftDueTime, 0x5265C00u, 0x7530u);
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)CallbackContext > 5 )
    {
      pftDueTime.dwLowDateTime = LastError;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&CallbackContext,
        byte_1801B3181,
        v4,
        v5,
        (__int64)&pftDueTime);
    }
  }
}
