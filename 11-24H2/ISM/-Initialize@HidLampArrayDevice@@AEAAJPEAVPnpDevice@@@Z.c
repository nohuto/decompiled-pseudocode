/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E9D1C
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800E9B78 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180004C38 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTemplate@$$A6.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800357D8 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180064B88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FB80 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18008272C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180085630 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180088270 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F314 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x18008F468 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x18009BEE0 (--1-$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U-$default_delete@$$BY0A@UParsedHidReportDesc.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800E6C78 (--1-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePrepars.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800E81EC (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z @ 0x1800E82F0 (-LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800E9A60 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EA834 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800EAC2C (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800EADC4 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800EB550 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z @ 0x1800EC344 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // rdi
  int InterfacePath; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PCWSTR StringRawBuffer; // rax
  char *v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // cl
  signed int v19; // eax
  __int64 v20; // rdx
  int ReportDescriptorsFromPreparsedData; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  signed int LastError; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  LampArrayTelemetry *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rcx
  size_t v39; // rax
  void *v40; // rax
  const struct std::nothrow_t *v41; // rdx
  void *v42; // rcx
  unsigned __int64 v43; // rcx
  size_t v44; // rax
  void *v45; // rax
  const struct std::nothrow_t *v46; // rdx
  void *v47; // rcx
  int v48; // ebx
  int v49; // eax
  __int64 v50; // r12
  __int64 v51; // r14
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // edi
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  unsigned int v61; // edx
  int v62; // ecx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // r9
  __int16 v69; // bx
  __int16 v70; // di
  __int16 v71; // si
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned __int64 v77; // r9
  LampArrayTelemetry *v78; // rcx
  __int16 v80; // [rsp+30h] [rbp-99h]
  struct ParsedHidReportDescriptor *v81; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v82[2]; // [rsp+68h] [rbp-61h] BYREF
  HSTRING string; // [rsp+70h] [rbp-59h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+78h] [rbp-51h] BYREF
  const char *v85; // [rsp+80h] [rbp-49h] BYREF
  UINT32 length; // [rsp+88h] [rbp-41h] BYREF
  __int128 v87; // [rsp+90h] [rbp-39h] BYREF
  __int128 v88; // [rsp+A0h] [rbp-29h]
  int v89; // [rsp+B0h] [rbp-19h]
  int v90[4]; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v91; // [rsp+C8h] [rbp-1h]
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
    v77 = (unsigned int)InterfacePath;
LABEL_88:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v77);
    goto LABEL_89;
  }
  if ( (unsigned int)dword_18024E248 > 5 )
  {
    PreparsedData = (PHIDP_PREPARSED_DATA)WindowsGetStringRawBuffer(string, 0LL);
    v81 = (struct ParsedHidReportDescriptor *)"Attempting to initialize HidLampArrayDevice";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_18024E248,
      byte_180213D35,
      v8,
      v9,
      (const unsigned __int16 **)&v81,
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
  v11 = (char *)this + 24;
  v12 = _o_wcscpy_s((char *)this + 24, 256LL, StringRawBuffer);
  if ( !v12 )
  {
    v15 = PnpDevice::OpenInterface(*v4, v13, v14);
    if ( v15 < 0 )
      goto LABEL_11;
    if ( (unsigned int)dword_18024E248 > 5 )
    {
      v81 = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
      *(_QWORD *)v82 = "Extracting HID report descriptors";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)&dword_18024E248,
        byte_180213D35,
        v16,
        v17,
        (const unsigned __int16 **)v82,
        (const WCHAR **)&v81);
    }
    PreparsedData = 0LL;
    if ( HidD_GetPreparsedData(*((HANDLE *)*v4 + 5), &PreparsedData) )
    {
      if ( *((_WORD *)PreparsedData + 5) == 89 )
      {
        if ( *((_WORD *)PreparsedData + 4) == 1 )
        {
          v81 = 0LL;
          v82[0] = 0;
          ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
                                                 v18,
                                                 (__int64)PreparsedData,
                                                 (__int64 *)&v81,
                                                 v82);
          v6 = ReportDescriptorsFromPreparsedData;
          if ( ReportDescriptorsFromPreparsedData >= 0 )
          {
            ReportDescriptorsFromPreparsedData = HidLampArrayDevice::CacheReportSizes(this, v81, v82[0]);
            v6 = ReportDescriptorsFromPreparsedData;
            if ( ReportDescriptorsFromPreparsedData >= 0 )
            {
              ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ParseReportDescriptors(this, v81, v82[0]);
              v6 = ReportDescriptorsFromPreparsedData;
              if ( ReportDescriptorsFromPreparsedData >= 0 )
              {
                std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(
                  &v81,
                  v26,
                  v27,
                  v28);
                wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
                *(_QWORD *)&Attributes.Size = 0LL;
                *(_DWORD *)&Attributes.VersionNumber = 0;
                if ( (unsigned int)dword_18024E248 > 5 )
                {
                  v81 = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
                  *(_QWORD *)v82 = "Querying HIDD_ATTRIBUTES";
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                    (__int64)&dword_18024E248,
                    byte_180213D35,
                    v29,
                    v30,
                    (const unsigned __int16 **)v82,
                    (const WCHAR **)&v81);
                }
                if ( !HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
                {
                  LastError = GetLastError();
                  v6 = LastError;
                  if ( LastError > 0 )
                    v6 = (unsigned __int16)LastError | 0x80070000;
                  LampArrayTelemetry::GetInstance(v33, v32, v34);
                  LampArrayTelemetry::LogLampArrayHidDeviceAttributesFailure(
                    v35,
                    v6,
                    (const unsigned __int16 *)this + 12);
                  goto LABEL_89;
                }
                *((_WORD *)this + 269) = Attributes.VendorID;
                *((_WORD *)this + 270) = Attributes.ProductID;
                *((_WORD *)this + 271) = Attributes.VersionNumber;
                if ( (unsigned int)dword_18024E248 > 5 )
                {
                  v81 = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
                  *(_QWORD *)v82 = "Querying LampArrayAttributesReport";
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                    (__int64)&dword_18024E248,
                    byte_180213D35,
                    v36,
                    v37,
                    (const unsigned __int16 **)v82,
                    (const WCHAR **)&v81);
                }
                *(_OWORD *)v90 = 0LL;
                v91 = 0LL;
                InterfacePath = HidLampArrayDevice::ReceiveLampArrayAttributesReport(
                                  this,
                                  (struct LampArrayAttributesDeviceReport *)v90);
                v6 = InterfacePath;
                if ( InterfacePath < 0 )
                {
                  v7 = 110LL;
                  goto LABEL_84;
                }
                v38 = v90[0];
                *((_DWORD *)this + 136) = v90[0];
                *((_DWORD *)this + 137) = v90[1];
                *((_DWORD *)this + 138) = v90[2];
                *((_DWORD *)this + 139) = v90[3];
                *((_QWORD *)this + 70) = v91;
                v39 = 36 * v38;
                if ( !is_mul_ok(v38, 0x24uLL) )
                  v39 = -1LL;
                v40 = operator new[](v39, (const struct std::nothrow_t *)&std::nothrow);
                v42 = (void *)*((_QWORD *)this + 71);
                *((_QWORD *)this + 71) = v40;
                if ( v42 )
                  operator delete(v42, v41);
                if ( *((_QWORD *)this + 71) )
                {
                  v43 = *((int *)this + 136);
                  v44 = 4 * v43;
                  if ( !is_mul_ok(v43, 4uLL) )
                    v44 = -1LL;
                  v45 = operator new[](v44, (const struct std::nothrow_t *)&std::nothrow);
                  v47 = (void *)*((_QWORD *)this + 72);
                  *((_QWORD *)this + 72) = v45;
                  if ( v47 )
                    operator delete(v47, v46);
                  if ( *((_QWORD *)this + 72) )
                  {
                    v48 = 0;
                    v49 = *((_DWORD *)this + 136);
                    if ( v49 > 0 )
                    {
                      v50 = 0LL;
                      v51 = 0LL;
                      while ( 1 )
                      {
                        if ( (unsigned int)dword_18024E248 > 5 )
                        {
                          v82[0] = v49;
                          LODWORD(v81) = v48;
                          v85 = (const char *)WindowsGetStringRawBuffer(string, 0LL);
                          *(_QWORD *)v90 = "Sending LampAttributesRequest";
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                            v52,
                            (__int64)&unk_180213E1D,
                            v53,
                            v54,
                            (const unsigned __int16 **)v90,
                            (const WCHAR **)&v85,
                            (__int64)&v81,
                            (__int64)v82);
                        }
                        v55 = HidLampArrayDevice::SendLampAttributesRequest(this, v48);
                        if ( v55 < 0 )
                          break;
                        if ( (unsigned int)dword_18024E248 > 5 )
                        {
                          LODWORD(v81) = *((_DWORD *)this + 136);
                          v82[0] = v48;
                          *(_QWORD *)v90 = WindowsGetStringRawBuffer(string, 0LL);
                          v85 = "Requesting LampAttributesReport";
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                            v56,
                            (__int64)&unk_180213E1D,
                            v57,
                            v58,
                            (const unsigned __int16 **)&v85,
                            (const WCHAR **)v90,
                            (__int64)v82,
                            (__int64)&v81);
                        }
                        v87 = 0LL;
                        v88 = 0LL;
                        v89 = 0;
                        v55 = HidLampArrayDevice::ReceiveLampAttributesReport(
                                this,
                                v48,
                                (struct LampAttributesResponseDeviceReport *)&v87);
                        if ( v55 < 0 )
                        {
                          v73 = 144LL;
                          goto LABEL_81;
                        }
                        if ( (_DWORD)v87 != v48 )
                        {
                          LampArrayTelemetry::GetInstance((unsigned int)v87, v59, v60);
                          v69 = *((_WORD *)this + 271);
                          v70 = *((_WORD *)this + 270);
                          v71 = *((_WORD *)this + 269);
                          std::string::string(
                            v90,
                            "LampArrayAttributesReport: lamp ID does not match most recent request");
                          v80 = v69;
                          v6 = -2089418751;
                          LampArrayTelemetry::LogLampArrayHidReportFailure(
                            v72,
                            (__int64)v90,
                            2205548545LL,
                            (__int64)v11,
                            v71,
                            v70,
                            v80);
                          std::string::~string((__int64)v90);
                          v7 = 157LL;
                          goto LABEL_87;
                        }
                        *(_OWORD *)(v51 + *((_QWORD *)this + 71)) = v87;
                        *(_DWORD *)(v51 + *((_QWORD *)this + 71) + 16) = v88;
                        *(_DWORD *)(v51 + *((_QWORD *)this + 71) + 24) = v89;
                        *(_DWORD *)(v51 + *((_QWORD *)this + 71) + 28) = DWORD2(v88);
                        *(_DWORD *)(v51 + *((_QWORD *)this + 71) + 20) = DWORD1(v88);
                        v61 = 0;
                        v82[0] = 0;
                        if ( *((_DWORD *)this + 140) == 1 )
                        {
                          HidUsageConverter::KeyboardHidUsageToVKey(
                            WORD6(v88),
                            (struct LampAttributes *)(*((_QWORD *)this + 71) + 36LL * v48),
                            v82);
                          v61 = v82[0];
                        }
                        else if ( *((_DWORD *)this + 140) == 2 )
                        {
                          if ( WORD6(v88) >= 6u )
                            v62 = 0;
                          else
                            v62 = dword_180204620[WORD6(v88)];
                          *(_DWORD *)(v51 + *((_QWORD *)this + 71) + 32) = v62;
                        }
                        else
                        {
                          *(_DWORD *)(v51 + *((_QWORD *)this + 71) + 32) = 0;
                        }
                        *(_DWORD *)(v50 + *((_QWORD *)this + 72)) = v61;
                        ++v48;
                        v51 += 36LL;
                        v50 += 4LL;
                        v49 = *((_DWORD *)this + 136);
                        if ( v48 >= v49 )
                          goto LABEL_73;
                      }
                      v73 = 136LL;
LABEL_81:
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v73,
                        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                        (const char *)(unsigned int)v55);
                      v6 = v55;
                      goto LABEL_89;
                    }
LABEL_73:
                    if ( (unsigned int)dword_18024E248 > 5 )
                    {
                      *(_QWORD *)v90 = WindowsGetStringRawBuffer(string, 0LL);
                      v85 = "Successfully parsed device data";
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                        (__int64)&dword_18024E248,
                        byte_180213D35,
                        v63,
                        v64,
                        (const unsigned __int16 **)&v85,
                        (const WCHAR **)v90);
                      if ( (unsigned int)dword_18024E248 > 5 )
                      {
                        *(_QWORD *)v90 = WindowsGetStringRawBuffer(string, 0LL);
                        v85 = "Setting device to known-good-state.";
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                          (__int64)&dword_18024E248,
                          byte_180213D35,
                          v65,
                          v66,
                          (const unsigned __int16 **)&v85,
                          (const WCHAR **)v90);
                      }
                    }
                    InterfacePath = HidLampArrayDevice::SetAutonomousMode(this, 1);
                    v6 = InterfacePath;
                    if ( InterfacePath >= 0 )
                    {
                      *(_OWORD *)v90 = 0LL;
                      v90[0] = 1;
                      v90[2] = *((_DWORD *)this + 136) - 1;
                      InterfacePath = HidLampArrayDevice::SendLampRangeUpdateReport(
                                        this,
                                        (const struct LampRangeUpdateDeviceReport *)v90,
                                        v67,
                                        v68);
                      v6 = InterfacePath;
                      if ( InterfacePath >= 0 )
                      {
                        LampArrayTelemetry::GetInstance(v75, v74, v76);
                        LampArrayTelemetry::LogLampArrayDeviceAdded(
                          v78,
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
                      v7 = 207LL;
                    }
                    else
                    {
                      v7 = 201LL;
                    }
                    goto LABEL_84;
                  }
                  v6 = -2147024882;
                  v7 = 127LL;
                }
                else
                {
                  v6 = -2147024882;
                  v7 = 124LL;
                }
LABEL_87:
                v77 = v6;
                goto LABEL_88;
              }
              v22 = 84LL;
            }
            else
            {
              v22 = 81LL;
            }
          }
          else
          {
            v22 = 78LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)ReportDescriptorsFromPreparsedData);
          std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(
            &v81,
            v23,
            v24,
            v25);
          goto LABEL_21;
        }
        v6 = -2147024890;
        v20 = 73LL;
      }
      else
      {
        v6 = -2147024890;
        v20 = 72LL;
      }
    }
    else
    {
      v19 = GetLastError();
      v6 = v19;
      if ( v19 > 0 )
        v6 = (unsigned __int16)v19 | 0x80070000;
      if ( (v6 & 0x80000000) == 0 )
        goto LABEL_21;
      v20 = 71LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v6);
LABEL_21:
    wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
    goto LABEL_89;
  }
  v15 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x3D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)v12);
LABEL_11:
  v6 = v15;
LABEL_89:
  WindowsDeleteString(string);
  return v6;
}
