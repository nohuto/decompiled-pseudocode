/*
 * XREFs of PspJobNotificationWorker @ 0x140A416F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PspLockJobExclusive @ 0x1408DC060 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspSendReliableJobNotification @ 0x140A4F98C (PspSendReliableJobNotification.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 1200);
      _m_prefetchw((const void *)(v0 + 1552));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1552), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 1112, 0LL);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        PspLockJobExclusive(v0, (__int64)CurrentThread);
        if ( *(_QWORD *)(v0 + 552) && (*(_DWORD *)(v0 + 1104) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0);
        PspUnlockJob(v0, (__int64)CurrentThread);
      }
      ObfDereferenceObjectWithTag((PVOID)v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
