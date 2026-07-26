/*
 * XREFs of ??1NdisWdfIdle@@QEAA@XZ @ 0x14008E2F0
 * Callers:
 *     ?reset@?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@Z @ 0x14006CD70 (-reset@-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@.c)
 * Callees:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140074A30 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 */

void __fastcall NdisWdfIdle::~NdisWdfIdle(NdisWdfIdle *this)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rcx

  m_impl = this->m_engine.m_impl;
  if ( m_impl )
    SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(m_impl, 1u);
}
