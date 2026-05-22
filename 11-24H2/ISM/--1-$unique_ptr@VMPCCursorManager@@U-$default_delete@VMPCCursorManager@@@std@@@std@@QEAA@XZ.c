/*
 * XREFs of ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x1800B9894
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x1801D21EC (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 * Callees:
 *     ??R?$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z @ 0x1800B9AFC (--R-$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MPCCursorManager>::~unique_ptr<MPCCursorManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCCursorManager>::operator()();
  return result;
}
