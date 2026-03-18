/*
 * XREFs of SshpSessionManagerInitialize @ 0x140C34370
 * Callers:
 *     SshInitialize @ 0x140C341AC (SshInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SshpSessionManagerTraceSystemStart @ 0x14076760C (SshpSessionManagerTraceSystemStart.c)
 *     CmSiRWLockInitialize @ 0x140ABD190 (CmSiRWLockInitialize.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&SshpSessionManagerLock);
  memset_0(&SshpSessionManagerContext, 0, 0x490uLL);
  stru_140F05DD0.Header.Size = 6;
  qword_140F05D70 = (__int64)SshpSessionManagerControlSessionCallback;
  qword_140F05DA0 = (__int64)SshpSessionManagerFlushControlEventBufferWorker;
  qword_140F05DA8 = 0LL;
  qword_140F05D90 = 0LL;
  dword_140F05DB0 = 0;
  LOWORD(stru_140F05DD0.Header.Lock) = 0;
  stru_140F05DD0.Header.WaitListHead.Blink = &stru_140F05DD0.Header.WaitListHead;
  stru_140F05DD0.Header.WaitListHead.Flink = &stru_140F05DD0.Header.WaitListHead;
  stru_140F05DD0.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
