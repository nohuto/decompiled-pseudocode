/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008F3C8
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180045978 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x1800017F0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180003A88 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_180003A88.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180027AE8 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x18007C818 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180125DB8 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02__.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _QWORD *a4)
{
  int v6; // r15d
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  _WORD *v22; // r8
  _DWORD *v23; // rcx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // eax
  void *v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r9
  GUID *v36; // rdx
  int FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710; // eax
  int v38; // r12d
  _WORD *v39; // r8
  _DWORD *v40; // rcx
  int v41; // ecx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // r9
  void **v47; // rcx
  __int64 v48; // rax
  int v49; // esi
  __int64 v50; // rcx
  __int64 v51; // rdx
  _WORD *v52; // r8
  _DWORD *v53; // rcx
  int v54; // ecx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // r8
  __int64 v59; // r9
  _WORD v61[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v62; // [rsp+64h] [rbp-9Ch] BYREF
  int v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 *v65; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v66; // [rsp+78h] [rbp-88h] BYREF
  int v67[2]; // [rsp+80h] [rbp-80h] BYREF
  GUID *v68; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v69; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v70; // [rsp+98h] [rbp-68h] BYREF
  int v71; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v72; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v73; // [rsp+B0h] [rbp-50h] BYREF
  GUID *v74; // [rsp+B8h] [rbp-48h] BYREF
  _WORD **v75; // [rsp+C0h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  void *v78; // [rsp+E0h] [rbp-20h] BYREF
  PROPVARIANT v79[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h]
  _DWORD v81[8]; // [rsp+100h] [rbp+0h] BYREF
  void *v82[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v83; // [rsp+130h] [rbp+30h]
  struct _tagpropertykey v84; // [rsp+140h] [rbp+40h] BYREF
  GUID v85; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v75 = (_WORD **)a4;
  *a4 = 0LL;
  v6 = 3;
  v81[0] = 590439624;
  v81[1] = 1283267372;
  v81[2] = 1907779772;
  v81[3] = 1730509416;
  v81[4] = 1;
  if ( a2 == 3 )
  {
    v84 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v84.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v84.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v84.pid = 1;
    v6 = 0;
  }
  *(_OWORD *)v79 = 0LL;
  v80 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
         *(_QWORD *)(a1 + 72),
         v81,
         v79);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( LOWORD(v79[0]) != 31 )
    {
      v8 = -2004287484;
      goto LABEL_69;
    }
    *(_OWORD *)pvar = 0LL;
    v77 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
           *(_QWORD *)(a1 + 72),
           &v84,
           pvar);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188D,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
LABEL_68:
      PropVariantClear(pvar);
      goto LABEL_69;
    }
    v65 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v65);
    v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))GetDevice)(
            g_DeviceEnumerator,
            v79[1],
            &v65);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1890,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11);
LABEL_67:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
      goto LABEL_68;
    }
    *(_QWORD *)v67 = 0LL;
    v12 = *v65;
    *(_QWORD *)v67 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v12 + 24))(
            v65,
            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
            23LL);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1893,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13);
LABEL_66:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v67);
      goto LABEL_67;
    }
    v66 = 0LL;
    v14 = **(_QWORD **)v67;
    v66 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v14 + 56))(*(_QWORD *)v67, LODWORD(pvar[1]), &v66);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1896,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15);
LABEL_65:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
      goto LABEL_66;
    }
    v73 = 0LL;
    v16 = *v66;
    v73 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v16 + 104))(
            v66,
            1LL,
            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
            &v73);
    v8 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x189B,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
