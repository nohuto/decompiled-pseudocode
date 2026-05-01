/*
 * XREFs of ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805AA3AC
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18028DEDC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W4SnapRegion@@@Z @ 0x1805AA8D0 (-GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@W4SnapRegion@.c)
 *     ?GetBorderAnchors@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W421@@Z @ 0x1805AA974 (-GetBorderAnchors@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@W421@@Z.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x1805AC20C (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z.c)
 *     ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z @ 0x1805AC29C (-IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z.c)
 *     ?WithRule@FillCandidate@SnapLayoutHelpers@@QEAA?AU12@W4FillRule@2@@Z @ 0x1805AC648 (-WithRule@FillCandidate@SnapLayoutHelpers@@QEAA-AU12@W4FillRule@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SnapLayoutHelpers::DetermineFillWindow(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(_QWORD),
        unsigned __int8 (__fastcall *a4)(_QWORD, _QWORD, char *),
        __int64 a5,
        int a6,
        __int64 *a7)
{
  __int64 v9; // r12
  int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 *v13; // r15
  unsigned __int8 (__fastcall *v14)(_QWORD, _QWORD, char *); // rsi
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int AnchorLocationsFromRegion; // r14d
  bool v18; // zf
  int BorderAnchors; // eax
  char v20; // cl
  char v21; // cl
  int v22; // edx
  SnapLayoutHelpers *v23; // rax
  const struct SnapLayoutHelpers::FillCandidate *v24; // r8
  const enum SnapLayoutHelpers::FillRule *v25; // r9
  bool v26; // bl
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  SnapLayoutHelpers *v31; // rax
  const struct SnapLayoutHelpers::FillCandidate *v32; // r8
  const enum SnapLayoutHelpers::FillRule *v33; // r9
  char v34; // bl
  __int64 v35; // rdx
  __int64 v36; // rcx
  SnapLayoutHelpers *v37; // rax
  const struct SnapLayoutHelpers::FillCandidate *v38; // r8
  const enum SnapLayoutHelpers::FillRule *v39; // r9
  char v40; // bl
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // rsi
  __int64 v45; // [rsp+20h] [rbp-71h] BYREF
  __int64 v46; // [rsp+28h] [rbp-69h]
  __int64 v47; // [rsp+30h] [rbp-61h] BYREF
  __int64 v48; // [rsp+38h] [rbp-59h] BYREF
  __int64 v49[2]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v50[16]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v51[2]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v52[16]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v53[2]; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v54[64]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v55; // [rsp+E8h] [rbp+57h] BYREF
  unsigned __int8 (__fastcall *v56)(_QWORD, _QWORD, char *); // [rsp+F8h] [rbp+67h]

  v56 = a4;
  v9 = a1;
  v10 = 0;
  a6 = 0;
  v48 = 0LL;
  v47 = 0LL;
  v11 = a7;
  v12 = *a7;
  *a7 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v11[1] = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
  v45 = 0LL;
  v46 = 0LL;
  v13 = *(__int64 **)a2;
  a5 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v13 == (__int64 *)a5 )
    goto LABEL_49;
  v14 = v56;
  do
  {
    v15 = *v13;
    v55 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
    AnchorLocationsFromRegion = SnapLayoutHelpers::GetAnchorLocationsFromRegion(v16);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v47,
      v15);
    v48 = 0LL;
    if ( (_DWORD)v9 == AnchorLocationsFromRegion )
    {
      if ( !(_DWORD)v9 )
        goto LABEL_35;
      v18 = ((v9 - 1) & v9) == 0;
LABEL_13:
      if ( !v18 )
      {
LABEL_35:
        if ( !v14((unsigned int)v9, AnchorLocationsFromRegion, (char *)&v48 + 4)
          || !a3(HIDWORD(v48))
          || (v37 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v47, v53, 3LL),
              v10 |= 4u,
              a6 = v10,
              v40 = 1,
              !SnapLayoutHelpers::IsBetterFillCandidate(
                 v37,
                 (const struct SnapLayoutHelpers::FillCandidate *)&v45,
                 v38,
                 v39,
                 v45)) )
        {
          v40 = 0;
        }
        if ( (v10 & 4) != 0 )
        {
          v10 &= ~4u;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v53);
        }
        if ( v40 )
        {
          v27 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v47, v54, 3LL);
          v41 = *v27;
          *v27 = 0LL;
          v42 = v45;
          v45 = v41;
          if ( v42 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          v30 = (__int64 *)v54;
          goto LABEL_45;
        }
        goto LABEL_46;
      }
      goto LABEL_14;
    }
    SnapLayoutHelpers::GetBorderAnchors((unsigned int)v9);
    BorderAnchors = SnapLayoutHelpers::GetBorderAnchors(AnchorLocationsFromRegion);
    v21 = v9 & v20;
    if ( (v22 & BorderAnchors) == 0 )
      goto LABEL_35;
    if ( (v21 & 5) != 0 )
    {
      v18 = (v21 & 0xA) == 0;
      goto LABEL_13;
    }
LABEL_14:
    v26 = 0;
    if ( v14((unsigned int)v9, AnchorLocationsFromRegion, (char *)&v48 + 4) )
    {
      if ( a3(HIDWORD(v48)) )
      {
        v23 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v47, v49, 1LL);
        v10 |= 1u;
        a6 = v10;
        if ( SnapLayoutHelpers::IsBetterFillCandidate(
               v23,
               (const struct SnapLayoutHelpers::FillCandidate *)&v45,
               v24,
               v25,
               v45) )
        {
          v26 = 1;
        }
      }
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v49);
    }
    if ( v26 )
    {
      v27 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v47, v50, 1LL);
      v28 = *v27;
      *v27 = 0LL;
      v29 = v45;
      v45 = v28;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v30 = (__int64 *)v50;
LABEL_45:
      v46 = v27[1];
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v30);
      goto LABEL_46;
    }
    if ( !(unsigned __int8)SnapLayoutHelpers::HasNonComplementaryEdge(
                             (unsigned int)v9,
                             AnchorLocationsFromRegion,
                             (char *)&v48 + 4)
      || !a3(HIDWORD(v48))
      || (v31 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v47, v51, 2LL),
          v10 |= 2u,
          a6 = v10,
          v34 = 1,
          !SnapLayoutHelpers::IsBetterFillCandidate(
             v31,
             (const struct SnapLayoutHelpers::FillCandidate *)&v45,
             v32,
             v33,
             v45)) )
    {
      v34 = 0;
    }
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v51);
    }
    if ( v34 )
    {
      v27 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v47, v52, 2LL);
      v35 = *v27;
      *v27 = 0LL;
      v36 = v45;
      v45 = v35;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v30 = (__int64 *)v52;
      goto LABEL_45;
    }
LABEL_46:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    ++v13;
  }
  while ( v13 != (__int64 *)a5 );
  v43 = a7;
  if ( v45 )
  {
    wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a7, &v45);
    v43[1] = v46;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    return 0LL;
  }
LABEL_49:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
  return 2147500037LL;
}
