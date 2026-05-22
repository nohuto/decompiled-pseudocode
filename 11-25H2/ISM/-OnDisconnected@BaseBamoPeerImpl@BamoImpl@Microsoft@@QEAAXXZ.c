/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046838
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18006DDFC (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180046A10 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046AC0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046AF0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x180046B4C (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rbx
  struct Microsoft::BamoImpl::BamoStubImpl *v6; // r14
  struct Microsoft::BamoImpl::BamoStubImpl *v7; // rdi
  __int64 v8; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *v9; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rax
  __int64 v11; // rdx
  _QWORD *j; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v13; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // rdi
  unsigned int k; // r14d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(_QWORD); // rax
  int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  *((_BYTE *)this + 49) = 1;
  v6 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 7);
  v7 = v6;
  *((_QWORD *)this + 7) = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = *((_QWORD *)v7 + 3);
      v9 = 0LL;
      for ( i = *(struct Microsoft::BamoImpl::BamoStubImpl **)(v8 + 32);
            i;
            i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 5) )
      {
        if ( i == v7 )
        {
          v11 = *((_QWORD *)v7 + 5);
          if ( v9 )
            *((_QWORD *)v9 + 5) = v11;
          else
            *(_QWORD *)(v8 + 32) = v11;
          *((_QWORD *)v7 + 5) = 0LL;
          break;
        }
        v9 = i;
      }
      if ( !i )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2DE,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          a4);
      Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v7, 0LL, &v20);
      v7 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v7 + 6);
    }
    while ( v7 );
    v5 = v21;
  }
  for ( j = (_QWORD *)v20; j != *((_QWORD **)&v20 + 1); ++j )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 8LL))(*j);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v6);
  v13 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL);
  v23 = 0LL;
  v24 = 0;
  v14 = 0LL;
  v22 = 0LL;
  if ( !*((_DWORD *)v13 + 47) )
  {
    v14 = v13;
    v22 = v13;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v13);
  }
  for ( k = 0; k < (unsigned __int64)((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 5); ++k )
  {
    v17 = *((_QWORD *)this + 9) + 32LL * k;
    v18 = *(__int64 (__fastcall **)(_QWORD))(v17 + 16);
    if ( v18 )
    {
      v19 = v18(*(_QWORD *)(v17 + 8));
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFB,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
          (const char *)(unsigned int)v19,
          v20);
    }
  }
  if ( v14 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v14);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v23);
  v16 = *((_QWORD *)this + 9);
  if ( v16 != *((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v16;
  if ( (_QWORD)v20 )
    std::_Deallocate<16,0>((char *)v20, (const struct std::nothrow_t *)((v5 - v20) & 0xFFFFFFFFFFFFFFF8uLL));
}
