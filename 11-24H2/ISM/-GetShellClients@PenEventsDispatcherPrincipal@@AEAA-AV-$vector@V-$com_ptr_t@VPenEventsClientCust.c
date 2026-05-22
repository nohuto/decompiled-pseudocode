/*
 * XREFs of ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18006452C
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1800369FC (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x180064498 (-IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ.c)
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180194D44 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 *     ?NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z @ 0x18019593C (-NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x180064670 (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800647E8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall PenEventsDispatcherPrincipal::GetShellClients(_QWORD *a1, _QWORD *a2)
{
  __int64 **v4; // r12
  __int64 *i; // rdi
  int v6; // r8d
  __int64 v7; // rcx
  unsigned __int64 j; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 *v14; // rbx
  int v15; // [rsp+60h] [rbp+8h]
  _QWORD *v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = (__int64 **)a1[17];
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 4);
    v15 = v6;
    v7 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 4; ++j )
      v7 = 0x100000001B3LL * (*((unsigned __int8 *)&v15 + j) ^ (unsigned __int64)v7);
    v9 = 2 * (v7 & a1[14]);
    v10 = a1[11];
    v11 = *(__int64 **)(v10 + 8 * v9);
    v12 = a1[9];
    if ( v11 == (__int64 *)v12 )
    {
LABEL_10:
      v14 = (__int64 *)a1[9];
    }
    else
    {
      while ( *((_DWORD *)v11 + 4) != v6 )
      {
        if ( v11 == *(__int64 **)(v10 + 8 * v9 + 8) )
          goto LABEL_10;
        v11 = (__int64 *)*v11;
      }
      v14 = v11;
      do
      {
        v12 = *v11;
        if ( v11 == *(__int64 **)(v10 + 8 * v9 + 8) )
          break;
        v11 = (__int64 *)*v11;
      }
      while ( v6 == *(_DWORD *)(v12 + 16) );
    }
    while ( v14 != (__int64 *)v12 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v14[3] + 8) + 128LL))(v14[3] + 8) )
      {
        if ( a2[1] == a2[2] )
        {
          std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
            a2,
            a2[1],
            v14 + 3);
        }
        else
        {
          wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
            a2[1],
            v14[3]);
          a2[1] += 8LL;
        }
      }
      v14 = (__int64 *)*v14;
    }
  }
  return a2;
}
