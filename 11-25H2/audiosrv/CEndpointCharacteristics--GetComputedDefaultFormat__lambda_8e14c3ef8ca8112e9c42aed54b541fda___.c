/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046068
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045C54 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
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
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180125F1C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x180126088 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abad.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
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
  GUID *v35; // rdx
  int FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77; // eax
  int v37; // r12d
  _WORD *v38; // r8
  _DWORD *v39; // rcx
  int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // r9
  void **v46; // rcx
  __int64 v47; // rax
  int v48; // esi
  __int64 v49; // rcx
  __int64 v50; // rdx
  _WORD *v51; // r8
  _DWORD *v52; // rcx
  int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // r9
  _WORD v60[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+64h] [rbp-9Ch] BYREF
  int v62; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 *v64; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v65; // [rsp+78h] [rbp-88h] BYREF
  int v66[2]; // [rsp+80h] [rbp-80h] BYREF
  GUID *v67; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v69; // [rsp+98h] [rbp-68h] BYREF
  int v70; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v72; // [rsp+B0h] [rbp-50h] BYREF
  GUID *v73; // [rsp+B8h] [rbp-48h] BYREF
  _WORD **v74; // [rsp+C0h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-28h]
  void *v77; // [rsp+E0h] [rbp-20h] BYREF
  PROPVARIANT v78[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]
  _DWORD v80[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _tagpropertykey v81; // [rsp+118h] [rbp+18h] BYREF
  GUID v82; // [rsp+130h] [rbp+30h] BYREF
  void *v83[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v84; // [rsp+150h] [rbp+50h]
  __int128 v85; // [rsp+160h] [rbp+60h]
  __int128 v86; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v74 = (_WORD **)a4;
  *a4 = 0LL;
  v6 = 3;
  v80[0] = 590439624;
  v80[1] = 1283267372;
  v80[2] = 1907779772;
  v80[3] = 1730509416;
  v80[4] = 1;
  if ( a2 == 3 )
  {
    v81 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v81.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v81.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v81.pid = 1;
    v6 = 0;
  }
  *(_OWORD *)v78 = 0LL;
  v79 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
         *(_QWORD *)(a1 + 72),
         v80,
         v78);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( LOWORD(v78[0]) != 31 )
    {
      v8 = -2004287484;
      goto LABEL_69;
    }
    *(_OWORD *)pvar = 0LL;
    v76 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
           *(_QWORD *)(a1 + 72),
           &v81,
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
    v64 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v64);
    v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))GetDevice)(
            g_DeviceEnumerator,
            v78[1],
            &v64);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1890,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11);
LABEL_67:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
      goto LABEL_68;
    }
    *(_QWORD *)v66 = 0LL;
    v12 = *v64;
    *(_QWORD *)v66 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v12 + 24))(
            v64,
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
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v66);
      goto LABEL_67;
    }
    v65 = 0LL;
    v14 = **(_QWORD **)v66;
    v65 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v14 + 56))(*(_QWORD *)v66, LODWORD(pvar[1]), &v65);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1896,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15);
LABEL_65:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
      goto LABEL_66;
    }
    v72 = 0LL;
    v16 = *v65;
    v72 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v16 + 104))(
            v65,
            1LL,
            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
            &v72);
    v8 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x189B,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
