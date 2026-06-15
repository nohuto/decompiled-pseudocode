/*
 * XREFs of ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x18015600C
 * Callers:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180081980 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18005FAE4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180066B20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::SetExpiryTimer(char *pv, struct _FILETIME a2)
{
  __int64 v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-29h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-21h] BYREF
  __int64 v13; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  __int64 *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  v2 = *((_QWORD *)pv + 29);
  v3 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  pftDueTime = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            pv,
                            0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x7530u);
    *((struct _FILETIME *)pv + 29) = a2;
    if ( v3 )
      LeaveCriticalSection(v3);
    if ( (unsigned int)CallbackContext > 5 )
    {
      v10 = *((_QWORD *)pv + 29);
      v20 = 0;
      v17 = 0;
      v11 = v10;
      v19 = 8;
      v18 = &v11;
      v15 = &v13;
      v16 = 8;
      v13 = v2;
      tlgWriteTransfer_EventWriteTransfer((__int64)&CallbackContext, byte_1801A7B07, 0LL, 0LL, 4u, &v14);
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)CallbackContext > 5 )
    {
      LODWORD(v11) = LastError;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&CallbackContext,
        byte_1801A7A86,
        v8,
        v9,
        (__int64)&v11);
    }
    if ( v3 )
      LeaveCriticalSection(v3);
  }
}
