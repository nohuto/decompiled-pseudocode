/*
 * XREFs of _lambda_ed8d35aab00ff38f46f7a668e5ef32e9_::operator() @ 0x14014E1A4
 * Callers:
 *     _lambda_ed8d35aab00ff38f46f7a668e5ef32e9_::_lambda_invoker_cdecl_ @ 0x14014DFC0 (_lambda_ed8d35aab00ff38f46f7a668e5ef32e9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_ed8d35aab00ff38f46f7a668e5ef32e9_::operator()(__int64 a1, Ndis::BindState *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  int v4; // edx

  Miniport = a2->Miniport;
  Ndis::BindEngine::BeginPolicyUpdates(&a2->Miniport->BindEngine);
  if ( Ndis::BindState::SetBinding(
         a2,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_140126C63 >= 4u
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0x1Cu,
      0xFu,
      (struct _GUID *)&WPP_52ad577415a234c4c4896f4adb295a9c_Traceguids,
      0LL,
      0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine);
}
