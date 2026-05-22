/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086910
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180060624 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180010E84 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z @ 0x180038B7C (-CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x180039300 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x180039D58 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800655E8 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x18006594C (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BF2C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x180073A3C (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800745AC (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??1?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@IEAA@XZ @ 0x180075EE4 (--1-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvider@@3QEBU_tl.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x180077F90 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 *     ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x1800782A8 (-CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18008268C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAXAEA_K@Z @ 0x18008B0CC (--$_Reallocate@$0A@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAXA.c)
 *     ??$_Reallocate@$00@?$vector@KV?$allocator@K@std@@@std@@AEAAXAEA_K@Z @ 0x18008B89C (--$_Reallocate@$00@-$vector@KV-$allocator@K@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800E47BC (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     _lambda_2dd88a6eb66ca801122510a4467177bc_::operator() @ 0x1800E4C0C (_lambda_2dd88a6eb66ca801122510a4467177bc_--operator().c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800EA2F8 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall LampArrayDevice::ProcessLampState(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2,
        struct Windows::UI::Color *a3,
        __int64 a4)
{
  __int64 v6; // r14
  char v7; // cl
  unsigned int v8; // eax
  char IsZero; // al
  GUID *p_ActivityId; // r9
  struct LampArrayDevice::ViewClientListEntry *v11; // rcx
  char v12; // di
  bool v13; // al
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rsi
  double v20; // xmm7_8
  __int64 v21; // rdx
  char *v22; // rbx
  int i; // edi
  __int64 v24; // rcx
  __int64 v25; // r15
  double v26; // xmm6_8
  bool v27; // al
  int j; // esi
  __int64 v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  char *v33; // r15
  struct HidLampArrayDevice *v34; // rcx
  int v35; // eax
  unsigned int v36; // ebx
  size_t v37; // rdi
  int v38; // eax
  size_t v39; // rbx
  _BYTE *v40; // rax
  _BYTE *v41; // rsi
  const struct std::nothrow_t *v42; // rdx
  __int64 v43; // r9
  const struct std::nothrow_t *v44; // rdx
  unsigned __int64 v45; // r8
  HidLampRangeUpdateReportBuilder *v46; // rcx
  int v47; // eax
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rdx
  int updated; // eax
  unsigned int v52; // esi
  const struct std::nothrow_t *v53; // rdx
  int v54; // eax
  unsigned int v55; // r8d
  unsigned int v56; // edx
  int v57; // eax
  int v58; // edx
  unsigned int v59; // r9d
  __int64 v60; // rax
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  int v63; // eax
  const struct std::nothrow_t *v64; // rdx
  int v65; // eax
  const struct std::nothrow_t *v66; // rdx
  int v67; // eax
  unsigned int v68; // ebx
  int v69; // [rsp+20h] [rbp-108h]
  int v70; // [rsp+20h] [rbp-108h]
  int v71; // [rsp+20h] [rbp-108h]
  int v72; // [rsp+20h] [rbp-108h]
  unsigned int v73; // [rsp+34h] [rbp-F4h] BYREF
  unsigned int v74; // [rsp+38h] [rbp-F0h]
  char *v75; // [rsp+40h] [rbp-E8h] BYREF
  size_t Size; // [rsp+48h] [rbp-E0h] BYREF
  int *v77; // [rsp+50h] [rbp-D8h] BYREF
  char v78; // [rsp+58h] [rbp-D0h]
  unsigned int v79; // [rsp+60h] [rbp-C8h] BYREF
  void *v80; // [rsp+68h] [rbp-C0h] BYREF
  __int128 v81; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v82; // [rsp+80h] [rbp-A8h]
  int v83; // [rsp+88h] [rbp-A0h]
  __int128 v84; // [rsp+90h] [rbp-98h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-88h]
  struct Windows::UI::Color *v86; // [rsp+A8h] [rbp-80h]
  int v87; // [rsp+B0h] [rbp-78h] BYREF
  char v88; // [rsp+B4h] [rbp-74h]
  GUID v89; // [rsp+B8h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+C8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v86 = a3;
  v6 = 0LL;
  *(_BYTE *)a3 = 0;
  v87 = 0;
  v7 = 0;
  v88 = 0;
  v8 = dword_180244248;
  if ( (unsigned int)dword_180244248 <= 5 )
  {
    v89 = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, &v89);
    ActivityId = v89;
    EventActivityIdControl(4u, &ActivityId);
    v7 = 1;
    v88 = 1;
    v8 = dword_180244248;
  }
  v87 = 1;
  if ( v8 > 5 )
  {
    if ( !v7 || (IsZero = _tlgGuidIsZero(&ActivityId), p_ActivityId = &ActivityId, IsZero) )
      p_ActivityId = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_180244248,
      byte_18020A042,
      &v89,
      p_ActivityId);
    v8 = dword_180244248;
  }
  v77 = &v87;
  v78 = 1;
  if ( a2 )
  {
    if ( v8 > 5 )
    {
      LODWORD(v75) = *((_DWORD *)a2 + 6);
      Size = (size_t)"Updating ViewClient";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_180244248,
        (__int64)&unk_18020A06F,
        (__int64)a3,
        a4,
        (const unsigned __int16 **)&Size,
        (__int64)&v75);
    }
  }
  else if ( v8 > 5 )
  {
    Size = (size_t)L"null";
    v75 = "Updating ViewClient";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&v87,
      byte_18020A0DD,
      (__int64)a3,
      a4,
      (const unsigned __int16 **)&v75,
      (const WCHAR **)&Size);
  }
  try
  {
    v11 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 13);
    if ( a2 == v11 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      if ( v11 )
      {
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v11 + 4) + 4208LL), 0);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 13) + 16LL) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL));
      }
      if ( a2 )
      {
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4208LL), 1);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 72LL))(*((_QWORD *)a2 + 2));
        *((_QWORD *)this + 13) = a2;
