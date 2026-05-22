/*
 * XREFs of ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@@Z @ 0x18004289C
 * Callers:
 *     ?OnConnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x180060C60 (-OnConnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputSiteElementProxy@@EEAAJXZ @ 0x1801305C0 (-OnPropertiesRefreshedCallout@BamoInputSiteElementProxy@@EEAAJXZ.c)
 *     ?OnDisconnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x18015B040 (-OnDisconnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043580 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        void (__fastcall ***a3)(_QWORD))
{
  int v5; // esi
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a3 != 0LL ? 3 : 0;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 - 16) + 88LL))(v6 - 16);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v7,
          v9);
    }
  }
  return a1;
}
