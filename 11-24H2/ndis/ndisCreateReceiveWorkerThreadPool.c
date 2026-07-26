/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1400C1BE0
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x14005B860 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ndisCreateThread @ 0x1400C1CC4 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C1E10 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rcx
  ULONG ActiveProcessorCount; // esi
  __int64 i; // rdi

  Thread = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      13,
      (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0LL; (unsigned int)i < ActiveProcessorCount; i = (unsigned int)(i + 1) )
  {
    Thread = ndisCreateThread(v1, (unsigned int)i, (unsigned int)dword_14011B4C8, (char *)qword_14011B508 + 8 * i);
    if ( Thread < 0 )
    {
      ndisKillReceiveWorkerThreadPool();
      return (unsigned int)Thread;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      14,
      (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids);
  return (unsigned int)Thread;
}
