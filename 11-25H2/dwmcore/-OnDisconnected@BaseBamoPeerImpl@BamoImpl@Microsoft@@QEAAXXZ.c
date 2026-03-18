/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180279720
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1802799F4 (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF6D4 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801CF974 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x18027983C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x180279E10 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  _QWORD *i; // rsi
  unsigned int j; // esi
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  _BYTE v11[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct Microsoft::BamoImpl::BamoStubImpl *v13; // [rsp+70h] [rbp+10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+18h] BYREF

  v10 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v9 = 0LL;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
    (_DWORD)this,
    0,
    (unsigned int)&v9,
    (unsigned int)&v13,
    (__int64)&v14);
  for ( i = (_QWORD *)v9; i != *((_QWORD **)&v9 + 1); ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v13);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  for ( j = 0; j < (unsigned __int64)((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 5); ++j )
  {
    v4 = *((_QWORD *)this + 9) + 32LL * j;
    v5 = *(__int64 (__fastcall **)(_QWORD))(v4 + 16);
    if ( v5 )
    {
      v6 = v5(*(_QWORD *)(v4 + 8));
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFB,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
          (const char *)(unsigned int)v6,
          v8);
    }
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v11);
  v7 = *((_QWORD *)this + 9);
  if ( v7 != *((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v7;
  if ( (_QWORD)v9 )
    std::_Deallocate<16,0>((_QWORD *)v9, (v10 - v9) & 0xFFFFFFFFFFFFFFF8uLL);
}
