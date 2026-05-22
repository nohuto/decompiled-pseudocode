/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180019FE0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801978A0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180019F70 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x18001A650 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessor.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001A740 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x18001A820 (-OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18001BF40 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5,
        enum ContextualProcessorState *a6)
{
  int v10; // r12d
  bool v11; // bl
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // rcx
  int v19; // eax
  const unsigned __int16 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  void (__fastcall *v23)(__int64, _QWORD, _QWORD, int *); // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v28; // rax
  __int64 *v29; // rbx
  int v30; // r14d
  __int64 (__fastcall *v31)(__int64 *, GUID *, __int64 *); // r14
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rbx
  __int64 (__fastcall *v35)(__int64 *, GUID *, struct IInputTarget **); // r14
  struct IInputTarget *v36; // rcx
  int v37; // eax
  struct IInputTarget *v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-E0h]
  bool v42; // [rsp+30h] [rbp-D0h]
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  struct IInputTarget *v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  char *v48; // [rsp+60h] [rbp-A0h] BYREF
  ContextualProcessorManager *v49; // [rsp+68h] [rbp-98h]
  enum ContextualProcessorState *v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h]
  char v53; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v54[56]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v55[56]; // [rsp+C8h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v49 = this;
  v50 = a6;
  if ( !a5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x80070057LL,
      v41);
    return 2147942487LL;
  }
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v54, "ContextualProcessingHitTest", 0LL);
  v43 = 0LL;
  v10 = 0;
  v11 = (*((_DWORD *)a2 + 8) & 0x10000) != 0 && *(_DWORD *)a2 == 2;
  v42 = v11;
  if ( !*a5
    || (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a5)(*a5, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v43) < 0 )
  {
    v45 = 0LL;
    v44 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
    v28 = (__int64 *)RefCountedObject::operator new(0xA8uLL);
    v29 = v28;
    v48 = (char *)v28;
    if ( v28 )
    {
      v28[3] = (__int64)&RefCountedObject::`vftable';
      *((_DWORD *)v28 + 8) = 1;
      *v28 = (__int64)&ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
      v28[1] = (__int64)&ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
      v28[2] = (__int64)&ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
      v28[3] = (__int64)&ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
      v28[5] = 0LL;
      v28[6] = 0LL;
      v28[7] = 0LL;
      v28[8] = 0LL;
      v28[9] = 0LL;
      v28[10] = 0LL;
      std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(v28 + 11);
      v29[19] = (__int64)a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v29 + 19);
      v29[20] = (__int64)a4;
      if ( a4 )
        (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a4 + 8LL))(a4);
    }
    else
    {
      v29 = 0LL;
    }
    if ( v29 )
    {
      v45 = v29;
      v30 = 0;
    }
    else
    {
      v30 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)0x8007000ELL,
        v41);
      v29 = v45;
    }
    if ( v30 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v30,
        v41);
    v31 = *(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v29;
    v32 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v31(v29, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v43);
    if ( v33 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v33,
        v41);
    v34 = v45;
    v35 = *(__int64 (__fastcall **)(__int64 *, GUID *, struct IInputTarget **))*v45;
    v36 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v35(v34, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, &v44);
    if ( v37 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x71,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v37,
        v41);
    v38 = v44;
    if ( v44 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v44 + 8LL))(v44);
      v38 = v44;
    }
    *a5 = v38;
    if ( v38 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v39 + 16))(v39);
    }
LABEL_8:
    v12 = (_QWORD *)*((_QWORD *)this + 2);
    v13 = (_QWORD *)*((_QWORD *)this + 3);
    while ( v12 != v13 )
    {
      v14 = *((_QWORD *)a3 + 22);
      if ( !v14 || ((*(_QWORD *)(v14 + 8) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || *((_DWORD *)v12 + 2) == 1 )
      {
        v47 = 0LL;
        v46 = 0LL;
        v15 = (char *)(*(__int64 (__fastcall **)(__int64, char **, _QWORD))(*(_QWORD *)v43 + 56LL))(v43, &v48, *v12);
        v16 = 0LL;
        if ( &v53 != v15 )
        {
          v16 = *(_QWORD *)v15;
          *(_QWORD *)v15 = 0LL;
        }
        v17 = v47;
        v47 = v16;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v18 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        InputTraceLogging::PerfRegion::PerfRegion(
          (InputTraceLogging::PerfRegion *)v55,
          "ContextualProcessorHitTest",
          (const struct InputTraceLogging::PerfRegion *)v54);
        v19 = (*(__int64 (__fastcall **)(_QWORD, struct HitTestInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v12 + 24LL))(
                *v12,
                a2,
                a3,
                &v46);
        if ( v19 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x9D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
            (const char *)(unsigned int)v19,
            v41);
        v20 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 48LL))(*v12);
        InputETW::ContextualProcessing::OnHitTest(v20);
        v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 48LL))(*v12);
        InputTraceLogging::ContextualProcessing::OnHitTest(a2, v21, (unsigned int)v46);
        InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v55);
        v22 = v43;
        v23 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v43 + 48LL);
        v51 = v46;
        v52 = v47;
        if ( v47 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
        v23(v22, *((unsigned int *)a2 + 10), *v12, &v51);
        if ( (_DWORD)v46 == 2 )
        {
          v10 = 2;
          v25 = v47;
          if ( v47 )
          {
            v47 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          break;
        }
        if ( (_DWORD)v46 == 1 )
        {
          v10 = 1;
        }
        else if ( (_DWORD)v46 == 3 && !v10 )
        {
          v10 = 3;
        }
        v24 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
      v12 += 2;
    }
    *((_BYTE *)a3 + 184) = 1;
    if ( v42 )
      *((_DWORD *)v49 + 11) = v10;
    goto LABEL_33;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 64LL))(v43, *((unsigned int *)a2 + 10))
    || !v11 )
  {
    (*(void (__fastcall **)(__int64, struct InputContext *))(*(_QWORD *)v43 + 32LL))(v43, a3);
    goto LABEL_8;
  }
  v10 = *((_DWORD *)this + 11);
LABEL_33:
  if ( v10 )
  {
    if ( v50 )
      *(_DWORD *)v50 = v10;
    v40 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v54);
    return 0LL;
  }
  else
  {
    v26 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v54);
    return 2147500037LL;
  }
}
