/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800CF858
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800CC0C0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800D092C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

void __fastcall CSerialWorkQueue::Shutdown(CSerialWorkQueue *this)
{
  std::_Mutex_base::lock((CSerialWorkQueue *)((char *)this + 88));
  *((_BYTE *)this + 80) = 1;
  _Mtx_unlock((CSerialWorkQueue *)((char *)this + 88));
}
