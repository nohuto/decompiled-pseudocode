/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800B8D20
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800BA0B0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x18000B9F0 (--1-$RefPtr@UICoreUIClient@@@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x180046B4C (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1800B87BC (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *i; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  Microsoft::BamoImpl::BamoImplObject *v19; // [rsp+90h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v20; // [rsp+98h] [rbp+30h] BYREF
  _QWORD *v21; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+40h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v19,
    *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 12));
  if ( *((_QWORD *)this + 8) )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(this, &v22, &v21, &v20, (__int64)v16);
    *((_BYTE *)this + 218) = 1;
    Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v19, v7, v8);
    for ( i = (_QWORD *)v16[0]; i != (_QWORD *)v16[1]; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v20);
    v10 = v21;
    if ( v21 )
    {
      do
      {
        v11 = (_QWORD *)v10[8];
        v10[8] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
        v10 = v11;
      }
      while ( v11 );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 9);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 10);
    v12 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 7);
    RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)this + 6);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v14,
        v15);
    if ( v16[0] )
      std::_Deallocate<16,0>((char *)v16[0], (const struct std::nothrow_t *)((v17 - v16[0]) & 0xFFFFFFFFFFFFFFF8uLL));
    return 0LL;
  }
  else
  {
    v2 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2081A,
           0);
    v5 = v2;
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v2);
    Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v19, v3, v4);
    return v5;
  }
}