LABEL_18:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v73);
      goto LABEL_65;
    }
    v78 = 0LL;
    v18 = *v73;
    v82[0] = &v78;
    v82[1] = 0LL;
    LOBYTE(v83) = 1;
    v19 = (*(__int64 (__fastcall **)(__int64 *, void **))(v18 + 32))(v73, &v82[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v82);
    if ( v19 >= 0 )
    {
      *(_OWORD *)v82 = *a3;
      v83 = a3[1];
      v21 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
              v20,
              v82,
              v78,
              v75);
      v8 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A0,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v21);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v78,
          0LL);
        goto LABEL_18;
      }
      v22 = *v75;
      if ( *v75 )
      {
        v23 = *(_DWORD **)(a1 + 8288);
        if ( *v22 == 0xFFFE )
        {
          if ( *v23 > 4u && tlgKeywordOn((__int64)v23, 16LL) )
          {
            v71 = *(_DWORD *)(v25 + 20);
            v69 = (const wchar_t *)(v25 + 24);
            v62 = *(_DWORD *)(v25 + 8);
            v63 = *(_DWORD *)(v25 + 4);
            v61[0] = *(_WORD *)(v25 + 2);
            v68 = (GUID *)L"WAVEFORMATEXTENSIBLE";
            v64 = v6;
            v72 = *(const WCHAR **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v24,
              (int)&unk_1801A4284,
              v25,
              v26,
              &v72,
              (__int64)&v64,
              (const WCHAR **)&v68,
              (__int64)v61,
              (__int64)&v63,
              (__int64)&v62,
              (__int64 *)&v69,
              (__int64)&v71);
          }
        }
        else
        {
          v85 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v85.Data1 = (unsigned __int16)*v22;
          if ( *v23 > 4u && tlgKeywordOn((__int64)v23, 16LL) )
          {
            v72 = (const WCHAR *)&v85;
            v64 = *(_DWORD *)(v28 + 8);
            v63 = *(_DWORD *)(v28 + 4);
            v61[0] = *(_WORD *)(v28 + 2);
            v69 = L"WAVEFORMATEX";
            v62 = v6;
            v68 = *(GUID **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v27,
              (int)&unk_1801A4096,
              v28,
              v29,
              (const WCHAR **)&v68,
              (__int64)&v62,
              &v69,
              (__int64)v61,
              (__int64)&v63,
              (__int64)&v64,
              (__int64 *)&v72);
          }
        }
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v78,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v73);
        goto LABEL_31;
      }
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v78,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v73);
    v70 = 0LL;
    v30 = *v66;
    v70 = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v30 + 104))(
            v66,
            1LL,
            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
            &v70);
    v8 = v31;
    if ( v31 < 0 )
    {
      v33 = (unsigned int)v31;
      v34 = 6316LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v33);
      goto LABEL_64;
    }
    v68 = 0LL;
    v82[0] = &v68;
    v82[1] = 0LL;
    LOBYTE(v83) = 1;
    v8 = CTCoAllocPolicy::Alloc(v32, 1, 0x68uLL, &v82[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v82);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v68,
        0LL);
