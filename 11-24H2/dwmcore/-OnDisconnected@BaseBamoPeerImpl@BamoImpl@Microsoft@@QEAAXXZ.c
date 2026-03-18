/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18026F010
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18026F2E4 (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801A89C4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8E88 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x18026F12C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x18026F700 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  _QWORD *i; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  unsigned int j; // esi
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD); // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h]
  _BYTE v14[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct Microsoft::BamoImpl::BamoStubImpl *v16; // [rsp+70h] [rbp+10h] BYREF
  __int64 v17; // [rsp+78h] [rbp+18h] BYREF

  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v12 = 0LL;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
    (_DWORD)this,
    0,
    (unsigned int)&v12,
    (unsigned int)&v16,
    (__int64)&v17);
  for ( i = (_QWORD *)v12; i != *((_QWORD **)&v12 + 1); ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  for ( j = 0; j < (unsigned __int64)((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 5); ++j )
  {
    v7 = *((_QWORD *)this + 9) + 32LL * j;
    v8 = *(__int64 (__fastcall **)(_QWORD))(v7 + 16);
    if ( v8 )
    {
      v9 = v8(*(_QWORD *)(v7 + 8));
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFB,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
          (const char *)(unsigned int)v9,
          v11);
    }
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    v3,
    v4,
    v5);
  v10 = *((_QWORD *)this + 9);
  if ( v10 != *((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v10;
  if ( (_QWORD)v12 )
    std::_Deallocate<16,0>((_QWORD *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
}
