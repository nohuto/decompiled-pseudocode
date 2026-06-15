/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800CE768
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800CC9C0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800CF868 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180103914 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

void __fastcall CSerialWorkQueue::Shutdown(CSerialWorkQueue *this)
{
  std::_Mutex_base::lock((CSerialWorkQueue *)((char *)this + 88));
  *((_BYTE *)this + 80) = 1;
  _Mtx_unlock((CSerialWorkQueue *)((char *)this + 88));
}