LABEL_21:
        if ( *(_DWORD *)(*((_QWORD *)a2 + 4) + 4100LL) )
        {
          v13 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4096LL), 0) != 0;
          if ( v12 || v13 )
          {
            if ( *((_BYTE *)this + 152) )
              goto LABEL_29;
          }
          else if ( *((_BYTE *)this + 152) )
          {
            v78 = 0;
            lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
            return 0LL;
          }
          v16 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 0);
          v17 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E6,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)(unsigned int)v16,
              v69);
            v78 = 0;
            lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
            return v17;
          }
LABEL_29:
          v74 = *(_DWORD *)(*((_QWORD *)this + 3) + 544LL);
          v18 = (int)v74;
          v19 = *((_QWORD *)a2 + 4);
          v20 = *(double *)(v19 + 4192);
          v81 = 0LL;
          v21 = 0LL;
          v82 = 0LL;
          v22 = (char *)(int)v74;
          v75 = (char *)(int)v74;
          if ( v74 )
          {
            if ( (unsigned __int64)(int)v74 > 0x3FFFFFFFFFFFFFFFLL )
              std::vector<INPUT_SPACE_PAYLOAD>::_Xlength((int)v74, 0LL, a3, a4);
            std::vector<unsigned long>::_Reallocate<1>(&v81, &v75);
            v18 = v74;
            v21 = v82;
          }
          for ( i = 0; i < (int)v18; ++i )
          {
            a3 = (struct Windows::UI::Color *)(v19 + 36LL * *(int *)(v19 + 524) + 5224 + 4LL * i);
            v24 = *((_QWORD *)&v81 + 1);
            if ( *((_QWORD *)&v81 + 1) == v21 )
            {
              std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
                (const void **)&v81,
                *((_BYTE **)&v81 + 1),
                a3,
                a4);
              v21 = v82;
            }
            else
            {
              **((_DWORD **)&v81 + 1) = *(_DWORD *)a3;
              *((_QWORD *)&v81 + 1) = v24 + 4;
            }
            v18 = (unsigned int)v22;
          }
          v25 = *(_QWORD *)(*((_QWORD *)this + 3) + 568LL);
          v84 = 0LL;
          v85 = 0LL;
          v75 = v22;
          if ( v22 )
          {
            if ( (unsigned __int64)v22 > 0x1FFFFFFFFFFFFFFFLL )
              std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(v18, v21, a3, a4);
            std::vector<LampUpdateState>::_Reallocate<0>(&v84, &v75);
            v6 = v85;
            LODWORD(v18) = v74;
          }
          v26 = *((double *)this + 20);
          v27 = v20 != v26;
          for ( j = 0; j < (int)v18; ++j )
          {
            v29 = *((_QWORD *)this + 21);
            if ( !*((_BYTE *)this + 152)
              || v27
              || *(_BYTE *)(v29 + 4LL * j) != *(_BYTE *)(v81 + 4LL * j)
              || *(_BYTE *)(v29 + 4LL * j + 1) != *(_BYTE *)(v81 + 4LL * j + 1)
              || *(_BYTE *)(v29 + 4LL * j + 2) != *(_BYTE *)(v81 + 4LL * j + 2)
              || *(_BYTE *)(v29 + 4LL * j + 3) != *(_BYTE *)(v81 + 4LL * j + 3) )
            {
              v79 = 0;
              v73 = 0;
              LOBYTE(v83) = (int)((double)*(unsigned __int8 *)(v81 + 4LL * j) * v20);
              BYTE1(v83) = (int)((double)*(unsigned __int8 *)(v81 + 4LL * j + 1) * v20);
              BYTE2(v83) = (int)((double)*(unsigned __int8 *)(v81 + 4LL * j + 2) * v20);
              HIBYTE(v83) = (int)((double)*(unsigned __int8 *)(v81 + 4LL * j + 3) * v20);
              LODWORD(v75) = v83;
              if ( *(_DWORD *)(v25 + 28) )
                NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
                  (const struct Windows::UI::Color *)&v75,
                  (const struct LampAttributes *)v25,
                  a3,
                  (struct LampColor *)&v79);
              else
                NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
                  (const struct Windows::UI::Color *)&v75,
                  (const struct LampAttributes *)v25,
                  a3,
                  (struct LampColor *)&v79);
              if ( !*((_BYTE *)this + 152) )
              {
                LOBYTE(v80) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * j) * v26);
                BYTE1(v80) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * j + 1) * v26);
                BYTE2(v80) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * j + 2) * v26);
                BYTE3(v80) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * j + 3) * v26);
                LODWORD(v75) = (_DWORD)v80;
                if ( *(_DWORD *)(v25 + 28) )
                  NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
                    (const struct Windows::UI::Color *)&v75,
                    (const struct LampAttributes *)v25,
                    a3,
                    (struct LampColor *)&v73);
                else
                  NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
                    (const struct Windows::UI::Color *)&v75,
                    (const struct LampAttributes *)v25,
                    a3,
                    (struct LampColor *)&v73);
                if ( !*((_BYTE *)this + 152) )
                {
                  v30 = v79;
LABEL_62:
                  Size = __PAIR64__(v30, j);
                  v31 = *((_QWORD *)&v84 + 1);
                  if ( *((_QWORD *)&v84 + 1) == v6 )
                  {
                    std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(
                      &v84,
                      *((_QWORD *)&v84 + 1),
                      &Size);
                    v6 = v85;
                  }
                  else
                  {
                    **((_QWORD **)&v84 + 1) = Size;
                    *((_QWORD *)&v84 + 1) = v31 + 8;
                  }
                  goto LABEL_65;
                }
              }
              v30 = v79;
              if ( (_BYTE)v79 != (_BYTE)v73
                || *(_WORD *)((char *)&v79 + 1) != *(_WORD *)((char *)&v73 + 1)
                || HIBYTE(v79) != HIBYTE(v73) )
              {
                goto LABEL_62;
              }
            }
