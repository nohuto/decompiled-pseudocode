/*
 * XREFs of ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014BBE8
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD44 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180148EC0 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x180148F54 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014B9D0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014BB1C (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18019DC98 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall DragNDropProcessor::GetDragSourceInputSite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6)
{
  unsigned int v7; // esi
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rdx
  GUID v14; // xmm6
  __int64 *Attached; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // xmm6_8
  unsigned __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 *v21; // r15
  __int64 (__fastcall ***v22)(_QWORD); // rbx
  _QWORD *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+38h] [rbp-99h] BYREF
  __int64 v27; // [rsp+40h] [rbp-91h] BYREF
  bool v28[104]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-21h]

  v7 = a3;
  v10 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a2, a3);
  (*(void (__fastcall **)(_QWORD, bool *, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
    *(_QWORD *)(a1 + 24),
    v28,
    v11,
    v10);
  InputETW::DragNDrop::GetDragSource((struct tagPOINT)a2, v7, v12, v28[0]);
  if ( v28[0] && a5 && a4 )
  {
    v14 = GUID_NULL;
    DragNDropProcessor::GetDragManagerInputSite(a1, &v27, a2, v7, a4, (unsigned __int8 *)v28);
    if ( v27 )
    {
      Attached = InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(v27, (__int64 *)&v26);
      v14 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*Attached + 8) + 80LL))(*Attached + 8);
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v26);
    }
    v16 = *(_QWORD *)&v14.Data1;
    v17 = *(_QWORD *)&v14.Data1;
    v18 = _mm_srli_si128((__m128i)v14, 8).m128i_u64[0];
    v19 = v17 - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v19 )
      v19 = v18 - *(_QWORD *)GUID_NULL.Data4;
    if ( v19 )
    {
      v20 = *(__int64 **)(v29 - 24);
      v21 = *(__int64 **)(v29 - 16);
      while ( v20 != v21 )
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v20, (__int64 *)&v26);
        v22 = v26;
        if ( v26 )
        {
          v23 = (_QWORD *)v26[1][3](v26 + 1);
          v24 = *v23 - v16;
          if ( *v23 == v16 )
            v24 = v23[1] - v18;
          if ( !v24 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v26);
            *a5 = v22;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v20);
            *a6 = *v20;
            (*v22)[1](v22);
            break;
          }
        }
        if ( v22 )
        {
          v26 = 0LL;
          (*v22)[1](v22);
        }
        ++v20;
      }
    }
    v25 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  HitTestResult::~HitTestResult((HitTestResult *)v28, v13);
}
