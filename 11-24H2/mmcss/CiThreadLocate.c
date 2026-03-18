/*
 * XREFs of CiThreadLocate @ 0x140003AB0
 * Callers:
 *     CiThreadNotification @ 0x140003A60 (CiThreadNotification.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CiThreadLocate(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v2 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v3 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      goto LABEL_12;
    v3 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  }
  if ( v3 )
  {
    while ( 1 )
    {
      if ( a1 < *(_QWORD *)(v3 + 56) )
      {
        v4 = *(_QWORD *)v3;
        if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v4 )
          goto LABEL_14;
      }
      else
      {
        if ( a1 <= *(_QWORD *)(v3 + 56) )
          goto LABEL_11;
        v4 = *(_QWORD *)(v3 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v4 )
        {
LABEL_14:
          v3 ^= v4;
          goto LABEL_10;
        }
      }
      v3 = v4;
LABEL_10:
      if ( !v3 )
      {
LABEL_11:
        if ( v3 )
        {
          v2 = v3 - 40;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 - 40 + 32)) <= 1 )
            __fastfail(0xEu);
        }
        break;
      }
    }
  }
LABEL_12:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return v2;
}
