/*
 * XREFs of SepRmDbInitialization @ 0x140C3B028
 * Callers:
 *     SepInitializationPhase0 @ 0x140C39CC4 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepBuildDefaultCap @ 0x140795238 (SepBuildDefaultCap.c)
 *     SepCreateLogonSessionTrack @ 0x140A22BDC (SepCreateLogonSessionTrack.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  byte_140F04684 = 1;
  SepRmCapTableLock = 0LL;
  SepRmEnforceCap = 0;
  if ( (int)SepBuildDefaultCap() < 0 )
    return 0;
  dword_140FD8F0C = 1;
  return 1;
}
