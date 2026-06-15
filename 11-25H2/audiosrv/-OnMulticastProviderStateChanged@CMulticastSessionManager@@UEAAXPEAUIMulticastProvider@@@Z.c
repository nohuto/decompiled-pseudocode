/*
 * XREFs of ?OnMulticastProviderStateChanged@CMulticastSessionManager@@UEAAXPEAUIMulticastProvider@@@Z @ 0x1800FD470
 * Callers:
 *     _lambda_db7e7b73629c8ec0784d00519493d49e_::operator() @ 0x1800FC588 (_lambda_db7e7b73629c8ec0784d00519493d49e_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
      194LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)v2);
}
