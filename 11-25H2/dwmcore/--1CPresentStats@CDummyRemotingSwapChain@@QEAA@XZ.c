/*
 * XREFs of ??1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ @ 0x1802CFA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDummyRemotingSwapChain::CPresentStats::~CPresentStats(void **this)
{
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this);
}
