/*
 * XREFs of ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000ED60
 * Callers:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000F6C0 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@AEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@AEA_K@Z @ 0x14000EB14 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAAXXZ @ 0x14000EE6C (--$_Emplace_back@$$V@-$_Uninitialized_backout_al@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@s.c)
 *     ??1?$_Tidy_guard@V?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x14000F024 (--1-$_Tidy_guard@V-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Construct_n<>(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-20h]
  _QWORD *v7; // [rsp+30h] [rbp-18h]
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
  {
    v2 = a2;
    if ( a2 > 0x38E38E38E38E38ELL )
      std::_Xlength_error("vector too long");
    v8 = a2;
    v4 = std::_Allocate_at_least_helper<std::allocator<DISPLAYCONFIG_PATH_INFO>>((__int64)a1, &v8);
    *a1 = v4;
    v5 = v4;
    v6 = v4;
    v7 = a1;
    a1[2] = &v4[9 * v2];
    do
    {
      std::_Uninitialized_backout_al<std::allocator<DISPLAYCONFIG_PATH_INFO>>::_Emplace_back<>(&v5);
      --v2;
    }
    while ( v2 );
    v8 = 0LL;
    a1[1] = v6;
    std::_Tidy_guard<std::vector<DISPLAYCONFIG_PATH_INFO>>::~_Tidy_guard<std::vector<DISPLAYCONFIG_PATH_INFO>>(&v8);
  }
}
