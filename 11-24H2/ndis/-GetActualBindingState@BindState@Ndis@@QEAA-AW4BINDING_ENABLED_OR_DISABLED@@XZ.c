/*
 * XREFs of ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x140155620
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x140096AE0 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140096DDC (ndisEtwCaptureMiniportProtocolList.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140155F90 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::BindState::GetActualBindingState(Ndis::BindState *this)
{
  bool result; // al

  result = 0;
  if ( !this->PretendBindingActive )
    return this->m_bindContext.m_numElements == 0;
  return result;
}
