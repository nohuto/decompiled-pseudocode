/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017140
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016410 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017710 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x180017568 (-OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z.c)
 *     ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800175E8 (-OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001AD10 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18001C510 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct DeviceInfo *v7; // r15
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v10; // edi
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  int v13; // eax
  const unsigned __int16 *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r9
  void (__fastcall *v19)(_QWORD *, _QWORD, int *); // r15
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-C1h]
  _QWORD *v28; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v29; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v30; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v31; // [rsp+48h] [rbp-99h] BYREF
  struct DeviceInfo *v32; // [rsp+50h] [rbp-91h]
  _QWORD *v33; // [rsp+58h] [rbp-89h]
  struct IInputTarget **v34; // [rsp+60h] [rbp-81h]
  int v35; // [rsp+68h] [rbp-79h] BYREF
  __int64 v36; // [rsp+70h] [rbp-71h]
  _QWORD *v37; // [rsp+78h] [rbp-69h]
  _BYTE v38[56]; // [rsp+88h] [rbp-59h] BYREF
  _BYTE v39[56]; // [rsp+C0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v7 = a2;
  v32 = a2;
  v34 = a5;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v38,
    "ContextualProcessingFocusRequest",
    0LL);
  v29 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  v12 = (_QWORD *)*((_QWORD *)this + 3);
  v33 = v12;
  while ( v11 != v12 )
  {
    v31 = 0LL;
    v30 = 0LL;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v39,
      "ContextualProcessorFocusRequest",
      (const struct InputTraceLogging::PerfRegion *)v38);
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v11 + 32LL))(
            *v11,
            v7,
            a3,
            &v30);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x107,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v13,
        v27);
    v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 48LL))(*v11);
    InputETW::ContextualProcessing::OnFocusRequest(v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 48LL))(*v11);
    InputTraceLogging::ContextualProcessing::OnFocusRequest(v15, (unsigned int)v30);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v39);
    v16 = v28;
    if ( !v28 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
      v17 = RefCountedObject::operator new(0xA8uLL);
      v16 = v17;
      v37 = v17;
      if ( v17 )
      {
        v17[3] = &RefCountedObject::`vftable';
        *((_DWORD *)v17 + 8) = 1;
        *v17 = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
        v17[1] = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
        v17[2] = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
        v17[3] = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
        v17[5] = 0LL;
        v17[6] = 0LL;
        v17[7] = 0LL;
        v17[8] = 0LL;
        v17[9] = 0LL;
        v17[10] = 0LL;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(v17 + 11);
        v16[19] = a3;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v16 + 19);
        v16[20] = a4;
        if ( a4 )
          (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a4 + 8LL))(a4);
      }
      else
      {
        v16 = 0LL;
      }
      if ( v16 )
      {
        v28 = v16;
        v18 = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)0x8007000ELL,
          v27);
        v18 = 2147942414LL;
        v16 = v28;
      }
      if ( (int)v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x118,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
          (const char *)v18,
          v27);
    }
    v19 = *(void (__fastcall **)(_QWORD *, _QWORD, int *))(v16[2] + 40LL);
    v35 = v30;
    v36 = v31;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    v19(v16 + 2, *v11, &v35);
    if ( (_DWORD)v30 == 2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
      v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v28;
      v7 = v32;
      break;
    }
    if ( (_DWORD)v30 == 3 )
      v10 = 1;
    v20 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v11 += 2;
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v28;
    v7 = v32;
    v12 = v33;
  }
  *((_BYTE *)a3 + 184) = 1;
  if ( (*((_BYTE *)v7 + 4) & 4) != 0 && v10 != *((_DWORD *)this + 10) )
  {
    NtMITSetKeyboardInputRoutingPolicy(v10);
    *((_DWORD *)this + 10) = v10;
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v28;
  }
  if ( v9 )
  {
    v21 = **v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    v22 = v21(v9, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, &v29);
    if ( v22 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v22,
        v27);
    v23 = v29;
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v23 = v29;
    }
    *v34 = (struct IInputTarget *)v23;
    v24 = (__int64)v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      v23 = v29;
    }
    if ( v23 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v38);
    return 0LL;
  }
  else
  {
    v26 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v38);
    return 2147500037LL;
  }
}