LABEL_65:
            LODWORD(v18) = v74;
            v27 = v20 != v26;
          }
          v32 = *((_QWORD *)&v84 + 1);
          v33 = (char *)v84;
          if ( *((_QWORD *)&v84 + 1) == (_QWORD)v84 )
          {
            if ( (_QWORD)v84 )
              std::_Deallocate<16,0>((char *)v84, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v84) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
            if ( v78 )
            {
              v78 = 0;
              lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            }
            goto LABEL_71;
          }
          v73 = 0;
          v34 = (struct HidLampArrayDevice *)*((_QWORD *)this + 3);
          Size = 0LL;
          v35 = HidLampMultiUpdateReportBuilder::CreateAndInitialize(
                  v34,
                  *(_DWORD *)(*((_QWORD *)v34 + 77) + 56LL),
                  (InputContext ***)&Size);
          v36 = v35;
          if ( v35 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x44F,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v35,
              v69);
            if ( Size )
              InputContext::Release((InputContext *)Size);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x230,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)v36,
              v70);
            if ( v33 )
              std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
            if ( v78 )
            {
              v78 = 0;
              lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            }
LABEL_79:
            _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
            return v36;
          }
          v37 = Size;
          Size = 0LL;
          v38 = HidLampRangeUpdateReportBuilder::CreateAndInitialize(
                  *((struct HidLampArrayDevice **)this + 3),
                  (struct HidLampRangeUpdateReportBuilder **)&Size);
          v36 = v38;
          if ( v38 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x45E,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v38,
              v69);
            if ( Size )
              InputContext::Release((InputContext *)Size);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x233,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)v36,
              v71);
            if ( v37 )
              InputContext::Release((InputContext *)v37);
            if ( v33 )
              std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
            if ( v78 )
            {
              v78 = 0;
              lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            }
            goto LABEL_79;
          }
          v39 = Size;
          Size = (v32 - (__int64)v33) >> 3;
          v40 = operator new[](Size, (const struct std::nothrow_t *)&std::nothrow);
          v41 = v40;
          v80 = v40;
          if ( !v40 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x237,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)0x8007000ELL,
              v69);
            VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v80, v42);
            if ( v39 )
              InputContext::Release((InputContext *)v39);
            if ( v37 )
              InputContext::Release((InputContext *)v37);
            if ( v33 )
              std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
            if ( v78 )
            {
              v78 = 0;
              lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            }
            _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
            return 2147942414LL;
          }
          memset_0(v40, 0, Size);
          v43 = 0LL;
          v44 = (const struct std::nothrow_t *)*((_QWORD *)&v84 + 1);
          while ( 2 )
          {
            v74 = v43;
            v45 = (v44 - (const struct std::nothrow_t *)v33) >> 3;
            if ( (unsigned int)v43 < v45 )
            {
              if ( !*(_BYTE *)(v39 + 16) )
              {
                *(_BYTE *)(v39 + 32) = v33[8 * v43 + 4];
                *(_BYTE *)(v39 + 33) = v33[8 * v43 + 5];
                *(_BYTE *)(v39 + 34) = v33[8 * v43 + 6];
                *(_BYTE *)(v39 + 35) = v33[8 * v43 + 7];
                *(_DWORD *)(v39 + 24) = *(_DWORD *)&v33[8 * v43];
                *(_DWORD *)(v39 + 28) = *(_DWORD *)&v33[8 * v43];
                *(_BYTE *)(v39 + 16) = 1;
                goto LABEL_110;
              }
              if ( *(_DWORD *)&v33[8 * v43] != *(_DWORD *)(v39 + 28) + 1
                || v33[8 * v43 + 4] != *(_BYTE *)(v39 + 32)
                || v33[8 * v43 + 5] != *(_BYTE *)(v39 + 33)
                || v33[8 * v43 + 6] != *(_BYTE *)(v39 + 34)
                || v33[8 * v43 + 7] != *(_BYTE *)(v39 + 35) )
              {
                goto LABEL_111;
              }
              ++*(_DWORD *)(v39 + 28);
LABEL_110:
              if ( (unsigned int)v43 == ((v44 - (const struct std::nothrow_t *)v33) >> 3) - 1 )
              {
LABEL_111:
                if ( (unsigned int)HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates((HidLampRangeUpdateReportBuilder *)v39) >= *(_DWORD *)(v37 + 16) )
                {
                  v47 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v46);
                  v49 = v47 + v73;
                  v73 = v49;
                  if ( (unsigned int)v49 >= (unsigned __int64)((v50 - (__int64)v33) >> 3) )
                    *(_DWORD *)(v39 + 20) |= 1u;
                  *(_BYTE *)v86 = 1;
                  updated = HidLampArrayDevice::SendLampRangeUpdateReport(
                              *(HidLampArrayDevice **)(v39 + 40),
                              (const struct LampRangeUpdateDeviceReport *)(v39 + 20),
                              v49,
                              v48);
                  LODWORD(v75) = updated;
                  if ( updated < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x77,
                      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamp"
                                    "rangeupdatereportbuilder.cpp",
                      (const char *)(unsigned int)updated,
                      v69);
                    v52 = (unsigned int)v75;
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x253,
                      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                      (const char *)(unsigned int)v75,
                      v72);
                    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v80, v53);
                    InputContext::Release((InputContext *)v39);
                    InputContext::Release((InputContext *)v37);
                    if ( v33 )
                      std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
                    std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
                    if ( v78 )
                    {
                      v78 = 0;
                      lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
                    }
LABEL_119:
                    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
                    return v52;
                  }
                  v54 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates((HidLampRangeUpdateReportBuilder *)v39);
                  if ( v56 > v56 - v54 )
                  {
                    do
                    {
                      v41[v55] = 1;
                      v57 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates((HidLampRangeUpdateReportBuilder *)v39);
                    }
                    while ( v55 > v58 - v57 );
                  }
                  v44 = (const struct std::nothrow_t *)*((_QWORD *)&v84 + 1);
                }
                *(_OWORD *)(v39 + 20) = 0LL;
                *(_BYTE *)(v39 + 16) = 0;
              }
              v43 = (unsigned int)(v43 + 1);
              continue;
            }
            break;
          }
          v59 = v73;
          if ( v73 < v45 )
          {
            v60 = 0LL;
            while ( 1 )
            {
              v74 = v60;
              v61 = (v44 - (const struct std::nothrow_t *)v33) >> 3;
              if ( (unsigned int)v60 >= v61 )
                break;
              if ( !v41[v60] )
              {
                v62 = *(int *)(v37 + 24);
                if ( (int)v62 < *(_DWORD *)(v37 + 16) )
                {
                  *(_DWORD *)(*(_QWORD *)(v37 + 32) + 4 * v62) = *(_DWORD *)&v33[8 * v60];
                  *(_BYTE *)(*(_QWORD *)(v37 + 40) + *(int *)(v37 + 24)) = v33[8 * (unsigned int)v60 + 4];
                  *(_BYTE *)(*(_QWORD *)(v37 + 48) + *(int *)(v37 + 24)) = v33[8 * (unsigned int)v60 + 5];
                  *(_BYTE *)(*(_QWORD *)(v37 + 56) + *(int *)(v37 + 24)) = v33[8 * (unsigned int)v60 + 6];
                  *(_BYTE *)(*(_QWORD *)(v37 + 64) + (int)(*(_DWORD *)(v37 + 24))++) = v33[8 * (unsigned int)v60 + 7];
                  LODWORD(v62) = *(_DWORD *)(v37 + 24);
                  LODWORD(v60) = v74;
                }
                v73 = ++v59;
                if ( (int)v62 >= *(_DWORD *)(v37 + 16) )
                {
                  if ( v59 >= v61 )
                    *(_DWORD *)(v37 + 28) |= 1u;
                  *(_BYTE *)v86 = 1;
                  v63 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate((HidLampArrayDevice **)v37);
                  LODWORD(v75) = v63;
                  if ( v63 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x277,
                      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                      (const char *)(unsigned int)v63,
                      v69);
                    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v80, v64);
                    if ( v39 )
                      InputContext::Release((InputContext *)v39);
                    InputContext::Release((InputContext *)v37);
                    if ( v33 )
                      std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
                    std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
                    if ( v78 )
                    {
                      v78 = 0;
                      lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
                    }
                    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
                    return (unsigned int)v75;
                  }
                  HidLampMultiUpdateReportBuilder::Reset((HidLampMultiUpdateReportBuilder *)v37);
                  v59 = v73;
                  LODWORD(v60) = v74;
                }
              }
              v60 = (unsigned int)(v60 + 1);
              v44 = (const struct std::nothrow_t *)*((_QWORD *)&v84 + 1);
            }
            if ( !*(_DWORD *)(v37 + 24) )
              goto LABEL_153;
            *(_DWORD *)(v37 + 28) |= 1u;
            *(_BYTE *)v86 = 1;
            v65 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate((HidLampArrayDevice **)v37);
            v52 = v65;
            if ( v65 >= 0 )
              goto LABEL_153;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x285,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)(unsigned int)v65,
              v69);
            VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v80, v66);
            if ( v39 )
              InputContext::Release((InputContext *)v39);
            InputContext::Release((InputContext *)v37);
            if ( v33 )
              std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
            if ( v78 )
            {
              v78 = 0;
              lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
            }
            goto LABEL_119;
          }
