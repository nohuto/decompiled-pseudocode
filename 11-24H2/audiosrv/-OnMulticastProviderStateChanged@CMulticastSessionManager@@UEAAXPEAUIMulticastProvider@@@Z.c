/*
 * XREFs of ?OnMulticastProviderStateChanged@CMulticastSessionManager@@UEAAXPEAUIMulticastProvider@@@Z @ 0x1801008A0
 * Callers:
 *     _lambda_01a1570c2758217eaf2f5213a51197c0_::operator() @ 0x1800FF948 (_lambda_01a1570c2758217eaf2f5213a51197c0_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CMulticastSessionManager::OnMulticastProviderStateChanged(
        CMulticastSessionManager *this,
        struct IMulticastProvider *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = RtlPublishWnfStateData(WNF_AUDC_MULTICASTING_STATE_CHANGED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      176LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)v2);
}
