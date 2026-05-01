/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2dbad27d1cbd48c28fba7ea818d34463___::Run @ 0x180148BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x180148C34 (-BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2dbad27d1cbd48c28fba7ea818d34463___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  GameDVRTraceProvider::BroadcastDVRComponent_IsGameDVREnabled_Changed(*(_BYTE *)(v1 + 444));
  v3 = *(_QWORD *)(v1 + 256);
  if ( v3 )
  {
    LOBYTE(v2) = *(_BYTE *)(v1 + 444);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 72LL))(v3, v2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF0A,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v4);
  }
}
