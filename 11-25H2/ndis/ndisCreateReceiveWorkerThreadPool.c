/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1400C8E10
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140067B00 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ndisCreateThread @ 0x1400C8EF4 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C9040 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rcx
  ULONG ActiveProcessorCount; // esi
  __int64 i; // rdi

  Thread = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      13,
      (struct _GUID *)&WPP_2fb632d9e69632cc5880b19a4ac60799_Traceguids);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0LL; (unsigned int)i < ActiveProcessorCount; i = (unsigned int)(i + 1) )
  {
    Thread = ndisCreateThread(v1, (unsigned int)i, (unsigned int)dword_140125508, (char *)qword_140125548 + 8 * i);
    if ( Thread < 0 )
    {
      ndisKillReceiveWorkerThreadPool();
      return (unsigned int)Thread;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      14,
      (struct _GUID *)&WPP_2fb632d9e69632cc5880b19a4ac60799_Traceguids);
  return (unsigned int)Thread;
}
