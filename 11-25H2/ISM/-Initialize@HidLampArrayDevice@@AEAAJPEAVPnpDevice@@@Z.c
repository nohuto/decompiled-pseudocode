/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800E86A8 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180004834 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTemplate@$$A6.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x180038D48 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FE50 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18008268C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800879FC (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008EC94 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x18009BD30 (--1-$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U-$default_delete@$$BY0A@UParsedHidReportDesc.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800E44E0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800E5808 (--1-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePrepars.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800E6D7C (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z @ 0x1800E6E80 (-LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800E8590 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800E954C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800E9944 (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800E9AF0 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800EA2F8 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z @ 0x1800EB144 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // rdi
  int InterfacePath; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PCWSTR StringRawBuffer; // rax
  char *v12; // r15
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  char v20; // cl
  signed int v21; // eax
  __int64 v22; // rdx
  int ReportDescriptorsFromPreparsedData; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rax
  __int64 v36; // rdx
  signed int LastError; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LampArrayTelemetry *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  size_t v46; // rax
  void *v47; // rax
  const struct std::nothrow_t *v48; // rdx
  void *v49; // rcx
  unsigned __int64 v50; // rcx
  size_t v51; // rax
  void *v52; // rax
  const struct std::nothrow_t *v53; // rdx
  void *v54; // rcx
  int v55; // ebx
  __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  int v62; // edi
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int16 v71; // bx
  __int16 v72; // di
  __int16 v73; // si
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int64 v87; // r9
  LampArrayTelemetry *v88; // rcx
  __int16 v90; // [rsp+30h] [rbp-99h]
  struct ParsedHidReportDescriptor *v91; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v92[2]; // [rsp+68h] [rbp-61h] BYREF
  HSTRING string; // [rsp+70h] [rbp-59h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+78h] [rbp-51h] BYREF
  const char *v95; // [rsp+80h] [rbp-49h] BYREF
  UINT32 length; // [rsp+88h] [rbp-41h] BYREF
  __int128 v97; // [rsp+90h] [rbp-39h] BYREF
  __int128 v98; // [rsp+A0h] [rbp-29h]
  int v99; // [rsp+B0h] [rbp-19h]
  int v100[4]; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v101; // [rsp+C8h] [rbp-1h]
  _HIDD_ATTRIBUTES Attributes; // [rsp+D8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v4 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((InputContext **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)a2, &string);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v7 = 53LL;
LABEL_84:
    v87 = (unsigned int)InterfacePath;
LABEL_88:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v87);
    goto LABEL_89;
  }
  if ( (unsigned int)dword_180244248 > 5 )
  {
    PreparsedData = (PHIDP_PREPARSED_DATA)WindowsGetStringRawBuffer(string, 0LL);
    v91 = (struct ParsedHidReportDescriptor *)"Attempting to initialize HidLampArrayDevice";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v8,
      byte_18020A6E6,
      v9,
      v10,
      (const unsigned __int16 **)&v91,
      (const WCHAR **)&PreparsedData);
  }
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*StringRawBuffer )
  {
    v6 = -2147024809;
    v7 = 59LL;
    goto LABEL_87;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v7 = 60LL;
    goto LABEL_87;
  }
  v12 = (char *)this + 24;
  v13 = _o_wcscpy_s((char *)this + 24, 256LL, StringRawBuffer);
  if ( !v13 )
  {
    v14 = PnpDevice::OpenInterface(*v4);
    if ( v14 < 0 )
      goto LABEL_11;
    LOBYTE(v15) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      v15);
    if ( (unsigned int)dword_180244248 > 5 )
    {
      v91 = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
      *(_QWORD *)v92 = "Extracting HID report descriptors";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v16,
        byte_18020A6E6,
        v17,
        v18,
        (const unsigned __int16 **)v92,
        (const WCHAR **)&v91);
    }
    PreparsedData = 0LL;
    v19 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)*v4 + 40);
    if ( HidD_GetPreparsedData(v19, &PreparsedData) )
    {
      if ( *((_WORD *)PreparsedData + 5) == 89 )
      {
        if ( *((_WORD *)PreparsedData + 4) == 1 )
        {
          v91 = 0LL;
          v92[0] = 0;
          ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
                                                 v20,
                                                 (__int64)PreparsedData,
                                                 (__int64 *)&v91,
                                                 v92);
          v6 = ReportDescriptorsFromPreparsedData;
          if ( ReportDescriptorsFromPreparsedData >= 0 )
          {
            ReportDescriptorsFromPreparsedData = HidLampArrayDevice::CacheReportSizes(this, v91, v92[0]);
            v6 = ReportDescriptorsFromPreparsedData;
            if ( ReportDescriptorsFromPreparsedData >= 0 )
            {
              ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ParseReportDescriptors(this, v91, v92[0]);
              v6 = ReportDescriptorsFromPreparsedData;
              if ( ReportDescriptorsFromPreparsedData >= 0 )
              {
                std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(
                  &v91,
                  v28,
                  v29,
                  v30);
                wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
                *(_QWORD *)&Attributes.Size = 0LL;
                *(_DWORD *)&Attributes.VersionNumber = 0;
                LOBYTE(v31) = 1;
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
                  &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
                  v31);
                if ( (unsigned int)dword_180244248 > 5 )
                {
                  v91 = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
                  *(_QWORD *)v92 = "Querying HIDD_ATTRIBUTES";
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                    v32,
                    byte_18020A6E6,
                    v33,
                    v34,
                    (const unsigned __int16 **)v92,
                    (const WCHAR **)&v91);
                }
                v35 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)*v4 + 40);
                if ( !HidD_GetAttributes(v35, &Attributes) )
                {
                  LastError = GetLastError();
                  v6 = LastError;
                  if ( LastError > 0 )
                    v6 = (unsigned __int16)LastError | 0x80070000;
                  LampArrayTelemetry::GetInstance(v39, v38, v40);
                  LampArrayTelemetry::LogLampArrayHidDeviceAttributesFailure(
                    v41,
                    v6,
                    (const unsigned __int16 *)this + 12);
                  goto LABEL_89;
                }
                *((_WORD *)this + 269) = Attributes.VendorID;
                *((_WORD *)this + 270) = Attributes.ProductID;
                *((_WORD *)this + 271) = Attributes.VersionNumber;
                LOBYTE(v36) = 1;
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
                  &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
                  v36);
                if ( (unsigned int)dword_180244248 > 5 )
                {
                  v91 = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
                  *(_QWORD *)v92 = "Querying LampArrayAttributesReport";
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                    v42,
                    byte_18020A6E6,
                    v43,
                    v44,
                    (const unsigned __int16 **)v92,
                    (const WCHAR **)&v91);
                }
                *(_OWORD *)v100 = 0LL;
                v101 = 0LL;
                InterfacePath = HidLampArrayDevice::ReceiveLampArrayAttributesReport(
                                  this,
                                  (struct LampArrayAttributesDeviceReport *)v100);
                v6 = InterfacePath;
                if ( InterfacePath < 0 )
                {
                  v7 = 123LL;
                  goto LABEL_84;
                }
                v45 = v100[0];
                *((_DWORD *)this + 136) = v100[0];
                *((_DWORD *)this + 137) = v100[1];
                *((_DWORD *)this + 138) = v100[2];
                *((_DWORD *)this + 139) = v100[3];
                *((_QWORD *)this + 70) = v101;
                v46 = 36 * v45;
                if ( !is_mul_ok(v45, 0x24uLL) )
                  v46 = -1LL;
                v47 = operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
                v49 = (void *)*((_QWORD *)this + 71);
                *((_QWORD *)this + 71) = v47;
                if ( v49 )
                  operator delete(v49, v48);
                if ( *((_QWORD *)this + 71) )
                {
                  v50 = *((int *)this + 136);
                  v51 = 4 * v50;
                  if ( !is_mul_ok(v50, 4uLL) )
                    v51 = -1LL;
                  v52 = operator new[](v51, (const struct std::nothrow_t *)&std::nothrow);
                  v54 = (void *)*((_QWORD *)this + 72);
                  *((_QWORD *)this + 72) = v52;
                  if ( v54 )
                    operator delete(v54, v53);
                  if ( *((_QWORD *)this + 72) )
                  {
                    v55 = 0;
                    v56 = 0LL;
                    v57 = 0LL;
                    while ( v55 < *((_DWORD *)this + 136) )
                    {
                      LOBYTE(v53) = 1;
                      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
                        &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
                        v53);
                      if ( (unsigned int)dword_180244248 > 5 )
                      {
                        v92[0] = *((_DWORD *)this + 136);
                        LODWORD(v91) = v55;
                        v95 = (const char *)WindowsGetStringRawBuffer(string, 0LL);
                        *(_QWORD *)v100 = "Sending LampAttributesRequest";
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                          v58,
                          (__int64)&unk_18020A72B,
                          v59,
                          v60,
                          (const unsigned __int16 **)v100,
                          (const WCHAR **)&v95,
                          (__int64)&v91,
                          (__int64)v92);
                      }
                      v62 = HidLampArrayDevice::SendLampAttributesRequest(this, v55);
                      if ( v62 < 0 )
                      {
                        v75 = 152LL;
                        goto LABEL_76;
                      }
                      LOBYTE(v61) = 1;
                      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
                        &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
                        v61);
                      if ( (unsigned int)dword_180244248 > 5 )
                      {
                        LODWORD(v91) = *((_DWORD *)this + 136);
                        v92[0] = v55;
                        *(_QWORD *)v100 = WindowsGetStringRawBuffer(string, 0LL);
                        v95 = "Requesting LampAttributesReport";
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                          v63,
                          (__int64)&unk_18020A72B,
                          v64,
                          v65,
                          (const unsigned __int16 **)&v95,
                          (const WCHAR **)v100,
                          (__int64)v92,
                          (__int64)&v91);
                      }
                      v97 = 0LL;
                      v98 = 0LL;
                      v99 = 0;
                      v62 = HidLampArrayDevice::ReceiveLampAttributesReport(
                              this,
                              v55,
                              (struct LampAttributesResponseDeviceReport *)&v97);
                      if ( v62 < 0 )
                      {
                        v75 = 163LL;
LABEL_76:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v75,
                          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                          (const char *)(unsigned int)v62);
                        v6 = v62;
                        goto LABEL_89;
                      }
                      if ( (_DWORD)v97 != v55 )
                      {
                        LOBYTE(v66) = 1;
                        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
                          &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
                          v66);
                        LampArrayTelemetry::GetInstance(v69, v68, v70);
                        v71 = *((_WORD *)this + 271);
                        v72 = *((_WORD *)this + 270);
                        v73 = *((_WORD *)this + 269);
                        std::string::string(
                          v100,
                          "LampArrayAttributesReport: lamp ID does not match most recent request");
                        v90 = v71;
                        v6 = -2089418751;
                        LampArrayTelemetry::LogLampArrayHidReportFailure(
                          v74,
                          (__int64)v100,
                          2205548545LL,
                          (__int64)v12,
                          v73,
                          v72,
                          v90);
                        std::string::~string((__int64)v100);
                        v7 = 179LL;
                        goto LABEL_87;
                      }
                      *(_OWORD *)(v57 + *((_QWORD *)this + 71)) = v97;
                      *(_DWORD *)(*((_QWORD *)this + 71) + v57 + 16) = v98;
                      *(_DWORD *)(*((_QWORD *)this + 71) + v57 + 24) = v99;
                      *(_DWORD *)(*((_QWORD *)this + 71) + v57 + 28) = DWORD2(v98);
                      *(_DWORD *)(*((_QWORD *)this + 71) + v57 + 20) = DWORD1(v98);
                      v53 = 0LL;
                      v92[0] = 0;
                      if ( *((_DWORD *)this + 140) == 1 )
                      {
                        HidUsageConverter::KeyboardHidUsageToVKey(
                          WORD6(v98),
                          (struct LampAttributes *)(*((_QWORD *)this + 71) + 36LL * v55),
                          v92);
                        v53 = (const struct std::nothrow_t *)v92[0];
                      }
                      else if ( *((_DWORD *)this + 140) == 2 )
                      {
                        if ( WORD6(v98) >= 6u )
                          v67 = 0;
                        else
                          v67 = dword_1801FBC98[WORD6(v98)];
                        *(_DWORD *)(*((_QWORD *)this + 71) + v57 + 32) = v67;
                      }
                      else
                      {
                        *(_DWORD *)(*((_QWORD *)this + 71) + v57 + 32) = 0;
                      }
                      *(_DWORD *)(v56 + *((_QWORD *)this + 72)) = (_DWORD)v53;
                      ++v55;
                      v57 += 36LL;
                      v56 += 4LL;
                    }
                    if ( (unsigned int)dword_180244248 > 5 )
                    {
                      *(_QWORD *)v100 = WindowsGetStringRawBuffer(string, 0LL);
                      v95 = "Successfully parsed device data";
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                        v76,
                        byte_18020A6E6,
                        v77,
                        v78,
                        (const unsigned __int16 **)&v95,
                        (const WCHAR **)v100);
                      if ( (unsigned int)dword_180244248 > 5 )
                      {
                        *(_QWORD *)v100 = WindowsGetStringRawBuffer(string, 0LL);
                        v95 = "Setting device to known-good-state.";
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                          v79,
                          byte_18020A6E6,
                          v80,
                          v81,
                          (const unsigned __int16 **)&v95,
                          (const WCHAR **)v100);
                      }
                    }
                    InterfacePath = HidLampArrayDevice::SetAutonomousMode(this, 1);
                    v6 = InterfacePath;
                    if ( InterfacePath >= 0 )
                    {
                      *(_OWORD *)v100 = 0LL;
                      v100[0] = 1;
                      v100[2] = *((_DWORD *)this + 136) - 1;
                      InterfacePath = HidLampArrayDevice::SendLampRangeUpdateReport(
                                        this,
                                        (const struct LampRangeUpdateDeviceReport *)v100,
                                        v82,
                                        v83);
                      v6 = InterfacePath;
                      if ( InterfacePath >= 0 )
                      {
                        LampArrayTelemetry::GetInstance(v85, v84, v86);
                        LampArrayTelemetry::LogLampArrayDeviceAdded(
                          v88,
                          (const unsigned __int16 *)this + 12,
                          *((unsigned __int16 *)this + 269),
                          *((unsigned __int16 *)this + 270),
                          *((_WORD *)this + 271),
                          *((_DWORD *)this + 136),
                          *((_DWORD *)this + 137),
                          *((_DWORD *)this + 138),
                          *((_DWORD *)this + 139),
                          *((_DWORD *)this + 140),
                          *((_DWORD *)this + 141));
                        *((_BYTE *)this + 645) = 1;
                        WindowsDeleteString(string);
                        return 0LL;
                      }
                      v7 = 229LL;
                    }
                    else
                    {
                      v7 = 223LL;
                    }
                    goto LABEL_84;
                  }
                  v6 = -2147024882;
                  v7 = 140LL;
                }
                else
                {
                  v6 = -2147024882;
                  v7 = 137LL;
                }
LABEL_87:
                v87 = v6;
                goto LABEL_88;
              }
              v24 = 87LL;
            }
            else
            {
              v24 = 84LL;
            }
          }
          else
          {
            v24 = 81LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)ReportDescriptorsFromPreparsedData);
          std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(
            &v91,
            v25,
            v26,
            v27);
          goto LABEL_21;
        }
        v6 = -2147024890;
        v22 = 76LL;
      }
      else
      {
        v6 = -2147024890;
        v22 = 75LL;
      }
    }
    else
    {
      v21 = GetLastError();
      v6 = v21;
      if ( v21 > 0 )
        v6 = (unsigned __int16)v21 | 0x80070000;
      if ( (v6 & 0x80000000) == 0 )
        goto LABEL_21;
      v22 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v6);
LABEL_21:
    wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
    goto LABEL_89;
  }
  v14 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x3D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)v13);
LABEL_11:
  v6 = v14;
LABEL_89:
  WindowsDeleteString(string);
  return v6;
}
