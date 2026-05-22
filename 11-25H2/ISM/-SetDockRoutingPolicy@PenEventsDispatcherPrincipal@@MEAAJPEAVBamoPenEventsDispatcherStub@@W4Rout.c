/*
 * XREFs of ?SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180190710
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDockRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801906A8 (-SetDockRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::SetDockRoutingPolicy(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  int v6; // eax
  bool v7; // si
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::PenEvents::SetDockRoutingPolicy(a3);
  v6 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 204) = a3;
  v7 = a3 != 0;
  if ( (v6 != 0) != (a3 != 0) )
  {
    v8 = *(_QWORD **)(a1 + 72);
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
    {
      LOBYTE(v5) = v7;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 72LL))(i[3] + 8LL, v5);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevents"
                   "dispatcherprincipal.cpp",
          (const char *)(unsigned int)v10);
    }
  }
  return 0LL;
}
