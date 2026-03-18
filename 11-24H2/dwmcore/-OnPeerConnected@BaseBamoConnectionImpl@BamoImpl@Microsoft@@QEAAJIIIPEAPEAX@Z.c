/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1801A8F54
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x18026F270 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801A8D14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1801A9164 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1801A91B0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r14
  __int64 v10; // rax
  int v11; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v12; // rbx
  __int64 (__fastcall *v13)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, Microsoft::BamoImpl::BaseBamoPeerImpl **); // rdi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v19; // rcx
  void (__fastcall *v20)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64); // rdi
  __int64 v21; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-20h]
  unsigned int v25; // [rsp+20h] [rbp-20h]
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  Microsoft::BamoImpl::BaseBamoPeerImpl *v27; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  Microsoft::BamoImpl::BaseBamoPeerImpl *v29; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  v10 = *(_QWORD *)this;
  v26 = 0LL;
  v29 = 0LL;
  LOBYTE(a5) = 0;
  v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(v10 + 40))(this, &v26);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7A2,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      v24);
  v27 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v12 = v27;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v27, this, a2, a3, a4);
  v13 = *(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, Microsoft::BamoImpl::BaseBamoPeerImpl **))(*(_QWORD *)this + 48LL);
  if ( v29 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)v29 + 8LL))(v29);
  v14 = v13(this, v12, &a5, &v29);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7AC,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v25);
  if ( (_BYTE)a5 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      v20 = *(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v12 + 96LL);
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
      v20(v12, v21);
      if ( v29 )
      {
        v22 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)v29 + 32LL))(v29);
        v23 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v22, v12);
        (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)v12 + 56LL))(v12, v23);
      }
      *((_QWORD *)v12 + 8) = *((_QWORD *)this + 14);
      v19 = v29;
      *((_QWORD *)this + 14) = v12;
      *v5 = v12;
      if ( !v19 )
        return 0LL;
      v18 = *(_QWORD *)v19;
    }
    else
    {
      if ( v29 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( !v12 )
        return 0LL;
      v18 = *(_QWORD *)v12;
      v19 = v12;
    }
    (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(v18 + 8))(v19);
    return 0LL;
  }
  v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
          0x87B2080C,
          0);
  v16 = v15;
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B5,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v15);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v29);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v27);
  return v16;
}
