/*
 * XREFs of PspJobNotificationWorker @ 0x140A3AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspSendReliableJobNotification @ 0x140861974 (PspSendReliableJobNotification.c)
 */

signed __int64 PspJobNotificationWorker()
{
  WNF_STATE_NAME *v0; // rbx
  WNF_STATE_NAME *v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi

  do
  {
    v0 = (WNF_STATE_NAME *)_InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = (WNF_STATE_NAME *)v0[150];
      _m_prefetchw(&v0[194]);
      v2 = _InterlockedAnd((volatile signed __int32 *)&v0[194], 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 139, 0LL, 0, 0LL, 0LL, 0, 0);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        PspLockJobExclusive((__int64)v0, (__int64)CurrentThread);
        if ( *(_QWORD *)&v0[69] && (v0[138].Data[0] & 0x1000) != 0 )
          PspSendReliableJobNotification(v0, 0xCu);
        PspUnlockJob((__int64)v0, (__int64)CurrentThread);
      }
      ObfDereferenceObjectWithTag(v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != (WNF_STATE_NAME *)-1LL );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
