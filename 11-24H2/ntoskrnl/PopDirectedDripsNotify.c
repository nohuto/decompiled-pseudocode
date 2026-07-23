/*
 * XREFs of PopDirectedDripsNotify @ 0x140A627B0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackHandler @ 0x14075EAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1404673AC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140468270 (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1404682D4 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x14048797C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsSendSessionData @ 0x140A629B8 (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x140A7D508 (PopDirectedDripsQueryMitigationStatus.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x140AB0734 (PopDirectedDripsDiagNotifySessionStart.c)
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
  char *v11; // rax
  signed __int8 v12; // cf
  char *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rsi
  char *v16; // rax
  char *v17; // rdi
  char *v18; // rax
  char *v19; // rdi
  ULONG HandleAttributes; // eax
  __int64 v21; // rcx
  ULONG v22; // ett
  int v23; // ecx
  int v24; // ecx
  char *v25; // rax
  char *v26; // rdi
  char *v27; // rax
  char *v28; // rdi
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
        v25 = (char *)KeAbPreAcquire((__int64)&qword_140F0E060, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0E060, 0LL);
        v26 = v25;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(&qword_140F0E060, v25, (__int64)&qword_140F0E060);
        if ( v26 )
          v26[10] = 1;
        if ( !--dword_140F0E0A0 )
          PopDirectedDripsClearDisengageReason(1);
      }
      else
      {
        v27 = (char *)KeAbPreAcquire((__int64)&qword_140F0E060, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0E060, 0LL);
        v28 = v27;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(&qword_140F0E060, v27, (__int64)&qword_140F0E060);
        if ( v28 )
          v28[10] = 1;
        if ( ++dword_140F0E0A0 == 1 )
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
      return PopDirectedDripsNotifyAppsAndServices((__int64)&PopDirectedDripsState, dword_140F0DFF8, 0);
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
            v11 = (char *)KeAbPreAcquire((__int64)&qword_140F0E060, 0LL);
            v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0E060, 0LL);
            v13 = v11;
            if ( v12 )
              ExfAcquirePushLockExclusiveEx(&qword_140F0E060, v11, (__int64)&qword_140F0E060);
            if ( v13 )
              v13[10] = 1;
            if ( qword_140F0E1E8 == *(_QWORD *)a2 )
            {
              if ( dword_140F0E1F0 )
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
                if ( (v10 & HandleAttributes) != v10 || dword_140F0DFF4 )
                  PopQueueDirectedDripsWork(v21, 0x800uLL);
              }
            }
LABEL_15:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0E060, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0E060);
            return KeAbPostRelease((ULONG_PTR)&qword_140F0E060);
          }
          if ( v9 != 1 )
            return result;
        }
        dword_140F0DFF4 = 0;
        return result;
      }
      v15 = *(_QWORD *)a2;
      v16 = (char *)KeAbPreAcquire((__int64)&qword_140F0E060, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0E060, 0LL);
      v17 = v16;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&qword_140F0E060, v16, (__int64)&qword_140F0E060);
      if ( v17 )
        v17[10] = 1;
      *(_DWORD *)(v15 + 220) = dword_140F0E050;
      qword_140F0E1E8 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0E060, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0E060);
      KeAbPostRelease((ULONG_PTR)&qword_140F0E060);
      return PopDirectedDripsSendSessionData();
    }
    else
    {
      dword_140F0E050 = 0;
      v18 = (char *)KeAbPreAcquire((__int64)&qword_140F0E060, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0E060, 0LL);
      v19 = v18;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&qword_140F0E060, v18, (__int64)&qword_140F0E060);
      if ( v19 )
        v19[10] = 1;
      qword_140F0E1E8 = *(_QWORD *)a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0E060, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0E060);
      KeAbPostRelease((ULONG_PTR)&qword_140F0E060);
      PopDirectedDripsQueryMitigationStatus(&v30, 0LL, 0LL);
      return PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v30);
    }
  }
  return result;
}
