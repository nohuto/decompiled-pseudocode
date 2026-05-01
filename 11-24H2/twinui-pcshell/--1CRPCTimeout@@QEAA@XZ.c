/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x18022E314
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$3 @ 0x1806CA530 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$3.c)
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x1806DF5E4 (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator()_::_1_::dtor$6 @ 0x1806E9A22 (__lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
