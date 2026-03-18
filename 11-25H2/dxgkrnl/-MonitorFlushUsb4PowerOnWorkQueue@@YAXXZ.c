/*
 * XREFs of ?MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ @ 0x1404009A8
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

void MonitorFlushUsb4PowerOnWorkQueue(void)
{
  _DWORD *i; // rbx
  char v1; // [rsp+40h] [rbp+8h] BYREF

  for ( i = MONITOR_MGR::_pUsb4Manager; ; KeWaitForSingleObject(i + 32, Executive, 0, 0, 0LL) )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v1, (struct DXGFASTMUTEX *)(i + 20));
    if ( !i[18] )
      break;
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v1);
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v1);
}
