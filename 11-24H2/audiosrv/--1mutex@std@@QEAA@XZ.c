/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800CBC0C
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$14 @ 0x18016E262 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$14.c)
 *     _CXvmPowerReferenceManager::CXvmPowerReferenceManager_::_1_::dtor$0 @ 0x1801706B7 (_CXvmPowerReferenceManager--CXvmPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
