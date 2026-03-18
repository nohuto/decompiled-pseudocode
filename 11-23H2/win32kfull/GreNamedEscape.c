/*
 * XREFs of GreNamedEscape @ 0x1C02B2F38
 * Callers:
 *     NtGdiExtEscape @ 0x1C00D09E0 (NtGdiExtEscape.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00D81C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsage @ 0x1C013F7B8 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsage.c)
 *     AtmDrvEscapeRedirector @ 0x1C02A6FF4 (AtmDrvEscapeRedirector.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v12; // rcx
  volatile signed __int32 *CurrentProcessWin32Process; // rax
  volatile signed __int32 *v14; // rdx
  int v15; // r8d
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+40h] [rbp-18h] BYREF
  int v21; // [rsp+44h] [rbp-14h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h] BYREF

  if ( (unsigned int)Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsage() )
  {
    if ( !_wcsicmp(Str1, L"atmlib.dll") )
      return AtmDrvEscapeRedirector(v10, a2, a3, a4, a5, a6);
    if ( !_wcsicmp(Str1, L"atmfd.dll") )
    {
      CurrentProcessWin32Process = (volatile signed __int32 *)PsGetCurrentProcessWin32Process(v12);
      v14 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          LODWORD(v10) = a2 - 9473;
          if ( (unsigned int)(a2 - 9473) <= 0x13 )
          {
            v15 = 1 << v10;
            _m_prefetchw((const void *)(CurrentProcessWin32Process + 74));
            v16 = *((_DWORD *)CurrentProcessWin32Process + 74);
            do
            {
              LODWORD(v10) = v15 | v16;
              v17 = v16;
              v16 = _InterlockedCompareExchange(v14 + 74, v15 | v16, v16);
            }
            while ( v17 != v16 );
            if ( (v16 & v15) == 0 )
            {
              RtlGetCurrentServiceSessionId();
              if ( (unsigned int)dword_1C0354098 > 5 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
                {
                  v20 = v19;
                  v21 = a2;
                  v22 = 0x1000000LL;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    v10,
                    (int)&unk_1C031EA15,
                    v18,
                    v19,
                    (__int64)&v22,
                    (__int64)&v21,
                    (__int64)&v20);
                }
              }
            }
          }
        }
      }
      return AtmDrvEscapeRedirector(v10, a2, a3, a4, a5, a6);
    }
  }
  else if ( !_wcsicmp(Str1, L"atmfd.dll") )
  {
    return AtmDrvEscapeRedirector(v10, a2, a3, a4, a5, a6);
  }
  return 0LL;
}
