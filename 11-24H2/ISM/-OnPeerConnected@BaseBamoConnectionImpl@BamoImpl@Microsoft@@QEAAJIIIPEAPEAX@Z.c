/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800548A4
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180054830 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180044D3C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x180054AE0 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  void **v9; // r14
  int v10; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rdi
  __int64 (__fastcall *v12)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *); // rbx
  __int64 v13; // rcx
  int v14; // eax
  void (__fastcall *v15)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64); // rbx
  __int64 v16; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v17; // rax
  unsigned int v18; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // [rsp+20h] [rbp-20h]
  unsigned int v23; // [rsp+20h] [rbp-20h]
  Microsoft::BamoImpl::BaseBamoPeerImpl *v24; // [rsp+30h] [rbp-10h] BYREF
  __int64 v25; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v27; // [rsp+70h] [rbp+30h] BYREF

  v9 = a5;
  *a5 = 0LL;
  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  v25 = 0LL;
  v24 = 0LL;
  LOBYTE(a5) = 0;
  v27 = 0LL;
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 40LL))(
          this,
          &v25);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7A2,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v22);
  v11 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v24 = v11;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v11, this, a2, a3, a4);
  v12 = *(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *))(*(_QWORD *)this + 48LL);
  v13 = v27;
  v27 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = v12(this, v11, &a5, &v27);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7AC,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v23);
  if ( (_BYTE)a5 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      v15 = *(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v11 + 96LL);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
      v15(v11, v16);
      if ( v27 )
      {
        v17 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
        v18 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v17, v11);
        (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, v18);
      }
      *((_QWORD *)v11 + 8) = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v11;
      v24 = 0LL;
      *v9 = v11;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    }
    else
    {
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      if ( v11 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    return 0LL;
  }
  v20 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
          0x87B2080C,
          0);
  v21 = v20;
  if ( v20 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v20,
      v23);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v27);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v24);
  return v21;
}
