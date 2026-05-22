/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180060434 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800043CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800045AC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z @ 0x18003560C (-CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x180035D90 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800367E8 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180064B88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x180065358 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800656BC (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x180069408 (-CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BD5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x18007376C (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800742DC (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x180074548 (-IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ??1?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@IEAA@XZ @ 0x180075C24 (--1-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvider@@3QEBU_tl.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x180077C20 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 *     ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x180077F48 (-CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18008272C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAXAEA_K@Z @ 0x18008B890 (--$_Reallocate@$0A@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAXA.c)
 *     ??$_Reallocate@$00@?$vector@KV?$allocator@K@std@@@std@@AEAAXAEA_K@Z @ 0x18008C060 (--$_Reallocate@$00@-$vector@KV-$allocator@K@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetInstanceId@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800E5560 (-GetInstanceId@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800E5C2C (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     _lambda_587ef53c84617e0761e1b198e15c72f6_::operator() @ 0x1800E607C (_lambda_587ef53c84617e0761e1b198e15c72f6_--operator().c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800EB550 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall LampArrayDevice::ProcessLampState(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2,
        const WCHAR *a3)
{
  __int64 v5; // r14
  char v6; // al
  unsigned int v7; // ecx
  char IsZero; // al
  GUID *p_ActivityId; // r9
  PnpDevice *v10; // rbx
  int InstanceId; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rcx
  HidLampMultiUpdateReportBuilder *StringRawBuffer; // rbx
  _DWORD *v16; // r8
  __int64 v17; // r9
  struct LampArrayDevice::ViewClientListEntry *v18; // rcx
  char v19; // si
  __int64 v20; // rcx
  bool v21; // al
  const char *v22; // r9
  int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rsi
  double v27; // xmm7_8
  __int64 v28; // rdx
  char *v29; // rbx
  int i; // edi
  __int64 v31; // rcx
  __int64 v32; // r15
  double v33; // xmm6_8
  bool v34; // al
  int j; // esi
  __int64 v36; // rdi
  struct Windows::UI::Color *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rsi
  char *v40; // r15
  struct HidLampArrayDevice *v41; // rcx
  int v42; // eax
  unsigned int v43; // ebx
  HidLampMultiUpdateReportBuilder *v44; // rbx
  int v45; // eax
  unsigned int v46; // edi
  HidLampMultiUpdateReportBuilder *v47; // rdi
  _BYTE *v48; // rax
  _BYTE *v49; // rsi
  const struct std::nothrow_t *v50; // rdx
  size_t k; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  HidLampRangeUpdateReportBuilder *v55; // rcx
  int v56; // eax
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  int updated; // eax
  unsigned int v61; // esi
  const struct std::nothrow_t *v62; // rdx
  int v63; // eax
  unsigned int v64; // r8d
  HidLampRangeUpdateReportBuilder *v65; // r9
  unsigned int v66; // edx
  int v67; // eax
  int v68; // edx
  unsigned __int64 m; // rax
  unsigned __int64 v70; // r10
  int v71; // r11d
  unsigned int v72; // r11d
  int v73; // eax
  const struct std::nothrow_t *v74; // rdx
  int v75; // eax
  const struct std::nothrow_t *v76; // rdx
  int v77; // eax
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int v80; // edi
  int v81; // [rsp+20h] [rbp-148h]
  int v82; // [rsp+20h] [rbp-148h]
  int v83; // [rsp+20h] [rbp-148h]
  int v84; // [rsp+20h] [rbp-148h]
  HSTRING string; // [rsp+48h] [rbp-120h] BYREF
  unsigned int v87; // [rsp+50h] [rbp-118h] BYREF
  char *v88; // [rsp+58h] [rbp-110h] BYREF
  HidLampMultiUpdateReportBuilder *v89; // [rsp+60h] [rbp-108h] BYREF
  int v90[2]; // [rsp+68h] [rbp-100h] BYREF
  int *v91; // [rsp+70h] [rbp-F8h] BYREF
  char v92; // [rsp+78h] [rbp-F0h]
  unsigned int v93; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v94[12]; // [rsp+84h] [rbp-E4h] BYREF
  __int128 v95; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-C8h]
  WCHAR *v97; // [rsp+A8h] [rbp-C0h] BYREF
  size_t Size; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v99; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-A0h]
  const char *v101; // [rsp+D0h] [rbp-98h] BYREF
  const WCHAR *v102; // [rsp+D8h] [rbp-90h] BYREF
  const WCHAR *v103; // [rsp+E0h] [rbp-88h] BYREF
  int v104; // [rsp+E8h] [rbp-80h] BYREF
  char v105; // [rsp+ECh] [rbp-7Ch]
  GUID v106; // [rsp+F0h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+100h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v97 = (WCHAR *)a3;
  v5 = 0LL;
  *(_BYTE *)a3 = 0;
  v104 = 0;
  v6 = 0;
  v105 = 0;
  v7 = dword_18024E248;
  if ( (unsigned int)dword_18024E248 <= 5 )
  {
    v106 = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, &v106);
    ActivityId = v106;
    EventActivityIdControl(4u, &ActivityId);
    v6 = 1;
    v105 = 1;
    v7 = dword_18024E248;
  }
  v104 = 1;
  if ( v7 > 5 )
  {
    if ( !v6 || (IsZero = _tlgGuidIsZero(&ActivityId), p_ActivityId = &ActivityId, IsZero) )
      p_ActivityId = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_18024E248,
      byte_180213717,
      &v106,
      p_ActivityId);
  }
  string = 0LL;
  v10 = (PnpDevice *)*((_QWORD *)this + 2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InstanceId = PnpDevice::GetInstanceId(v10, &string);
  v12 = InstanceId;
  if ( InstanceId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)InstanceId,
      v81);
    WindowsDeleteString(string);
    string = 0LL;
    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
    return v12;
  }
  StringRawBuffer = (HidLampMultiUpdateReportBuilder *)WindowsGetStringRawBuffer(string, 0LL);
  v91 = &v104;
  v92 = 1;
  if ( a2 )
  {
    if ( (unsigned int)dword_18024E248 > 5 )
    {
      v89 = StringRawBuffer;
      LODWORD(v88) = *((_DWORD *)a2 + 6);
      *(_QWORD *)v90 = "Updating ViewClient";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (unsigned int)v88,
        (__int64)&unk_18021367E,
        (__int64)v16,
        v17,
        (const unsigned __int16 **)v90,
        (__int64)&v88,
        (const WCHAR **)&v89);
    }
  }
  else if ( (unsigned int)dword_18024E248 > 5 )
  {
    v89 = StringRawBuffer;
    v88 = (char *)L"null";
    *(_QWORD *)v90 = "Updating ViewClient";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v14,
      (__int64)&unk_18021362F,
      (__int64)v16,
      v17,
      (const unsigned __int16 **)v90,
      (const WCHAR **)&v88,
      (const WCHAR **)&v89);
  }
  try
  {
    v18 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 13);
    if ( a2 == v18 )
    {
      v19 = 0;
    }
    else
    {
      v19 = 1;
      if ( v18 )
      {
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v18 + 4) + 4208LL), 0);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 13) + 16LL) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL));
        if ( (unsigned int)dword_18024E248 > 5 )
        {
          v103 = (const WCHAR *)StringRawBuffer;
          v87 = *(_DWORD *)(*((_QWORD *)this + 13) + 24LL);
          v101 = "ViewClient losing availability";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v87,
            (__int64)&unk_18021367E,
            (__int64)v16,
            v17,
            (const unsigned __int16 **)&v101,
            (__int64)&v87,
            &v103);
        }
      }
      if ( a2 )
      {
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4208LL), 1);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 72LL))(*((_QWORD *)a2 + 2));
        if ( (unsigned int)dword_18024E248 > 5 )
        {
          v102 = (const WCHAR *)StringRawBuffer;
          *(_DWORD *)v94 = *((_DWORD *)a2 + 6);
          Size = (size_t)"ViewClient gaining availability";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v20,
            (__int64)&unk_18021367E,
            (__int64)v16,
            v17,
            (const unsigned __int16 **)&Size,
            (__int64)v94,
            &v102);
        }
        *((_QWORD *)this + 13) = a2;
        goto LABEL_26;
      }
    }
    *((_QWORD *)this + 13) = a2;
    if ( !a2 )
    {
LABEL_162:
      if ( *((_BYTE *)this + 152) )
      {
        v77 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 1);
        v80 = v77;
        if ( v77 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F2,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)(unsigned int)v77,
            v81);
          v92 = 0;
          lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
          WindowsDeleteString(string);
          string = 0LL;
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
          return v80;
        }
        if ( (unsigned int)dword_18024E248 > 5 )
        {
          v97 = (WCHAR *)StringRawBuffer;
          v89 = (HidLampMultiUpdateReportBuilder *)"LampArray entering autonomous mode";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
            (__int64)&dword_18024E248,
            byte_1802136CD,
            v78,
            v79,
            (const unsigned __int16 **)&v89,
            (const WCHAR **)&v97);
        }
      }
      *((_BYTE *)this + 152) = 0;
      v92 = 0;
      lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
      WindowsDeleteString(string);
      string = 0LL;
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
      return 0LL;
    }
