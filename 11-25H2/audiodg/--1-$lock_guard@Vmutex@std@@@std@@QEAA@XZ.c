/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x140043634
 * Callers:
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x140091C3F (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
