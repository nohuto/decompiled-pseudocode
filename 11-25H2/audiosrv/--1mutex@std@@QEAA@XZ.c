/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800CC50C
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$14 @ 0x180164D57 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$14.c)
 *     _CXvmPowerReferenceManager::CXvmPowerReferenceManager_::_1_::dtor$0 @ 0x180167242 (_CXvmPowerReferenceManager--CXvmPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
