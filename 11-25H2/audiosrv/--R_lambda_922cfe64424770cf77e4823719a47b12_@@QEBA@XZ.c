/*
 * XREFs of ??R_lambda_922cfe64424770cf77e4823719a47b12_@@QEBA@XZ @ 0x1800B0D78
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800B1DB0 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall _lambda_922cfe64424770cf77e4823719a47b12_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  DWORD CurrentProcessId; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  CurrentProcessId = GetCurrentProcessId();
  NdrClientCall3(
    (MIDL_STUBLESS_PROXY_INFO *)&AEBSvc_ProxyInfo,
    0,
    0LL,
    **(_QWORD **)a1,
    1LL,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    CurrentProcessId,
    v6,
    v3,
    v2);
  return 0LL;
}
