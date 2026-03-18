/*
 * XREFs of PopDirectedDripsNotify @ 0x140A69400
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackHandler @ 0x14075FAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopAcquireTransitionLock @ 0x140A928AC (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA56F0 (PopReleaseTransitionLock.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB7798 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046C80C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046D6D0 (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x14046D734 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x14048CC5C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsSendSessionData @ 0x140A69608 (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x140A829E8 (PopDirectedDripsQueryMitigationStatus.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x140AB66B0 (PopDirectedDripsDiagNotifySessionStart.c)
 */

__int64 __fastcall PopDirectedDripsNotify(int a1, char *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // ett
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  _QWORD *v11; // rax
  signed __int8 v12; // cf
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  ULONG HandleAttributes; // eax
  __int64 v21; // rcx
  ULONG v22; // ett
  int v23; // ecx
  int v24; // ecx
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  int v29; // ett
  unsigned int v30; // [rsp+40h] [rbp+18h] BYREF

  v30 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) == 0 )
    return result;
  v6 = 0;
  if ( a1 > 5 )
  {
    v14 = (unsigned int)(a1 - 6);
    if ( !(_DWORD)v14 )
      return PopDirectedDripsEngage(v14, *a2, v4);
    v23 = v14 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
          return result;
        v25 = KeAbPreAcquire((__int64)&qword_140F0DDC0, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0DDC0, 0LL);
        v26 = v25;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(&qword_140F0DDC0, (__int64)v25, (__int64)&qword_140F0DDC0);
        if ( v26 )
          *((_BYTE *)v26 + 10) = 1;
        if ( !--dword_140F0DE00 )
          PopDirectedDripsClearDisengageReason(1);
      }
      else
      {
        v27 = KeAbPreAcquire((__int64)&qword_140F0DDC0, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0DDC0, 0LL);
        v28 = v27;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(&qword_140F0DDC0, (__int64)v27, (__int64)&qword_140F0DDC0);
        if ( v28 )
          *((_BYTE *)v28 + 10) = 1;
        if ( ++dword_140F0DE00 == 1 )
          PopDirectedDripsSetDisengageReason(1);
      }
      goto LABEL_15;
    }
    _m_prefetchw(&PopDirectedDripsState);
    LODWORD(result) = PopDirectedDripsState.HandleAttributes;
    do
    {
      v29 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&PopDirectedDripsState,
                               result,
                               result);
    }
    while ( v29 != (_DWORD)result );
    if ( (result & 0x800) != 0 )
      return PopDirectedDripsNotifyAppsAndServices((__int64)&PopDirectedDripsState, dword_140F0DD58, 0);
  }
  else
  {
    if ( a1 == 5 )
    {
      v6 = 0x2000;
      goto LABEL_10;
    }
    if ( a1 )
    {
      v7 = a1 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
          {
LABEL_10:
            v10 = v6 | 0x1000;
            v11 = KeAbPreAcquire((__int64)&qword_140F0DDC0, 0LL);
            v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0DDC0, 0LL);
            v13 = v11;
            if ( v12 )
              ExfAcquirePushLockExclusiveEx(&qword_140F0DDC0, (__int64)v11, (__int64)&qword_140F0DDC0);
            if ( v13 )
              *((_BYTE *)v13 + 10) = 1;
            if ( qword_140F0DF48 == *(_QWORD *)a2 )
            {
              if ( dword_140F0DF50 )
              {
                _m_prefetchw(&PopDirectedDripsState);
                HandleAttributes = PopDirectedDripsState.HandleAttributes;
                do
                {
                  v21 = v10 | HandleAttributes;
                  v22 = HandleAttributes;
                  HandleAttributes = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&PopDirectedDripsState,
                                       v21,
                                       HandleAttributes);
                }
                while ( v22 != HandleAttributes );
                if ( (v10 & HandleAttributes) != v10 || dword_140F0DD54 )
                  PopQueueDirectedDripsWork(v21, 0x800uLL);
              }
            }
LABEL_15:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0DDC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0DDC0);
            return KeAbPostRelease((ULONG_PTR)&qword_140F0DDC0);
          }
          if ( v9 != 1 )
            return result;
        }
        dword_140F0DD54 = 0;
        return result;
      }
      v15 = *(_QWORD *)a2;
      v16 = KeAbPreAcquire((__int64)&qword_140F0DDC0, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0DDC0, 0LL);
      v17 = v16;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&qword_140F0DDC0, (__int64)v16, (__int64)&qword_140F0DDC0);
      if ( v17 )
        *((_BYTE *)v17 + 10) = 1;
      *(_DWORD *)(v15 + 220) = dword_140F0DDB0;
      qword_140F0DF48 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0DDC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0DDC0);
      KeAbPostRelease((ULONG_PTR)&qword_140F0DDC0);
      return PopDirectedDripsSendSessionData();
    }
    else
    {
      dword_140F0DDB0 = 0;
      v18 = KeAbPreAcquire((__int64)&qword_140F0DDC0, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0DDC0, 0LL);
      v19 = v18;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&qword_140F0DDC0, (__int64)v18, (__int64)&qword_140F0DDC0);
      if ( v19 )
        *((_BYTE *)v19 + 10) = 1;
      qword_140F0DF48 = *(_QWORD *)a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0DDC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0DDC0);
      KeAbPostRelease((ULONG_PTR)&qword_140F0DDC0);
      PopDirectedDripsQueryMitigationStatus(&v30, 0LL, 0LL);
      return PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v30);
    }
  }
  return result;
}