LABEL_18:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v72);
      goto LABEL_65;
    }
    v77 = 0LL;
    v18 = *v72;
    v83[0] = &v77;
    v83[1] = 0LL;
    LOBYTE(v84) = 1;
    v19 = (*(__int64 (__fastcall **)(__int64 *, void **))(v18 + 32))(v72, &v83[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v83);
    if ( v19 >= 0 )
    {
      *(_OWORD *)v83 = *a3;
      v84 = a3[1];
      v85 = a3[2];
      v86 = a3[3];
      v21 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
              v20,
              v83,
              v77,
              v74);
      v8 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A0,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v21);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v77,
          0LL);
        goto LABEL_18;
      }
      v22 = *v74;
      if ( *v74 )
      {
        v23 = *(_DWORD **)(a1 + 8288);
        if ( *v22 == 0xFFFE )
        {
          if ( *v23 > 4u && (unsigned __int8)tlgKeywordOn(v23, 16LL) )
          {
            v70 = *(_DWORD *)(v25 + 20);
            v68 = (const wchar_t *)(v25 + 24);
            v61 = *(_DWORD *)(v25 + 8);
            v62 = *(_DWORD *)(v25 + 4);
            v60[0] = *(_WORD *)(v25 + 2);
            v67 = (GUID *)L"WAVEFORMATEXTENSIBLE";
            v63 = v6;
            v71 = *(const WCHAR **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v24,
              (int)&unk_1801A4284,
              v25,
              v26,
              &v71,
              (__int64)&v63,
              (const WCHAR **)&v67,
              (__int64)v60,
              (__int64)&v62,
              (__int64)&v61,
              (__int64 *)&v68,
              (__int64)&v70);
          }
        }
        else
        {
          v82 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v82.Data1 = (unsigned __int16)*v22;
          if ( *v23 > 4u && (unsigned __int8)tlgKeywordOn(v23, 16LL) )
          {
            v71 = (const WCHAR *)&v82;
            v63 = *(_DWORD *)(v28 + 8);
            v62 = *(_DWORD *)(v28 + 4);
            v60[0] = *(_WORD *)(v28 + 2);
            v68 = L"WAVEFORMATEX";
            v61 = v6;
            v67 = *(GUID **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v27,
              (int)&unk_1801A4096,
              v28,
              v29,
              (const WCHAR **)&v67,
              (__int64)&v61,
              &v68,
              (__int64)v60,
              (__int64)&v62,
              (__int64)&v63,
              (__int64 *)&v71);
          }
        }
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v77,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v72);
        goto LABEL_31;
      }
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v77,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v72);
    v69 = 0LL;
    v30 = *v65;
    v69 = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v30 + 104))(
            v65,
            1LL,
            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
            &v69);
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
    v67 = 0LL;
    v83[0] = &v67;
    v83[1] = 0LL;
    LOBYTE(v84) = 1;
    v8 = CTCoAllocPolicy::Alloc(v32, 1, 0x68uLL, &v83[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v83);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v67,
        0LL);
