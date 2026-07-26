/*
 * XREFs of ?UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z @ 0x1400891A0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140074A30 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 */

void __fastcall NdisWdfIdle::UpdateIdleCondition(NdisWdfIdle *this, enum _NDIS_IDLE_CONDITION a2)
{
  int v2; // edx
  int v3; // edx
  unsigned __int16 v4; // dx

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 1 )
          return;
        v4 = 7;
      }
      else
      {
        v4 = 8;
      }
    }
    else
    {
      v4 = 5;
    }
  }
  else
  {
    v4 = 6;
  }
  SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(this->m_engine.m_impl, v4);
}
