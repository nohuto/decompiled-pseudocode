/*
 * XREFs of ?OnAnimationTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18005C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180038424 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800571E8 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 *     ??$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoAnimationTargetClientProxy@@@Z @ 0x18005C908 (--$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputSiteElementProxy::OnAnimationTargetClientChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  InputSiteElementProxy *v8; // rsi
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v5 = *((_QWORD *)this + 42);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v17 = 0LL;
  v6 = *(_QWORD *)(v5 + 488);
  v7 = *(_QWORD *)(v5 + 496);
  while ( v6 != v7 )
  {
    v8 = *(InputSiteElementProxy **)v6;
    v9 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 8);
    v10 = **v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v11 = v10(v9, &GUID_14a24c33_0307_d5c2_9e57_990b25f87532, &v17) >= 0;
    if ( v8 == this && v11 )
      break;
    v6 += 16LL;
  }
  if ( v6 != *(_QWORD *)(v5 + 496) )
  {
    v18 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 8),
                &v18) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v5 + 488, &v19, (_QWORD *)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 42);
  v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 72LL))((char *)this + 8);
  InputSite::AttachObject<BamoAnimationTargetClientProxy>(v13, this, v14);
  return 0LL;
}
