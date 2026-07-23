/*
 * XREFs of SshpSessionManagerInitialize @ 0x140C230A4
 * Callers:
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140757C4C (SshpSessionManagerTraceSystemStart.c)
 *     CmSiRWLockInitialize @ 0x140ABABF0 (CmSiRWLockInitialize.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize(&SshpSessionManagerLock);
  memset_0(&SshpSessionManagerContext, 0, 0x490uLL);
  stru_140F059B0.Header.Size = 6;
  qword_140F05950 = (__int64)SshpSessionManagerControlSessionCallback;
  qword_140F05980 = (__int64)SshpSessionManagerFlushControlEventBufferWorker;
  qword_140F05988 = 0LL;
  qword_140F05970 = 0LL;
  dword_140F05990 = 0;
  LOWORD(stru_140F059B0.Header.Lock) = 0;
  stru_140F059B0.Header.WaitListHead.Blink = &stru_140F059B0.Header.WaitListHead;
  stru_140F059B0.Header.WaitListHead.Flink = &stru_140F059B0.Header.WaitListHead;
  stru_140F059B0.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
