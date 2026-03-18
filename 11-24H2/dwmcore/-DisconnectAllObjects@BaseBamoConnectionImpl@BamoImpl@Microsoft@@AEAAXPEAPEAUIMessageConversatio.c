/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x18026E308
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x18026EB14 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18026E238 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x18026F12C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 *v5; // r14
  __int64 v7; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 i; // rbp
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v5 = (__int64 *)((char *)this + 64);
  v7 = *((_QWORD *)this + 8);
  *a2 = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v10 = *((_QWORD *)this + 14);
  *a4 = 0LL;
  *a3 = v10;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(this, v11, v12, v13);
  v15 = *((_QWORD *)this + 14);
  for ( i = 0LL; v15; i = v22 )
  {
    v17 = *v5;
    LOBYTE(v14) = 1;
    *((_QWORD *)this + 14) = *(_QWORD *)(v15 + 64);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 72LL))(
            v17,
            *(unsigned int *)(v15 + 36),
            0LL,
            v14);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    v21 = 0LL;
    v22 = 0LL;
    LOBYTE(v19) = 1;
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(v15, v19, a5, (unsigned int)&v21, (__int64)&v22);
    if ( *a4 )
      *(_QWORD *)(i + 48) = v21;
    else
      *a4 = v21;
    v15 = *((_QWORD *)this + 14);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v5);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(this);
}