LABEL_64:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
      goto LABEL_65;
    }
    v67->Data1 = 104;
    v67[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
    v67[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    v67[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
    v35 = v67 + 4;
    LOWORD(v67[4].Data1) = -2;
    *(GUID *)((char *)v35 + 24) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)v35[1].Data4 = 1;
    v83[0] = &v69;
    v83[1] = &v67;
    *(_QWORD *)&v84 = a3;
    *((_QWORD *)&v84 + 1) = &v74;
    FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___(
                                                                              a1,
                                                                              v35,
                                                                              v83);
    v37 = FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77;
    if ( FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18CF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v67,
        0LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v66);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
      PropVariantClear(pvar);
      v8 = v37;
      goto LABEL_69;
    }
    v38 = *v74;
    if ( *v74 )
    {
      v39 = *(_DWORD **)(a1 + 8288);
      if ( *v38 == 0xFFFE )
      {
        if ( *v39 > 4u && (unsigned __int8)tlgKeywordOn(v39, 16LL) )
        {
          v63 = *(_DWORD *)(v41 + 20);
          v71 = (const WCHAR *)(v41 + 24);
          v62 = *(_DWORD *)(v41 + 8);
          v61 = *(_DWORD *)(v41 + 4);
          v60[0] = *(_WORD *)(v41 + 2);
          v68 = L"WAVEFORMATEXTENSIBLE";
          v70 = v6;
          v73 = *(GUID **)(a1 + 48);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v40,
            (int)&unk_1801A3FE9,
            v41,
            v42,
            (const WCHAR **)&v73,
            (__int64)&v70,
            &v68,
            (__int64)v60,
            (__int64)&v61,
            (__int64)&v62,
            (__int64 *)&v71,
            (__int64)&v63);
        }
      }
      else
      {
        v82 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v82.Data1 = (unsigned __int16)*v38;
        if ( *v39 > 4u && (unsigned __int8)tlgKeywordOn(v39, 16LL) )
        {
          v73 = &v82;
          v63 = *(_DWORD *)(v44 + 8);
          v62 = *(_DWORD *)(v44 + 4);
          v60[0] = *(_WORD *)(v44 + 2);
          v71 = L"WAVEFORMATEX";
          v61 = v6;
          v68 = *(const wchar_t **)(a1 + 48);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v43,
            (int)&unk_1801A41E4,
            v44,
            v45,
            &v68,
            (__int64)&v61,
            &v71,
            (__int64)v60,
            (__int64)&v62,
            (__int64)&v63,
            (__int64 *)&v73);
        }
      }
      v46 = (void **)&v67;
      goto LABEL_47;
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v67,
      0LL);
    v68 = 0LL;
    v47 = *v69;
    v83[0] = &v68;
    v83[1] = 0LL;
    LOBYTE(v84) = 1;
    v48 = (*(__int64 (__fastcall **)(__int64 *, void **))(v47 + 32))(v69, &v83[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v83);
    if ( v48 >= 0 )
    {
      *(_OWORD *)v83 = *a3;
      v84 = a3[1];
      v85 = a3[2];
      v86 = a3[3];
      v48 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
              v49,
              v83,
              v68,
              v74);
      if ( v48 >= 0 )
      {
        v51 = *v74;
        if ( !*v74 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v68,
            0LL);
          v8 = -2004287480;
          v33 = 2290679816LL;
          v34 = 6381LL;
          goto LABEL_63;
        }
        v52 = *(_DWORD **)(a1 + 8288);
        if ( *v51 == 0xFFFE )
        {
          if ( *v52 > 4u && (unsigned __int8)tlgKeywordOn(v52, 16LL) )
          {
            v63 = *(_DWORD *)(v54 + 20);
            v73 = (GUID *)(v54 + 24);
            v62 = *(_DWORD *)(v54 + 8);
            v61 = *(_DWORD *)(v54 + 4);
            v60[0] = *(_WORD *)(v54 + 2);
            v71 = L"WAVEFORMATEXTENSIBLE";
            v70 = v6;
            *(_QWORD *)&v82.Data1 = *(_QWORD *)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v53,
              (int)&unk_1801A4134,
              v54,
              v55,
              (const WCHAR **)&v82,
              (__int64)&v70,
              &v71,
              (__int64)v60,
              (__int64)&v61,
              (__int64)&v62,
              (__int64 *)&v73,
              (__int64)&v63);
          }
        }
        else
        {
          *(GUID *)v83 = GUID_00000000_0000_0010_8000_00aa00389b71;
          LODWORD(v83[0]) = (unsigned __int16)*v51;
          if ( *v52 > 4u && (unsigned __int8)tlgKeywordOn(v52, 16LL) )
          {
            *(_QWORD *)&v82.Data1 = v83;
            v63 = *(_DWORD *)(v57 + 8);
            v62 = *(_DWORD *)(v57 + 4);
            v60[0] = *(_WORD *)(v57 + 2);
            v73 = (GUID *)L"WAVEFORMATEX";
            v61 = v6;
            v71 = *(const WCHAR **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v56,
              (int)&unk_1801A3F46,
              v57,
              v58,
              &v71,
              (__int64)&v61,
              (const WCHAR **)&v73,
              (__int64)v60,
              (__int64)&v62,
              (__int64)&v63,
              (__int64 *)&v82);
          }
        }
        v46 = (void **)&v68;
LABEL_47:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          v46,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
LABEL_31:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v66);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
        PropVariantClear(pvar);
        v8 = 0;
        goto LABEL_69;
      }
      v50 = 6367LL;
    }
    else
    {
      v50 = 6365LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v48);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v68,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v66);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
    PropVariantClear(pvar);
    v8 = v48;
    goto LABEL_69;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1888,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
LABEL_69:
  PropVariantClear(v78);
  return (unsigned int)v8;
}