LABEL_26:
    if ( *(_DWORD *)(*((_QWORD *)a2 + 4) + 4100LL) )
    {
      v21 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4096LL), 0) != 0;
      if ( v19 || v21 )
      {
        if ( *((_BYTE *)this + 152) )
          goto LABEL_36;
      }
      else if ( *((_BYTE *)this + 152) )
      {
        v92 = 0;
        lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
        WindowsDeleteString(string);
        string = 0LL;
        _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
        return 0LL;
      }
      v23 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 0);
      v24 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          (const char *)(unsigned int)v23,
          v81);
        v92 = 0;
        lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
        WindowsDeleteString(string);
        string = 0LL;
        _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
        return v24;
      }
      if ( (unsigned int)dword_18024E248 > 5 )
      {
        v88 = (char *)StringRawBuffer;
        *(_QWORD *)v90 = "LampArray leaving autonomous mode";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          (__int64)&dword_18024E248,
          byte_1802136CD,
          (__int64)v16,
          v17,
          (const unsigned __int16 **)v90,
          (const WCHAR **)&v88);
      }
LABEL_36:
      v90[0] = *(_DWORD *)(*((_QWORD *)this + 3) + 544LL);
      v25 = v90[0];
      v26 = *((_QWORD *)a2 + 4);
      v27 = *(double *)(v26 + 4192);
      v95 = 0LL;
      v28 = 0LL;
      v96 = 0LL;
      v29 = (char *)v90[0];
      v88 = (char *)v90[0];
      if ( v90[0] )
      {
        if ( (unsigned __int64)v90[0] > 0x3FFFFFFFFFFFFFFFLL )
          std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(v90[0], 0LL, v16, v17);
        std::vector<unsigned long>::_Reallocate<1>(&v95, &v88);
        v25 = (unsigned int)v29;
        v28 = v96;
      }
      for ( i = 0; i < (int)v25; ++i )
      {
        v16 = (_DWORD *)(v26 + 36LL * *(int *)(v26 + 524) + 5224 + 4LL * i);
        v31 = *((_QWORD *)&v95 + 1);
        if ( *((_QWORD *)&v95 + 1) == v28 )
        {
          std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
            (const void **)&v95,
            *((_BYTE **)&v95 + 1),
            v16,
            v17);
          v28 = v96;
        }
        else
        {
          **((_DWORD **)&v95 + 1) = *v16;
          *((_QWORD *)&v95 + 1) = v31 + 4;
        }
        v25 = (unsigned int)v29;
      }
      v32 = *(_QWORD *)(*((_QWORD *)this + 3) + 568LL);
      v99 = 0LL;
      v100 = 0LL;
      v88 = v29;
      if ( v29 )
      {
        if ( (unsigned __int64)v29 > 0x1FFFFFFFFFFFFFFFLL )
          std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(v25, v28, v16, v17);
        std::vector<LampUpdateState>::_Reallocate<0>(&v99, &v88);
        v5 = v100;
        LODWORD(v25) = v90[0];
      }
      v33 = *((double *)this + 20);
      v34 = v27 != v33;
      for ( j = 0; j < (int)v25; ++j )
      {
        v36 = *((_QWORD *)this + 21);
        if ( !*((_BYTE *)this + 152)
          || v34
          || *(_BYTE *)(v36 + 4LL * j) != *(_BYTE *)(v95 + 4LL * j)
          || *(_BYTE *)(v36 + 4LL * j + 1) != *(_BYTE *)(v95 + 4LL * j + 1)
          || *(_BYTE *)(v36 + 4LL * j + 2) != *(_BYTE *)(v95 + 4LL * j + 2)
          || *(_BYTE *)(v36 + 4LL * j + 3) != *(_BYTE *)(v95 + 4LL * j + 3) )
        {
          v93 = 0;
          *(_DWORD *)&v94[4] = 0;
          v94[0] = (int)((double)*(unsigned __int8 *)(v95 + 4LL * j) * v27);
          v94[1] = (int)((double)*(unsigned __int8 *)(v95 + 4LL * j + 1) * v27);
          v94[2] = (int)((double)*(unsigned __int8 *)(v95 + 4LL * j + 2) * v27);
          *(_DWORD *)&v94[3] = (unsigned __int8)(int)((double)*(unsigned __int8 *)(v95 + 4LL * j + 3) * v27);
          LODWORD(v88) = *(_DWORD *)v94;
          if ( *(_DWORD *)(v32 + 28) )
            NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
              (const struct Windows::UI::Color *)&v88,
              (const struct LampAttributes *)v32,
              0LL,
              (struct LampColor *)&v93);
          else
            NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
              (const struct Windows::UI::Color *)&v88,
              (const struct LampAttributes *)v32,
              0LL,
              (struct LampColor *)&v93);
          if ( !*((_BYTE *)this + 152) )
          {
            LOBYTE(v87) = (int)((double)*(unsigned __int8 *)(v36 + 4LL * j) * v33);
            BYTE1(v87) = (int)((double)*(unsigned __int8 *)(v36 + 4LL * j + 1) * v33);
            BYTE2(v87) = (int)((double)*(unsigned __int8 *)(v36 + 4LL * j + 2) * v33);
            HIBYTE(v87) = (int)((double)*(unsigned __int8 *)(v36 + 4LL * j + 3) * v33);
            LODWORD(v88) = v87;
            if ( *(_DWORD *)(v32 + 28) )
              NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
                (const struct Windows::UI::Color *)&v88,
                (const struct LampAttributes *)v32,
                v37,
                (struct LampColor *)&v94[4]);
            else
              NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
                (const struct Windows::UI::Color *)&v88,
                (const struct LampAttributes *)v32,
                v37,
                (struct LampColor *)&v94[4]);
          }
          if ( !*((_BYTE *)this + 152)
            || (_BYTE)v93 != v94[4]
            || *(_WORD *)((char *)&v93 + 1) != *(_WORD *)&v94[5]
            || HIBYTE(v93) != v94[7] )
          {
            v89 = (HidLampMultiUpdateReportBuilder *)__PAIR64__(v93, j);
            v38 = *((_QWORD *)&v99 + 1);
            if ( *((_QWORD *)&v99 + 1) == v5 )
            {
              std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(&v99, *((_QWORD *)&v99 + 1), &v89);
              v5 = v100;
            }
            else
            {
              **((_QWORD **)&v99 + 1) = v89;
              *((_QWORD *)&v99 + 1) = v38 + 8;
            }
          }
          LODWORD(v25) = v90[0];
        }
        v34 = v27 != v33;
      }
      v39 = *((_QWORD *)&v99 + 1);
      v40 = (char *)v99;
      if ( *((_QWORD *)&v99 + 1) == (_QWORD)v99 )
      {
        if ( (_QWORD)v99 )
          std::_Deallocate<16,0>((char *)v99, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v99) >> 3)));
        std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
        if ( !v92 )
          goto LABEL_77;
      }
      else
      {
        v90[0] = 0;
        v41 = (struct HidLampArrayDevice *)*((_QWORD *)this + 3);
        v89 = 0LL;
        v42 = HidLampMultiUpdateReportBuilder::CreateAndInitialize(
                v41,
                *(_DWORD *)(*((_QWORD *)v41 + 77) + 56LL),
                (InputContext ***)&v89);
        v43 = v42;
        if ( v42 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3FA,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v42,
            v81);
          if ( v89 )
            InputContext::Release(v89);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24C,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)v43,
            v82);
          if ( v40 )
            std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
          std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
          if ( v92 )
          {
            v92 = 0;
            lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
          }
          WindowsDeleteString(string);
          string = 0LL;
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
          return v43;
        }
        v44 = v89;
        v89 = 0LL;
        v45 = HidLampRangeUpdateReportBuilder::CreateAndInitialize(*((struct HidLampArrayDevice **)this + 3), &v89);
        v46 = v45;
        if ( v45 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x409,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v45,
            v81);
          if ( v89 )
            InputContext::Release(v89);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)v46,
            v83);
          if ( v44 )
            InputContext::Release(v44);
          if ( v40 )
            std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
          std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
          if ( v92 )
          {
            v92 = 0;
            lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
          }
          WindowsDeleteString(string);
          string = 0LL;
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
          return v46;
        }
        v47 = v89;
        Size = (v39 - (__int64)v40) >> 3;
        v48 = operator new[](Size, (const struct std::nothrow_t *)&std::nothrow);
        v49 = v48;
        *(_QWORD *)&v94[4] = v48;
        if ( !v48 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x253,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)0x8007000ELL,
            v81);
          VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v94[4], v50);
          if ( v47 )
            InputContext::Release(v47);
          if ( v44 )
            InputContext::Release(v44);
          if ( v40 )
            std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
          std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
          if ( v92 )
          {
            v92 = 0;
            lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
          }
          WindowsDeleteString(string);
          string = 0LL;
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
          return 2147942414LL;
        }
        memset_0(v48, 0, Size);
        for ( k = 0LL; ; k = v87 + 1 )
        {
          v87 = k;
          v52 = *((_QWORD *)&v99 + 1);
          v53 = (__int64)(*((_QWORD *)&v99 + 1) - (_QWORD)v40) >> 3;
          v89 = (HidLampMultiUpdateReportBuilder *)v53;
          Size = k;
          if ( k >= v53 )
            break;
          if ( HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(v47, (struct LampUpdateState *)&v40[8 * k]) )
          {
            if ( *((_BYTE *)v47 + 16) )
            {
              ++*((_DWORD *)v47 + 7);
            }
            else
            {
              *((_BYTE *)v47 + 32) = *(_BYTE *)(v54 + 4);
              *((_BYTE *)v47 + 33) = *(_BYTE *)(v54 + 5);
              *((_BYTE *)v47 + 34) = *(_BYTE *)(v54 + 6);
              *((_BYTE *)v47 + 35) = *(_BYTE *)(v54 + 7);
              *((_DWORD *)v47 + 6) = *(_DWORD *)v54;
              *((_DWORD *)v47 + 7) = *(_DWORD *)v54;
              *((_BYTE *)v47 + 16) = 1;
            }
            if ( (HidLampMultiUpdateReportBuilder *)Size != (HidLampMultiUpdateReportBuilder *)((char *)v89 - 1) )
              continue;
          }
          if ( (unsigned int)HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v47) >= *((_DWORD *)v44 + 4) )
          {
            v56 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v55);
            v90[0] += v56;
            if ( (unsigned int)v90[0] >= v59 )
              *((_DWORD *)v47 + 5) |= 1u;
            *(_BYTE *)v97 = 1;
            updated = HidLampArrayDevice::SendLampRangeUpdateReport(
                        *((HidLampArrayDevice **)v47 + 5),
                        (HidLampMultiUpdateReportBuilder *)((char *)v47 + 20),
                        v57,
                        v58);
            LODWORD(v88) = updated;
            if ( updated < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x77,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeu"
                              "pdatereportbuilder.cpp",
                (const char *)(unsigned int)updated,
                v81);
              v61 = (unsigned int)v88;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x26F,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                (const char *)(unsigned int)v88,
                v84);
              VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v94[4], v62);
              InputContext::Release(v47);
              InputContext::Release(v44);
              if ( v40 )
                std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
              std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
              if ( v92 )
                goto LABEL_120;
              goto LABEL_121;
            }
            v63 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v47);
            if ( v66 > v66 - v63 )
            {
              do
              {
                v49[v64] = 1;
                v67 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v65);
              }
              while ( v64 > v68 - v67 );
            }
          }
          *(_OWORD *)((char *)v47 + 20) = 0LL;
          *((_BYTE *)v47 + 16) = 0;
        }
        if ( (unsigned int)v90[0] < v53 )
        {
          for ( m = 0LL; ; m = (unsigned int)((_DWORD)v88 + 1) )
          {
            LODWORD(v88) = m;
            if ( m >= (v52 - (__int64)v40) >> 3 )
              break;
            if ( !v49[m] )
            {
              HidLampMultiUpdateReportBuilder::IncludeInNextUpdate(v44, (struct LampUpdateState *)&v40[8 * m]);
              v72 = v71 + 1;
              v90[0] = v72;
              if ( *((_DWORD *)v44 + 6) >= *((_DWORD *)v44 + 4) )
              {
                if ( v72 >= v70 )
                  *((_DWORD *)v44 + 7) |= 1u;
                *(_BYTE *)v97 = 1;
                v73 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate((HidLampArrayDevice **)v44);
                v87 = v73;
                if ( v73 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x293,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                    (const char *)(unsigned int)v73,
                    v81);
                  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v94[4], v74);
                  if ( v47 )
                    InputContext::Release(v47);
                  InputContext::Release(v44);
                  if ( v40 )
                    std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
                  std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
                  if ( v92 )
                  {
                    v92 = 0;
                    lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
                  }
                  WindowsDeleteString(string);
                  string = 0LL;
                  _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
                  return v87;
                }
                HidLampMultiUpdateReportBuilder::Reset(v44);
              }
              v52 = *((_QWORD *)&v99 + 1);
            }
          }
          if ( !*((_DWORD *)v44 + 6) )
            goto LABEL_152;
          *((_DWORD *)v44 + 7) |= 1u;
          *(_BYTE *)v97 = 1;
          v75 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate((HidLampArrayDevice **)v44);
          v61 = v75;
          if ( v75 >= 0 )
            goto LABEL_152;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2A1,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)(unsigned int)v75,
            v81);
          VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v94[4], v76);
          if ( v47 )
            InputContext::Release(v47);
          InputContext::Release(v44);
          if ( v40 )
            std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
          std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
          if ( v92 )
          {
LABEL_120:
            v92 = 0;
            lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
          }
LABEL_121:
          WindowsDeleteString(string);
          string = 0LL;
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
          return v61;
        }
LABEL_152:
        *((double *)this + 20) = v27;
        if ( (__int128 *)((char *)this + 168) != &v95 )
        {
          std::vector<Windows::UI::Color>::_Tidy((__int64)this + 168);
          *(_OWORD *)((char *)this + 168) = v95;
          *((_QWORD *)this + 23) = v96;
          v95 = 0LL;
          v96 = 0LL;
        }
        *((_BYTE *)this + 152) = 1;
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
          (void **)&v94[4],
          (const struct std::nothrow_t *)v53);
        if ( v47 )
          InputContext::Release(v47);
        if ( v44 )
          InputContext::Release(v44);
        if ( v40 )
          std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)(8 * ((v5 - (__int64)v40) >> 3)));
        std::vector<Windows::UI::Color>::_Tidy((__int64)&v95);
        if ( !v92 )
          goto LABEL_77;
      }
      v92 = 0;
      lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(&v91);
LABEL_77:
      WindowsDeleteString(string);
      string = 0LL;
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v104);
      return 0LL;
    }
    goto LABEL_162;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2AB,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\la"
                                         "mparraydevice.cpp",
                           v22);
  }
  return result;
}
