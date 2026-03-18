/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x180279224
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180279C00 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF9C4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801D0CA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x180278A18 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x180279E10 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v1; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *i; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int128 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  char v16; // [rsp+90h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v17; // [rsp+98h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+40h] BYREF

  v1 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this + 12);
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v16, v1);
  if ( *((_QWORD *)this + 8) )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(this, &v19, &v18, &v17, (__int64)&v13);
    *((_BYTE *)this + 218) = 1;
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v16);
    for ( i = (_QWORD *)v13; i != *((_QWORD **)&v13 + 1); ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v17);
    v7 = (_QWORD *)v18;
    if ( v18 )
    {
      do
      {
        v8 = (_QWORD *)v7[8];
        v7[8] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
        v7 = v8;
      }
      while ( v8 );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
    v9 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v12);
    if ( (_QWORD)v13 )
      std::_Deallocate<16,0>((_QWORD *)v13, (v14 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
    return 0LL;
  }
  else
  {
    v3 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2081A,
           0);
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v3);
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v16);
    return v4;
  }
}
