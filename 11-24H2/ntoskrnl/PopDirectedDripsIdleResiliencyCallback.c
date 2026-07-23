/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x140A1BF04
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopQueueDirectedDripsWork @ 0x1404682D4 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C (PopDirectedDripsUmMarkTestDevices.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  ULONG HandleAttributes; // eax
  ULONG v5; // ett
  char *v6; // rax
  __int64 v7; // rcx
  signed __int8 v8; // cf
  char *v9; // rbx
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
    v6 = (char *)KeAbPreAcquire((__int64)&qword_140F0E060, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0E060, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140F0E060, v6, (__int64)&qword_140F0E060);
    if ( v9 )
      v9[10] = 1;
    byte_140F0E069 = a2;
    dword_140F0E06C = a1;
    byte_140F0E070 = 0;
    PopQueueDirectedDripsWork(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F0E060, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F0E060);
    KeAbPostRelease((ULONG_PTR)&qword_140F0E060);
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
