/*
 * XREFs of ?wait@?$slim_event_t@$0A@@wil@@QEAA_NK@Z @ 0x14004438C
 * Callers:
 *     ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x140044348 (-Wait@CRtwqAsyncCallback@@QEAAJK@Z.c)
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z @ 0x140054EC0 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?WaitForSignal@?$slim_event_t@$0A@@wil@@AEAA_NK@Z @ 0x140044420 (-WaitForSignal@-$slim_event_t@$0A@@wil@@AEAA_NK@Z.c)
 */

char __fastcall wil::slim_event_t<0>::wait(volatile __int32 *a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+48h] [rbp+20h] BYREF

  UnbiasedTime = 0LL;
  QueryUnbiasedInterruptTime(&UnbiasedTime);
  v2 = 0LL;
  while ( !_InterlockedExchange(a1, 0) )
  {
    if ( v2 >= 0x3E8 || !(unsigned __int8)wil::slim_event_t<0>::WaitForSignal(a1, (unsigned int)(1000 - v2)) )
      return 0;
    v4 = 0LL;
    QueryUnbiasedInterruptTime(&v4);
    v2 = (v4 - UnbiasedTime) / 0x2710;
  }
  return 1;
}
