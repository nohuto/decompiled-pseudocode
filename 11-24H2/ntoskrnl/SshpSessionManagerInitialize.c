/*
 * XREFs of SshpSessionManagerInitialize @ 0x140C364B0
 * Callers:
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140767784 (SshpSessionManagerTraceSystemStart.c)
 *     CmSiRWLockInitialize @ 0x140AB8200 (CmSiRWLockInitialize.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize(&SshpSessionManagerLock);
  memset_0(&SshpSessionManagerContext, 0, 0x490uLL);
  stru_140F060B0.Header.Size = 6;
  qword_140F06050 = (__int64)SshpSessionManagerControlSessionCallback;
  qword_140F06080 = (__int64)SshpSessionManagerFlushControlEventBufferWorker;
  qword_140F06088 = 0LL;
  qword_140F06070 = 0LL;
  dword_140F06090 = 0;
  LOWORD(stru_140F060B0.Header.Lock) = 0;
  stru_140F060B0.Header.WaitListHead.Blink = &stru_140F060B0.Header.WaitListHead;
  stru_140F060B0.Header.WaitListHead.Flink = &stru_140F060B0.Header.WaitListHead;
  stru_140F060B0.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
