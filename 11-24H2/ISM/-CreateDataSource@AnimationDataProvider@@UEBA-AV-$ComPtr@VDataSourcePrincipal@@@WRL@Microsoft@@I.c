/*
 * XREFs of ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180102460
 * Callers:
 *     <none>
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180093158 (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x1801007A8 (--0-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z.c)
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@QEAAJI@Z @ 0x180100B50 (-Add@-$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Micros.c)
 *     ?Attach@?$ComPtr@V?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@QEAAXPEAV?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@3@@Z @ 0x180100FC8 (-Attach@-$ComPtr@V-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall AnimationDataProvider::CreateDataSource(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rdi
  struct Microsoft::Bamo::BaseBamoPeer *v7; // rbx
  unsigned __int64 Stub; // rax
  const char *v9; // r9
  __int64 v10; // r15
  _QWORD *v11; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *v12; // rdx
  const char *v13; // r9
  _QWORD *v14; // rax
  const char *v15; // r9
  _QWORD *v16; // rbx
  int v17; // eax
  int v18; // eax
  _QWORD *v20; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _LUID Luid; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+68h] [rbp+10h]
  _QWORD *v24; // [rsp+78h] [rbp+20h] BYREF

  v23 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(struct Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v6 + 32) + 32LL));
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::GetStub((Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 16), v7);
  v10 = (Stub - 16) & -(__int64)(Stub != 0);
  if ( !v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v9);
  *a2 = 0LL;
  v11 = operator new(0x48uLL);
  v24 = v11;
  v12 = *(struct Microsoft::Bamo::BaseBamoConnection **)(a1 + 16);
  *v11 = &BamoDataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v11[1] = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v11 + 2), v12);
  v11[2] = &BamoImpl::BamoDataSourcePrincipalImpl::`vftable';
  v11[7] = 0LL;
  v11[8] = 0LL;
  *v11 = &DataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v11[1] = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  *a2 = v11;
  Luid = 0LL;
  if ( !AllocateLocallyUniqueId(&Luid) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0xAE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v13);
  (*(void (__fastcall **)(__int64, _LUID *))(*(_QWORD *)(*a2 + 8LL) + 104LL))(*a2 + 8LL, &Luid);
  if ( a3 )
  {
    v24 = 0LL;
    v20 = operator new(0x50uLL);
    v14 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::ListPrincipal<unsigned int>(
            v20,
            *(struct Microsoft::Bamo::BaseBamoConnection **)(a1 + 16));
    Microsoft::WRL::ComPtr<Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>>::Attach(
      (__int64 *)&v24,
      (__int64)v14);
    v16 = v24;
    if ( !v24 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        185LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
        v15);
    v17 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::Add(
            v24,
            a3);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
        (const char *)(unsigned int)v17,
        1);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*a2 + 8LL) + 120LL))(*a2 + 8LL, v16);
    (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v10 + 8) + 24LL))(v10 + 8, *a2);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v18,
      1);
  return a2;
}
