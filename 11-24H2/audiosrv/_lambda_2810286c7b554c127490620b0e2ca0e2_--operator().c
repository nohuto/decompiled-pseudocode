/*
 * XREFs of _lambda_2810286c7b554c127490620b0e2ca0e2_::operator() @ 0x18002032C
 * Callers:
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180020040 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall lambda_2810286c7b554c127490620b0e2ca0e2_::operator()(__int64 a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rax
  int Pointer; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = **(_QWORD **)(a1 + 8);
  v2 = *(_QWORD **)a1;
  v6 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 7u, 0LL, *v2, v1, &v6).Pointer;
  v4 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x365,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)Pointer);
  return v4;
}
