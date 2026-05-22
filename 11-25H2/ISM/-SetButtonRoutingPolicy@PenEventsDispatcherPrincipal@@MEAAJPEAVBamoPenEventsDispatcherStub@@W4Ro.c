/*
 * XREFs of ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180190510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180063F10 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetButtonRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801904A8 (-SetButtonRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::SetButtonRoutingPolicy(__int64 a1, __int64 a2, int a3)
{
  PenEventsDispatcherPrincipal *v5; // rcx
  __int64 v6; // rdx
  char ButtonEventsSupportedFlag; // si
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::PenEvents::SetButtonRoutingPolicy(a3);
  PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag((PenEventsDispatcherPrincipal *)a1);
  *(_DWORD *)(a1 + 200) = a3;
  ButtonEventsSupportedFlag = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(v5);
  if ( (_BYTE)v6 != ButtonEventsSupportedFlag )
  {
    v8 = *(_QWORD **)(a1 + 72);
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
    {
      LOBYTE(v6) = ButtonEventsSupportedFlag;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 48LL))(i[3] + 8LL, v6);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevents"
                   "dispatcherprincipal.cpp",
          (const char *)(unsigned int)v10);
    }
  }
  return 0LL;
}
