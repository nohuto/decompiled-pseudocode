/*
 * XREFs of ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840
 * Callers:
 *     AudioSessionDestroy @ 0x180077D20 (AudioSessionDestroy.c)
 *     AudioSessionGetState @ 0x180078BD0 (AudioSessionGetState.c)
 *     AudioSessionManagerGetAudioSessions @ 0x180079CD0 (AudioSessionManagerGetAudioSessions.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x18007CBC0 (s_rtgGetDefaultAudioEndpoint.c)
 *     s_tsSessionGetAudioProtocol @ 0x180080400 (s_tsSessionGetAudioProtocol.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 *     AudioVolumeGetMasterVolumeLevel @ 0x1800887A0 (AudioVolumeGetMasterVolumeLevel.c)
 *     AudioVolumeGetMute @ 0x180088A00 (AudioVolumeGetMute.c)
 *     ??R?$default_delete@V?$CWatchdogTimer@$00@@@std@@QEBAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800ADA30 (--R-$default_delete@V-$CWatchdogTimer@$00@@@std@@QEBAXPEAV-$CWatchdogTimer@$00@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWatchdogTimer<1>::~CWatchdogTimer<1>(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx
  __int64 result; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(struct _TP_TIMER **)a1;
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)a1, 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  result = (unsigned int)(*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48));
  if ( (unsigned int)result >= 3 )
  {
    v4 = *(_DWORD **)(a1 + 8);
    if ( *v4 > 2u )
    {
      result = tlgKeywordOn(v4, 0x400000000001LL);
      if ( (_BYTE)result )
      {
        v8 = *(_DWORD *)(a1 + 16);
        v9 = *(const WCHAR **)(a1 + 24);
        result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                   v5,
                   byte_1801A8B66,
                   v6,
                   v7,
                   &v9,
                   (__int64)&v8);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 41) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 8LL))(*(_QWORD *)(a1 + 32));
  return result;
}