LABEL_153:
          *((double *)this + 20) = v20;
          if ( (__int128 *)((char *)this + 168) != &v81 )
          {
            std::vector<Windows::UI::Color>::_Tidy((__int64)this + 168);
            *(_OWORD *)((char *)this + 168) = v81;
            *((_QWORD *)this + 23) = v82;
            v81 = 0LL;
            v82 = 0LL;
          }
          *((_BYTE *)this + 152) = 1;
          VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v80, v44);
          if ( v39 )
            InputContext::Release((InputContext *)v39);
          if ( v37 )
            InputContext::Release((InputContext *)v37);
          if ( v33 )
            std::_Deallocate<16,0>(v33, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v33) >> 3)));
          std::vector<Windows::UI::Color>::_Tidy((__int64)&v81);
          if ( v78 )
          {
            v78 = 0;
            lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
          }
LABEL_71:
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
          return 0LL;
        }
LABEL_164:
        if ( *((_BYTE *)this + 152)
          && (v67 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 1), v68 = v67, v67 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DC,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)(unsigned int)v67,
            v69);
          v78 = 0;
          lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
          return v68;
        }
        else
        {
          *((_BYTE *)this + 152) = 0;
          v78 = 0;
          lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(&v77);
          _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v87);
          return 0LL;
        }
      }
    }
    *((_QWORD *)this + 13) = a2;
    if ( !a2 )
      goto LABEL_164;
    goto LABEL_21;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x28F,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\la"
                                         "mparraydevice.cpp",
                           v14);
  }
  return result;
}
