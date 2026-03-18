/*
 * XREFs of SepRmDbInitialization @ 0x140C29D48
 * Callers:
 *     SepInitializationPhase0 @ 0x140C289F4 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepBuildDefaultCap @ 0x140785E68 (SepBuildDefaultCap.c)
 *     SepCreateLogonSessionTrack @ 0x140A1862C (SepCreateLogonSessionTrack.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char SepRmDbInitialization()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdi
  void *Pool2; // rax

  v0 = &SepRmDbLock;
  v1 = 4LL;
  do
  {
    ExInitializeResourceLite2(v0, -1);
    v0 += 13;
    --v1;
  }
  while ( v1 );
  ExInitializeResourceLite2(&SepRmGlobalSaclLock, -1);
  SepRmNotifyMutex.Count = 1;
  SepRmNotifyMutex.Event.Header.WaitListHead.Blink = &SepRmNotifyMutex.Event.Header.WaitListHead;
  SepRmNotifyMutex.Event.Header.WaitListHead.Flink = &SepRmNotifyMutex.Event.Header.WaitListHead;
  SepRmNotifyMutex.Owner = 0LL;
  SepRmNotifyMutex.Contention = 0;
  LOWORD(SepRmNotifyMutex.Event.Header.Lock) = 1;
  SepRmNotifyMutex.Event.Header.Size = 6;
  SepRmNotifyMutex.Event.Header.SignalState = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x80uLL, 0x734C6553uLL);
  SepLogonSessions = (__int64)Pool2;
  if ( !Pool2 )
    return 0;
  memset_0(Pool2, 0, 0x80uLL);
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId) < 0 )
    return 0;
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId) < 0 )
    return 0;
  SepRmAuditingEnabled = 0;
  memset_0(SeAuditingState, 0, 0x78uLL);
  byte_140F042A4 = 1;
  SepRmCapTableLock = 0LL;
  SepRmEnforceCap = 0;
  if ( (int)SepBuildDefaultCap() < 0 )
    return 0;
  dword_140FD8F3C = 1;
  return 1;
}
