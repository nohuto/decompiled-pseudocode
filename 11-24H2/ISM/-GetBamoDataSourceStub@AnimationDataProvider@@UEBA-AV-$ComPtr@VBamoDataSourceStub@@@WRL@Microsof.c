/*
 * XREFs of ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x180058220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180093158 (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall AnimationDataProvider::GetBamoDataSourceStub(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdi
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rbx
  bool v7; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rax
  const char *v9; // r9
  void (__fastcall ***v10)(_QWORD); // rbx
  void (__fastcall ***v11)(_QWORD); // rax
  void (__fastcall ***v12)(_QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v5 = *a3;
  v6 = *(struct Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*a3 + 32) + 32LL));
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::GetStub((Microsoft::BamoImpl::BamoPrincipalImpl *)(v5 + 16), v6, v7);
  v10 = (void (__fastcall ***)(_QWORD))(((unsigned __int64)Stub - 16) & -(__int64)(Stub != 0LL));
  v11 = (void (__fastcall ***)(_QWORD))*a2;
  if ( (void (__fastcall ***)(_QWORD))*a2 != v10 )
  {
    if ( v10 )
      (**v10)(v10);
    v11 = v10;
    v12 = (void (__fastcall ***)(_QWORD))*a2;
    *a2 = v10;
    if ( v12 )
    {
      (*v12)[1](v12);
      v11 = (void (__fastcall ***)(_QWORD))*a2;
    }
  }
  if ( !v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v9);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(a3);
  return a2;
}
