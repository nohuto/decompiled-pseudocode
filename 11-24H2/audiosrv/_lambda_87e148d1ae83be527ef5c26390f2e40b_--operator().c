/*
 * XREFs of _lambda_87e148d1ae83be527ef5c26390f2e40b_::operator() @ 0x1800B4238
 * Callers:
 *     ?CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z @ 0x1800B430C (-CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_87e148d1ae83be527ef5c26390f2e40b_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  DWORD CurrentProcessId; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v6 = **(_DWORD **)(a1 + 16);
  CurrentProcessId = GetCurrentProcessId();
  NdrClientCall3(
    (MIDL_STUBLESS_PROXY_INFO *)&AEBSvc_ProxyInfo,
    0,
    0LL,
    **(_QWORD **)a1,
    1LL,
    **(_QWORD **)(a1 + 8),
    CurrentProcessId,
    v6,
    v3,
    v2);
  return 0LL;
}
