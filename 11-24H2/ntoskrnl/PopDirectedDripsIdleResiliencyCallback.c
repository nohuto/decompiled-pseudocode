/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x140A27484
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x14046D734 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB7798 (PopDirectedDripsUmMarkTestDevices.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  ULONG HandleAttributes; // eax
  ULONG v5; // ett
  _QWORD *v6; // rax
  __int64 v7; // rcx
  signed __int8 v8; // cf
  _QWORD *v9; // rbx
  unsigned int v10; // ebx

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v5 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v5 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    PopDeepSleepSetDisengageReason(8u);
    v6 = KeAbPreAcquire((__int64)&qword_140F0DDC0, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0DDC0, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140F0DDC0, (__int64)v6, (__int64)&qword_140F0DDC0);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    byte_140F0DDC9 = a2;
    dword_140F0DDCC = a1;
    byte_140F0DDD0 = 0;
    PopQueueDirectedDripsWork(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0DDC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0DDC0);
    KeAbPostRelease((ULONG_PTR)&qword_140F0DDC0);
    v10 = 259;
    if ( a2 )
      PopDirectedDripsUmMarkTestDevices();
  }
  else
  {
    return 0;
  }
  return v10;
}
