/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014BF4C
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AB20 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014CAB0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18014D870 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD44 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18014E1B8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B7B0 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIManualDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005DF88 (--$As@UIManualDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??$As@UIDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E6B8 (--$As@UIDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180148EC0 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x180148F54 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x180148FE8 (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18014A9D8 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014BE80 (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18019DC98 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A09AC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DragNDropProcessor::HitTest(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        unsigned __int8 *a6,
        struct tagPOINT *a7,
        __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        __int64 *a13,
        __int64 *a14)
{
  unsigned int v14; // r14d
  bool *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // r9
  __int64 *v27; // r15
  __int64 *v28; // r8
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rbx
  __int64 *v45; // rax
  unsigned __int64 v46; // rax
  __int64 (__fastcall ***v47)(_QWORD); // rbx
  __int64 (__fastcall ***v48)(_QWORD); // r14
  __m128i v49; // xmm6
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 (__fastcall ***v52)(_QWORD); // rbx
  __int64 (__fastcall ***v53)(_QWORD); // r14
  _QWORD *v54; // rax
  unsigned __int64 v55; // rcx
  __int64 (__fastcall ***v56)(_QWORD); // rbx
  _QWORD *v57; // rax
  unsigned __int64 v58; // rcx
  _QWORD *v59; // rbx
  __int64 *v60; // r14
  __int64 *v61; // r12
  _QWORD *v62; // r13
  __int64 *v63; // rbx
  _QWORD *v64; // r15
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  struct tagPOINT PositionRelativeToSite; // rax
  unsigned int ProcessId; // eax
  __int64 v71; // [rsp+38h] [rbp-D0h]
  __int64 v72; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v73; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v74; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall ***v75)(_QWORD); // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v76)(_QWORD); // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v77)(_QWORD); // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v78; // [rsp+70h] [rbp-98h]
  struct tagPOINT *v79; // [rsp+78h] [rbp-90h]
  _QWORD *v80; // [rsp+80h] [rbp-88h]
  __int64 *v81; // [rsp+88h] [rbp-80h]
  _QWORD *v82; // [rsp+90h] [rbp-78h]
  __int64 *v83; // [rsp+98h] [rbp-70h]
  _QWORD *v84; // [rsp+A0h] [rbp-68h]
  _QWORD *v85; // [rsp+A8h] [rbp-60h]
  GUID v86; // [rsp+B0h] [rbp-58h]
  bool v87[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-38h]
  __int128 v89; // [rsp+128h] [rbp+20h]
  __int64 v90; // [rsp+138h] [rbp+30h]
  _BYTE v91[128]; // [rsp+148h] [rbp+40h] BYREF

  v85 = a4;
  v14 = a3;
  v16 = (bool *)a6;
  v79 = a7;
  v78 = a8;
  v80 = a9;
  v84 = a10;
  v74 = a11;
  v82 = a12;
  v73 = a13;
  v83 = a14;
  v17 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  v19 = 0;
  v87[0] = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v20 = 0;
  if ( !a6 || (v21 = *a6) == 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, _QWORD))(**(_QWORD **)(v18 + 24) + 32LL))(
            *(_QWORD *)(v18 + 24),
            v91,
            a2,
            v17);
    HitTestResult::operator=((__int64)v87, v22);
    HitTestResult::~HitTestResult((HitTestResult *)v91, v23);
    v16 = v87;
    v20 = 1;
    v21 = v87[0];
  }
  InputETW::DragNDrop::HitTest(a2, v14, v20, v21);
  if ( *v16 )
  {
    v25 = *((_QWORD *)v16 + 13);
    v26 = 8LL;
    if ( a11 && a12 )
    {
      v86 = GUID_NULL;
      v27 = *(__int64 **)(v25 - 24);
      v28 = *(__int64 **)(v25 - 16);
      v81 = v28;
      v29 = *(_QWORD *)GUID_NULL.Data4;
      v30 = *(_QWORD *)&GUID_NULL.Data1;
      v71 = *(_QWORD *)&GUID_NULL.Data1;
      v31 = *(_QWORD *)GUID_NULL.Data4;
      v24 = *(_QWORD *)&GUID_NULL.Data1;
      while ( v27 != v28 )
      {
        v32 = v30 - v24;
        if ( !v32 )
          v32 = v29 - v31;
        if ( !v32 )
        {
          v33 = *v27;
          if ( a5 )
          {
            v34 = 0LL;
            v72 = 0LL;
            v35 = *(_QWORD *)(v33 + 488);
            v36 = *(_QWORD *)(v33 + 496);
            if ( v35 != v36 )
            {
              do
              {
                if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualDragAreaClientProxy>(
                            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v35 + 8),
                            &v72) >= 0 )
                  break;
                v35 += 16LL;
              }
              while ( v35 != v36 );
              v34 = v72;
            }
            v37 = v34 - 8;
            if ( (-(__int64)(v34 != 0) & (v34 - 8)) != 0 )
            {
              if ( !v34 )
                v34 = 8LL;
              v38 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v34 + 40LL))(
                                 v34,
                                 v37,
                                 v28,
                                 8LL);
              v29 = v38[1];
              v71 = *v38;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v72);
          }
          else
          {
            v39 = 0LL;
            v72 = 0LL;
            v40 = *(_QWORD *)(v33 + 488);
            v41 = *(_QWORD *)(v33 + 496);
            if ( v40 != v41 )
            {
              do
              {
                if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IDragAreaClientProxy>(
                            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v40 + 8),
                            &v72) >= 0 )
                  break;
                v40 += 16LL;
              }
              while ( v40 != v41 );
              v39 = v72;
            }
            v42 = v39 - 8;
            v43 = -v39;
            v44 = (_QWORD *)(v42 & -(__int64)(v43 != 0));
            *(_QWORD *)&v86.Data1 = v44;
            if ( v44 )
              (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64))*v44)(
                v42 & -(__int64)(v43 != 0),
                v33,
                v28,
                v26);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v72);
            if ( v44 )
            {
              v45 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(v44[1] + 24LL))(v44 + 1);
              v29 = v45[1];
              v71 = *v45;
              (*(void (__fastcall **)(_QWORD *))(*v44 + 8LL))(v44);
            }
          }
          v24 = *(_QWORD *)&GUID_NULL.Data1;
          v31 = *(_QWORD *)GUID_NULL.Data4;
          v46 = v71 - *(_QWORD *)&GUID_NULL.Data1;
          if ( v71 == *(_QWORD *)&GUID_NULL.Data1 )
            v46 = v29 - *(_QWORD *)GUID_NULL.Data4;
          if ( !v46 && !a5 )
          {
            InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v27, (__int64 *)&v76);
            v47 = v76;
            if ( v76 )
            {
              v48 = v76 + 1;
              if ( !(unsigned int)v76[1][5](v76 + 1) || (unsigned int)(*v48)[5](v47 + 1) == 2 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v76);
                *v74 = v47;
                v49 = *(__m128i *)(*v48)[3](v47 + 1);
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v27);
                *v73 = *v27;
                v29 = _mm_srli_si128(v49, 8).m128i_u64[0];
                v71 = v49.m128i_i64[0];
              }
            }
            if ( v47 )
            {
              v76 = 0LL;
              (*v47)[1](v47);
            }
            v31 = *(_QWORD *)GUID_NULL.Data4;
            v24 = *(_QWORD *)&GUID_NULL.Data1;
          }
          v26 = 8LL;
        }
        v50 = v71;
        v51 = v71 - v24;
        if ( v71 == v24 )
          v51 = v29 - v31;
        if ( v51 )
        {
          if ( *v74 )
            goto LABEL_58;
          InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v27, (__int64 *)&v77);
          v52 = v77;
          if ( v77 )
          {
            v53 = v77 + 1;
            if ( (unsigned int)v77[1][5](v77 + 1) == 1 || (unsigned int)(*v53)[5](v52 + 1) == 2 )
            {
              v54 = (_QWORD *)(*v53)[3](v52 + 1);
              v50 = v71;
              v55 = *v54 - v71;
              if ( *v54 == v71 )
                v55 = v54[1] - v29;
              if ( !v55 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v77);
                *v74 = v52;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v27);
                *v73 = *v27;
              }
            }
            else
            {
              v50 = v71;
            }
          }
          if ( v52 )
          {
            v77 = 0LL;
            (*v52)[1](v52);
          }
          if ( *v74 )
          {
LABEL_58:
            InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v27, (__int64 *)&v75);
            v56 = v75;
            if ( v75 )
            {
              v57 = (_QWORD *)v75[1][10](v75 + 1);
              v58 = *v57 - v50;
              if ( *v57 == v50 )
                v58 = v57[1] - v29;
              if ( !v58 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v75);
                *v82 = v56;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v27);
                *v83 = *v27;
                Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v75);
                break;
              }
            }
            Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v75);
          }
          v26 = 8LL;
          v24 = *(_QWORD *)&GUID_NULL.Data1;
          v31 = *(_QWORD *)GUID_NULL.Data4;
        }
        ++v27;
        v30 = v71;
        v28 = v81;
      }
    }
    v59 = v84;
    if ( v84 )
      *v59 = (unsigned int)InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 **)(v25 - 24));
    if ( v79 && v78 && v80 )
    {
      v60 = *(__int64 **)(v25 - 24);
      v61 = *(__int64 **)(v25 - 16);
      v62 = v85;
      while ( v60 != v61 )
      {
        InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v60, &v73);
        v63 = v73;
        if ( v73 )
        {
          v64 = v73 + 1;
          v65 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(v73[1] + 32))(v73 + 1);
          v66 = *v65 - *v62;
          if ( *v65 == *v62 )
            v66 = v65[1] - v62[1];
          if ( !v66 )
          {
            v67 = (*(__int64 (__fastcall **)(__int64 *))(*v64 + 24LL))(v63 + 1);
            *v78 = v67;
            PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v60, a2);
            *v79 = PositionRelativeToSite;
            ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(v63[4] + 16));
            *v80 = ProcessId;
            (*(void (__fastcall **)(__int64 *))(*v63 + 8))(v63);
            break;
          }
        }
        if ( v63 )
        {
          v73 = 0LL;
          (*(void (__fastcall **)(__int64 *))(*v63 + 8))(v63);
        }
        ++v60;
      }
    }
  }
  else
  {
    v19 = -2147467259;
  }
  HitTestResult::~HitTestResult((HitTestResult *)v87, v24);
  return v19;
}
