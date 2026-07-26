/*
 * XREFs of _lambda_062918d3b118b4760965b8092450098c_::operator() @ 0x1401434E4
 * Callers:
 *     _lambda_062918d3b118b4760965b8092450098c_::_lambda_invoker_cdecl_ @ 0x1401432C0 (_lambda_062918d3b118b4760965b8092450098c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_062918d3b118b4760965b8092450098c_::operator()(__int64 a1, Ndis::BindState *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  int v4; // edx

  Miniport = a2->Miniport;
  Ndis::BindEngine::BeginPolicyUpdates(&a2->Miniport->BindEngine);
  if ( Ndis::BindState::SetBinding(
         a2,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_14011CBA3 >= 4u
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0x1Cu,
      0xFu,
      (struct _GUID *)&WPP_e6a3feaccfd03f16d83983c6da9abacd_Traceguids,
      0LL,
      0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine);
}