LABEL_64:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
      goto LABEL_65;
    }
    v68->Data1 = 104;
    v68[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
    v68[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    v68[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
    v36 = v68 + 4;
    LOWORD(v68[4].Data1) = -2;
    *(GUID *)((char *)v36 + 24) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)v36[1].Data4 = 1;
    v82[0] = &v70;
    v82[1] = &v68;
    *(_QWORD *)&v83 = a3;
    *((_QWORD *)&v83 + 1) = &v75;
    FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___(
                                                                              a1,
                                                                              (__int64)v36,
                                                                              (__int64)v82,
                                                                              v35);
    v38 = FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710;
    if ( FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18CF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v68,
        0LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v67);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
      PropVariantClear(pvar);
      v8 = v38;
      goto LABEL_69;
    }
    v39 = *v75;
    if ( *v75 )
    {
      v40 = *(_DWORD **)(a1 + 8288);
      if ( *v39 == 0xFFFE )
      {
        if ( *v40 > 4u && tlgKeywordOn((__int64)v40, 16LL) )
        {
          v64 = *(_DWORD *)(v42 + 20);
          v72 = (const WCHAR *)(v42 + 24);
          v63 = *(_DWORD *)(v42 + 8);
          v62 = *(_DWORD *)(v42 + 4);
          v61[0] = *(_WORD *)(v42 + 2);
          v69 = L"WAVEFORMATEXTENSIBLE";
          v71 = v6;
          v74 = *(GUID **)(a1 + 48);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v41,
            (int)&unk_1801A3FE9,
            v42,
            v43,
            (const WCHAR **)&v74,
            (__int64)&v71,
            &v69,
            (__int64)v61,
            (__int64)&v62,
            (__int64)&v63,
            (__int64 *)&v72,
            (__int64)&v64);
        }
      }
      else
      {
        v85 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v85.Data1 = (unsigned __int16)*v39;
        if ( *v40 > 4u && tlgKeywordOn((__int64)v40, 16LL) )
        {
          v74 = &v85;
          v64 = *(_DWORD *)(v45 + 8);
          v63 = *(_DWORD *)(v45 + 4);
          v61[0] = *(_WORD *)(v45 + 2);
          v72 = L"WAVEFORMATEX";
          v62 = v6;
          v69 = *(const wchar_t **)(a1 + 48);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v44,
            (int)&unk_1801A41E4,
            v45,
            v46,
            &v69,
            (__int64)&v62,
            &v72,
            (__int64)v61,
            (__int64)&v63,
            (__int64)&v64,
            (__int64 *)&v74);
        }
      }
      v47 = (void **)&v68;
      goto LABEL_47;
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v68,
      0LL);
    v69 = 0LL;
    v48 = *v70;
    v82[0] = &v69;
    v82[1] = 0LL;
    LOBYTE(v83) = 1;
    v49 = (*(__int64 (__fastcall **)(__int64 *, void **))(v48 + 32))(v70, &v82[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v82);
    if ( v49 >= 0 )
    {
      *(_OWORD *)v82 = *a3;
      v83 = a3[1];
      v49 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
              v50,
              v82,
              v69,
              v75);
      if ( v49 >= 0 )
      {
        v52 = *v75;
        if ( !*v75 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v69,
            0LL);
          v8 = -2004287480;
          v33 = 2290679816LL;
          v34 = 6381LL;
          goto LABEL_63;
        }
        v53 = *(_DWORD **)(a1 + 8288);
        if ( *v52 == 0xFFFE )
        {
          if ( *v53 > 4u && tlgKeywordOn((__int64)v53, 16LL) )
          {
            v64 = *(_DWORD *)(v55 + 20);
            v74 = (GUID *)(v55 + 24);
            v63 = *(_DWORD *)(v55 + 8);
            v62 = *(_DWORD *)(v55 + 4);
            v61[0] = *(_WORD *)(v55 + 2);
            v72 = L"WAVEFORMATEXTENSIBLE";
            v71 = v6;
            *(_QWORD *)&v85.Data1 = *(_QWORD *)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v54,
              (int)&unk_1801A4134,
              v55,
              v56,
              (const WCHAR **)&v85,
              (__int64)&v71,
              &v72,
              (__int64)v61,
              (__int64)&v62,
              (__int64)&v63,
              (__int64 *)&v74,
              (__int64)&v64);
          }
        }
        else
        {
          *(GUID *)v82 = GUID_00000000_0000_0010_8000_00aa00389b71;
          LODWORD(v82[0]) = (unsigned __int16)*v52;
          if ( *v53 > 4u && tlgKeywordOn((__int64)v53, 16LL) )
          {
            *(_QWORD *)&v85.Data1 = v82;
            v64 = *(_DWORD *)(v58 + 8);
            v63 = *(_DWORD *)(v58 + 4);
            v61[0] = *(_WORD *)(v58 + 2);
            v74 = (GUID *)L"WAVEFORMATEX";
            v62 = v6;
            v72 = *(const WCHAR **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v57,
              (int)&unk_1801A3F46,
              v58,
              v59,
              &v72,
              (__int64)&v62,
              (const WCHAR **)&v74,
              (__int64)v61,
              (__int64)&v63,
              (__int64)&v64,
              (__int64 *)&v85);
          }
        }
        v47 = (void **)&v69;
LABEL_47:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          v47,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
LABEL_31:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v67);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
        PropVariantClear(pvar);
        v8 = 0;
        goto LABEL_69;
      }
      v51 = 6367LL;
    }
    else
    {
      v51 = 6365LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v51,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v49);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v69,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v70);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v67);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
    PropVariantClear(pvar);
    v8 = v49;
    goto LABEL_69;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1888,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
LABEL_69:
  PropVariantClear(v79);
  return (unsigned int)v8;
}
