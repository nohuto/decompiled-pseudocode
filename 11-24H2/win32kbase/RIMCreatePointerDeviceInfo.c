/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1401DECF0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x140001A28 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     RIMGetDeviceLocationInfo @ 0x1400A5D6C (RIMGetDeviceLocationInfo.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114D9C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMInitializeDeadzone @ 0x140124D60 (RIMInitializeDeadzone.c)
 *     RIMGetDeviceParent @ 0x140127E30 (RIMGetDeviceParent.c)
 *     RIMGetPropertyCount @ 0x14012A434 (RIMGetPropertyCount.c)
 *     RIMAssignTouchType @ 0x14013B048 (RIMAssignTouchType.c)
 *     RIMGetProductString @ 0x14013B8BC (RIMGetProductString.c)
 *     RIMIsDeviceExcluded @ 0x14014C940 (RIMIsDeviceExcluded.c)
 *     RIMComputeSpecificHighMetricValue @ 0x140150B60 (RIMComputeSpecificHighMetricValue.c)
 *     ApiSetRetrieveCalibrationData @ 0x140155EE4 (ApiSetRetrieveCalibrationData.c)
 *     RIMIsInputUsagePresent @ 0x14015C1CC (RIMIsInputUsagePresent.c)
 *     RIMCheckPressureUsageStatus @ 0x14017CA80 (RIMCheckPressureUsageStatus.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017CAC0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMIsEssentialUsage @ 0x14017D14C (RIMIsEssentialUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimSetupPalmTelemetry @ 0x1401DE868 (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1401E03EC (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1401E05C8 (RIMGetDeviceButtons.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1401E8BF0 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F19DC (RIMCmAllocPointerDeviceContacts.c)
 *     RIMRetrieveNormalizationRange @ 0x1401F1EDC (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1401F27AC (RIMValidatePTPProperties.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        const WCHAR *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6,
        __int64 a7)
{
  struct _HIDP_PREPARSED_DATA *v7; // rsi
  __int64 v9; // r14
  struct _HIDP_CAPS *v10; // r13
  __int64 v11; // rbx
  char v13; // si
  bool v14; // r14
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int16 Usage; // cx
  __int64 v23; // rcx
  BOOL v24; // r15d
  __int64 v25; // rcx
  CTouchProcessor *v26; // rcx
  char v27; // si
  bool v28; // r14
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // esi
  __int64 v33; // r8
  int v34; // r14d
  int v35; // ecx
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  struct _HIDP_PREPARSED_DATA *v41; // rsi
  NTSTATUS SpecificValueCaps; // eax
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _DWORD *v51; // rax
  __int64 v52; // rcx
  struct _HIDP_VALUE_CAPS *v53; // r15
  NTSTATUS v54; // eax
  int v55; // r10d
  BOOL v56; // eax
  __int64 v57; // rax
  int v58; // edx
  int v59; // r8d
  __int64 v60; // r8
  struct _HIDP_VALUE_CAPS *v61; // rdx
  unsigned int v62; // r13d
  unsigned int v63; // r9d
  __int64 v64; // rcx
  __int64 v65; // xmm0_8
  unsigned int v66; // eax
  __m128i *p_HasNull; // r14
  __int64 v68; // r8
  unsigned __int16 v69; // r13
  int v70; // eax
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __m128i v74; // xmm1
  __m128i v75; // xmm0
  __m128i v76; // xmm1
  __m128i v77; // xmm5
  __int64 v78; // xmm0_8
  __m128i v79; // xmm2
  __m128i v80; // xmm3
  __m128i v81; // xmm4
  __m128i v82; // xmm5
  __int64 v83; // xmm0_8
  __m128i v84; // xmm2
  __m128i v85; // xmm3
  __m128i v86; // xmm4
  bool v87; // cf
  int v88; // eax
  __int64 v89; // xmm0_8
  int v90; // eax
  char v91; // r14
  bool v92; // r12
  __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  int v96; // edx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // eax
  struct _HIDP_PREPARSED_DATA *v101; // r12
  char v102; // r14
  bool v103; // r12
  __int64 v104; // rax
  int v105; // r8d
  int v106; // edx
  __int64 v107; // rdx
  __int64 v108; // xmm0_8
  int v109; // edx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // edx
  const wchar_t *v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // edx
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 *v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 **v125; // rdx
  struct _DEVICE_OBJECT *v126; // rcx
  char v127; // bl
  bool v128; // di
  __int64 v129; // rax
  int v130; // r8d
  int v131; // edx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v133; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v134; // [rsp+48h] [rbp-B8h]
  struct _HIDP_CAPS *v135; // [rsp+50h] [rbp-B0h] BYREF
  struct _FILE_OBJECT *v136; // [rsp+58h] [rbp-A8h] BYREF
  bool v137; // [rsp+60h] [rbp-A0h]
  __int128 v138; // [rsp+70h] [rbp-90h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+80h] [rbp-80h]
  const WCHAR *v140; // [rsp+88h] [rbp-78h] BYREF
  __int64 v141; // [rsp+90h] [rbp-70h]
  const WCHAR *v142; // [rsp+98h] [rbp-68h] BYREF
  int v143; // [rsp+A0h] [rbp-60h]
  int v144; // [rsp+A4h] [rbp-5Ch]
  struct _UNICODE_STRING v145; // [rsp+B0h] [rbp-50h] BYREF
  struct _DEVICE_OBJECT *v146; // [rsp+C0h] [rbp-40h]
  __m128i v147; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v148; // [rsp+E0h] [rbp-20h]
  __m128i v149; // [rsp+F0h] [rbp-10h]
  __m128i v150; // [rsp+100h] [rbp+0h]
  __int64 v151; // [rsp+110h] [rbp+10h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+120h] [rbp+20h] BYREF
  struct _HIDP_VALUE_CAPS v153[2]; // [rsp+170h] [rbp+70h] BYREF

  v7 = a3;
  v9 = a1;
  v143 = -1;
  v144 = -1;
  PreparsedData = a3;
  v10 = (struct _HIDP_CAPS *)a4;
  v141 = a1;
  v146 = a5;
  v136 = a6;
  *(_QWORD *)&v138 = a7;
  ValueCapsLength[0] = 0;
  v135 = (struct _HIDP_CAPS *)a4;
  memset(v153, 0, sizeof(v153));
  v133 = 0;
  v134 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v11 = Win32AllocPoolZInitImpl(256LL, 0x510uLL, 0x63707352u);
  if ( !v11 )
    return 3221225628LL;
  *(_DWORD *)(v11 + 776) = 1;
  *(_QWORD *)(v11 + 928) = v11 + 920;
  *(_QWORD *)(v11 + 920) = v11 + 920;
  if ( (int)RIMGetProductString(v11, a5, a6, (struct RIMDEV *)a2) < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        14,
        (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
    }
    if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
    {
      v18 = *(_DWORD *)(a2 + 48);
      *(_QWORD *)&v145.Length = L"Failed to retrieve productString";
      v142 = *(const WCHAR **)(a2 + 200);
      v140 = RimDeviceTypeToRimInputTypeString(a2, v18);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v19,
        (__int64)&unk_140277D6D,
        v20,
        v21,
        &v140,
        &v142,
        (const WCHAR **)&v145);
    }
    v7 = PreparsedData;
    v9 = v141;
  }
  if ( (int)RIMGetDeviceLocationInfo((__int64)a5, a2 + 2120) < 0 )
  {
    *(_DWORD *)&v145.Length = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 337);
  }
  Usage = v10->Usage;
  v145 = *(struct _UNICODE_STRING *)(v11 + 376);
  if ( !RIMIsDeviceExcluded(Usage, &v145) )
  {
    v23 = *(unsigned int *)(v9 + 84);
    v24 = 1;
    if ( (v23 & 4) != 0 )
    {
      if ( v10->Usage == 2 )
      {
        *(_DWORD *)(v11 + 24) = 5;
        rimSetupPalmTelemetry(v9);
        if ( (int)RIMInitializeDeadzone(v25) < 0 )
        {
          v26 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v27 = 0;
          }
          v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v30) = v28;
            LOBYTE(v31) = v27;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v31,
              v30,
              *(_QWORD *)(v29 + 19392),
              3,
              1,
              15,
              (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
          }
          *(_DWORD *)(W32GetUserSessionState(v26) + 244) = 1;
        }
        goto LABEL_58;
      }
      if ( v10->Usage == 1 )
      {
        *(_DWORD *)(v11 + 24) = 6;
        v24 = !RIMIsRunningOnDesktop(v23);
        goto LABEL_49;
      }
    }
    if ( (v23 & 0x18) == 0 || (unsigned __int16)(v10->Usage - 4) > 1u )
    {
      if ( (v23 & 0x20) == 0 )
        goto LABEL_53;
      v40 = (*(_DWORD *)(a2 + 168) & 0x10000) == 0;
LABEL_52:
      if ( !v40 )
        goto LABEL_58;
LABEL_53:
      v32 = -1073741808;
LABEL_54:
      if ( *(_QWORD *)(v11 + 792) )
      {
        v134 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 884);
      }
      RIMFreePointerDevice(v141);
      return (unsigned int)v32;
    }
    *(_DWORD *)(v11 + 24) = 1;
    v32 = RIMAssignTouchType(v11, v7);
    v34 = 0;
    if ( v32 == -1073741668 )
      goto LABEL_164;
    if ( v10->Usage == 5 )
    {
      v134 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = 7;
    }
    v35 = *(_DWORD *)(v141 + 84);
    if ( (v35 & 4) != 0 && (unsigned int)(*(_DWORD *)(v11 + 24) - 5) <= 1 )
      v24 = 0;
    if ( (v35 & 8) != 0 && *(_DWORD *)(v11 + 24) == 7 )
      v24 = 0;
    if ( ((v35 & 0x10) == 0 || (unsigned int)(*(_DWORD *)(v11 + 24) - 1) > 3) && v24 )
    {
LABEL_49:
      v40 = v24;
      goto LABEL_52;
    }
    v32 = RIMGetMaxCountFeatureDetails((struct RIMDEV *)a2, v141, v11, PreparsedData, v10, v146, v136);
    if ( v32 == -1073741668 )
    {
      if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
      {
        v36 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v138 = L"Failed to get max count feature details";
        v136 = *(struct _FILE_OBJECT **)(a2 + 200);
        v135 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v36);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v37,
          (__int64)&unk_140277D6D,
          v38,
          v39,
          (const WCHAR **)&v135,
          (const WCHAR **)&v136,
          (const WCHAR **)&v138);
      }
      goto LABEL_54;
    }
  }
LABEL_58:
  v41 = PreparsedData;
  ValueCapsLength[0] = 1;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
  {
    if ( ValueCaps.LogicalMin >= ValueCaps.LogicalMax || ValueCaps.LogicalMin < 0 || ValueCaps.LogicalMax < 0xFFFF )
    {
      if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
      {
        v47 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v138 = L"Bad ScanTime minimum";
        v136 = *(struct _FILE_OBJECT **)(a2 + 200);
        v135 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v47);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v48,
          (__int64)&unk_140277D6D,
          v49,
          v50,
          (const WCHAR **)&v135,
          (const WCHAR **)&v136,
          (const WCHAR **)&v138);
      }
LABEL_71:
      v32 = -1073741668;
      goto LABEL_54;
    }
    *(_DWORD *)(v11 + 368) |= 0x80u;
    *(_DWORD *)(v11 + 896) = ValueCaps.LogicalMax;
  }
  ValueCapsLength[0] = 0;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v11 + 784), 0, 0LL, ValueCapsLength, v41);
  v32 = SpecificValueCaps;
  if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
  {
    v51 = (_DWORD *)(v11 + 32);
    v52 = 6LL;
    do
    {
      *v51 = -1;
      v51 += 4;
      --v52;
    }
    while ( v52 );
    v34 = 0;
    if ( (int)RIMCmAllocPointerDeviceContacts(v11, 2020635474LL) < 0 )
      goto LABEL_164;
    if ( (*(_DWORD *)(v11 + 368) & 2) == 0
      || !*(_WORD *)(*(_QWORD *)(v11 + 768) + 8LL)
      || (v133 = 2,
          v32 = HidP_GetSpecificValueCaps(
                  HidP_Input,
                  0,
                  *(_WORD *)(*(_QWORD *)(v11 + 768) + 8LL),
                  0,
                  v153,
                  &v133,
                  PreparsedData),
          v32 >= 0) )
    {
      *(_DWORD *)&v145.Length = ValueCapsLength[0] + v133;
      v53 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *(unsigned int *)&v145.Length, 0x78707352u);
      v34 = 0;
      if ( !v53 )
        goto LABEL_164;
      v54 = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v11 + 784), 0, v53, ValueCapsLength, PreparsedData);
      v55 = 0;
      v32 = v54;
      if ( v54 < 0 )
        goto LABEL_163;
      if ( (*(_DWORD *)(v11 + 368) & 2) == 0 )
      {
        v56 = RIMGetPropertyCount(v11, *(_WORD *)(v11 + 784), ValueCapsLength[0], PreparsedData);
        v55 = 0;
        if ( !v56 )
        {
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
          {
            LOBYTE(v34) = 1;
          }
          v137 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v57 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v58) = v34;
            LOBYTE(v59) = v137;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v58,
              v59,
              *(_QWORD *)(v57 + 19392),
              3,
              1,
              16,
              (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
            v55 = 0;
          }
        }
      }
      if ( v133 )
      {
        v60 = ValueCapsLength[0];
        v61 = v153;
        v62 = *(_DWORD *)&v145.Length;
        v63 = 0;
        do
        {
          if ( (unsigned int)v60 >= v62 )
            break;
          v64 = v60;
          ++v63;
          v60 = (unsigned int)(v60 + 1);
          *(_OWORD *)&v53[v64].UsagePage = *(_OWORD *)&v61->UsagePage;
          *(_OWORD *)&v53[v64].HasNull = *(_OWORD *)&v61->HasNull;
          *(_OWORD *)&v53[v64].UnitsExp = *(_OWORD *)&v61->UnitsExp;
          *(_OWORD *)&v53[v64].PhysicalMin = *(_OWORD *)&v61->PhysicalMin;
          v65 = *(_QWORD *)&v61->NotRange.DesignatorIndex;
          ++v61;
          *(_QWORD *)&v53[v64].NotRange.DesignatorIndex = v65;
        }
        while ( v63 < 2 );
        v10 = v135;
      }
      v66 = 0;
      LODWORD(v142) = 0;
      LODWORD(v140) = 0;
      if ( *(_DWORD *)&v145.Length )
      {
        p_HasNull = (__m128i *)&v53->HasNull;
        while ( 1 )
        {
          v68 = 4LL;
          if ( v66 >= 6 )
            break;
          if ( *(_DWORD *)(v11 + 24) == 4 && !p_HasNull->m128i_i8[0] )
          {
            v32 = -1073741668;
            break;
          }
          v69 = v10->Usage;
          if ( v69 == 2 )
            v69 = 1;
          v70 = RIMIsEssentialUsage(p_HasNull[-1].m128i_i16[0], p_HasNull[2].m128i_i16[4], v69);
          v55 = 0;
          if ( v70 )
          {
            v71 = (unsigned int)v140;
            v72 = 60LL * (unsigned int)v140;
            v73 = 16LL * (unsigned int)v140;
            *(_WORD *)(v72 + v11 + 408) = p_HasNull[-1].m128i_i16[0];
            *(_WORD *)(60 * (v71 + 7) + v11) = p_HasNull[2].m128i_i16[4];
            *(_DWORD *)(v72 + v11 + 412) = p_HasNull[-1].m128i_u8[2];
            *(_WORD *)(v72 + v11 + 418) = p_HasNull[-1].m128i_i16[5];
            *(_DWORD *)(v72 + v11 + 424) = p_HasNull->m128i_u8[0];
            *(_DWORD *)(v72 + v11 + 440) = p_HasNull[1].m128i_i32[2];
            *(_DWORD *)(v72 + v11 + 444) = p_HasNull[1].m128i_i32[3];
            *(_DWORD *)(v72 + v11 + 448) = p_HasNull[2].m128i_i32[0];
            *(_DWORD *)(v72 + v11 + 452) = p_HasNull[2].m128i_i32[1];
            *(_WORD *)(v72 + v11 + 464) = p_HasNull->m128i_i16[1];
            *(_DWORD *)(v11 + 16 * (v71 + 2)) = v71;
            *(_WORD *)(v73 + v11 + 28) = p_HasNull[-1].m128i_i16[0];
            *(_WORD *)(v73 + v11 + 30) = p_HasNull[2].m128i_i16[4];
            LODWORD(v72) = p_HasNull[2].m128i_u16[4];
            v74 = *p_HasNull;
            v147 = p_HasNull[-1];
            v75 = p_HasNull[1];
            v148 = v74;
            v76 = p_HasNull[2];
            v149 = v75;
            v151 = p_HasNull[3].m128i_i64[0];
            v150 = v76;
            RIMRetrieveNormalizationRange(v147.m128i_u16[0], v72, v69, (unsigned int)&v147, v11 + v73 + 36);
            LODWORD(v140) = (_DWORD)v140 + 1;
            if ( p_HasNull[2].m128i_i16[4] == 48 && p_HasNull[-1].m128i_i16[0] == 1 )
            {
              v77 = p_HasNull[2];
              v78 = p_HasNull[3].m128i_i64[0];
              v79 = p_HasNull[-1];
              v143 = (int)v142;
              v80 = *p_HasNull;
              v81 = p_HasNull[1];
              v151 = v78;
              v147 = v79;
              v148 = v80;
              v149 = v81;
              v150 = v77;
              *(_DWORD *)(v11 + 148) = RIMComputeSpecificHighMetricValue(
                                         _mm_cvtsi128_si32(_mm_srli_si128(v77, 4)) - _mm_cvtsi128_si32(v77),
                                         (__int64)&v147)
                                     + 1;
              *(_DWORD *)(v11 + 124) = p_HasNull[1].m128i_i32[2];
              *(_DWORD *)(v11 + 132) = p_HasNull[1].m128i_i32[3] + 1;
            }
            if ( p_HasNull[2].m128i_i16[4] == 49 && p_HasNull[-1].m128i_i16[0] == 1 )
            {
              v82 = p_HasNull[2];
              v83 = p_HasNull[3].m128i_i64[0];
              v84 = p_HasNull[-1];
              v144 = (int)v142;
              v85 = *p_HasNull;
              v86 = p_HasNull[1];
              v151 = v83;
              v147 = v84;
              v148 = v85;
              v149 = v86;
              v150 = v82;
              *(_DWORD *)(v11 + 152) = RIMComputeSpecificHighMetricValue(
                                         _mm_cvtsi128_si32(_mm_srli_si128(v82, 4)) - _mm_cvtsi128_si32(v82),
                                         (__int64)&v147)
                                     + 1;
              *(_DWORD *)(v11 + 128) = p_HasNull[1].m128i_i32[2];
              *(_DWORD *)(v11 + 136) = p_HasNull[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v141, v11, p_HasNull[-1].m128i_i16[0], p_HasNull[2].m128i_i16[4], v69);
            v55 = 0;
          }
          p_HasNull = (__m128i *)((char *)p_HasNull + 72);
          v10 = v135;
          v87 = (unsigned int)((_DWORD)v142 + 1) < *(_DWORD *)&v145.Length;
          LODWORD(v142) = (_DWORD)v142 + 1;
          v66 = (unsigned int)v140;
          if ( !v87 )
            goto LABEL_112;
        }
      }
      else
      {
LABEL_112:
        v68 = 4LL;
      }
      *(_DWORD *)(v11 + 780) = v66;
      v34 = 0;
      if ( v32 < 0 )
      {
LABEL_163:
        GreDeleteFastMutex((char *)v53);
        goto LABEL_164;
      }
      if ( v143 == -1 || v144 == -1 )
      {
        if ( (unsigned int)dword_14029AE68 <= 5 || !tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
          goto LABEL_162;
        v118 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v138 = L"coordinate usage missing";
        v136 = *(struct _FILE_OBJECT **)(a2 + 200);
        v114 = RimDeviceTypeToRimInputTypeString(a2, v118);
      }
      else
      {
        if ( v53[v143].LogicalMax != v53[v143].LogicalMin && v53[v144].LogicalMax != v53[v144].LogicalMin )
        {
          v88 = *(_DWORD *)(v11 + 24);
          if ( v88 == 7 )
          {
            v108 = *(_QWORD *)v138;
            DWORD2(v138) = *(_DWORD *)(v138 + 8);
            *(_QWORD *)&v138 = v108;
            v34 = 0;
            if ( (int)RIMApiSetValidateDeviceSignature(v146, v136, PreparsedData, v10, v11, (__int64 *)&v138) < 0 )
            {
              v32 = -1073741668;
              if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
              {
                v109 = *(_DWORD *)(a2 + 48);
                *(_QWORD *)&v138 = L"Failed to validate device signature";
                v136 = *(struct _FILE_OBJECT **)(a2 + 200);
                v135 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v109);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                  v110,
                  (__int64)&unk_140277D6D,
                  v111,
                  v112,
                  (const WCHAR **)&v135,
                  (const WCHAR **)&v136,
                  (const WCHAR **)&v138);
              }
              goto LABEL_163;
            }
          }
          else if ( v88 != 6 && v10->Usage == 4 )
          {
            v89 = *(_QWORD *)v138;
            DWORD2(v138) = *(_DWORD *)(v138 + 8);
            *(_QWORD *)&v138 = v89;
            v90 = RIMApiSetValidateDeviceSignature(v146, v136, PreparsedData, v10, v11, (__int64 *)&v138);
            v68 = 0LL;
            if ( v90 < 0 )
            {
              v32 = -1073741668;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v91 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v91 = 0;
              }
              v92 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v91 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v93 = W32GetUserSessionState(WPP_GLOBAL_Control);
                LOBYTE(v94) = v92;
                LOBYTE(v95) = v91;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v95,
                  v94,
                  *(_QWORD *)(v93 + 19392),
                  3,
                  1,
                  17,
                  (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
              }
              if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
              {
                v96 = *(_DWORD *)(a2 + 48);
                *(_QWORD *)&v138 = L"Failed to validate device signature";
                v136 = *(struct _FILE_OBJECT **)(a2 + 200);
                v135 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v96);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                  v97,
                  (__int64)&unk_140277D6D,
                  v98,
                  v99,
                  (const WCHAR **)&v135,
                  (const WCHAR **)&v136,
                  (const WCHAR **)&v138);
              }
              v34 = 0;
              goto LABEL_163;
            }
            v100 = *(_DWORD *)(v11 + 368);
            if ( (v100 & 0x100) == 0 )
              *(_DWORD *)(v11 + 368) = v100 & 0xFFFFFF7F;
          }
          RIMPopulateExtendedPointerDeviceProperties(a2, v11, v68);
          v101 = PreparsedData;
          v32 = RIMGetDeviceButtons(v141, v11, PreparsedData, v10);
          if ( v32 >= 0 )
          {
            if ( *(_DWORD *)(v11 + 24) != 7 )
            {
              v138 = *(_OWORD *)(a2 + 192);
              ApiSetRetrieveCalibrationData(v11, &v138);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v102 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v102 = 0;
            }
            v103 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v102 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v104 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v105) = v103;
              LOBYTE(v106) = v102;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v106,
                v105,
                *(_QWORD *)(v104 + 19392),
                3,
                1,
                18,
                (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
            }
            v101 = PreparsedData;
          }
          v34 = 1;
          if ( v10->UsagePage == 13
            && v10->Usage == 2
            && RIMIsInputUsagePresent(v101, 2LL, 0x5Bu)
            && RIMIsInputUsagePresent(v101, v107, 0x91u) )
          {
            *(_DWORD *)(v11 + 368) |= 0x8000u;
          }
          goto LABEL_163;
        }
        if ( (unsigned int)dword_14029AE68 <= 5 || !tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
          goto LABEL_162;
        v113 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v138 = L"coordinate range invalid";
        v136 = *(struct _FILE_OBJECT **)(a2 + 200);
        v114 = RimDeviceTypeToRimInputTypeString(a2, v113);
      }
      v135 = (struct _HIDP_CAPS *)v114;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v115,
        (__int64)&unk_140277D6D,
        v116,
        v117,
        (const WCHAR **)&v135,
        (const WCHAR **)&v136,
        (const WCHAR **)&v138);
      v55 = 0;
LABEL_162:
      v34 = v55;
      v32 = -1073741668;
      goto LABEL_163;
    }
    goto LABEL_71;
  }
  v34 = 0;
  if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
  {
    v43 = *(_DWORD *)(a2 + 48);
    *(_QWORD *)&v138 = L"Coordinate usage missing";
    v136 = *(struct _FILE_OBJECT **)(a2 + 200);
    v135 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v43);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v44,
      (__int64)&unk_140277D6D,
      v45,
      v46,
      (const WCHAR **)&v135,
      (const WCHAR **)&v136,
      (const WCHAR **)&v138);
  }
LABEL_164:
  if ( v32 < 0 )
    goto LABEL_54;
  if ( *(_DWORD *)(v11 + 24) == 7 )
  {
    v32 = RIMValidatePTPProperties(v134, v11);
    if ( v32 < 0 )
      goto LABEL_54;
  }
  v119 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 184) |= 0x80u;
  *(_DWORD *)(a2 + 80) = v119 ^ (v34 ^ v119) & 1;
  if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 3 )
  {
    v120 = v141;
    *(_DWORD *)(v141 + 720) += *(_DWORD *)(v11 + 776);
    *(_DWORD *)(v11 + 368) |= 0x400u;
    if ( *(_DWORD *)(v120 + 720) > 0xA00u )
    {
      v134 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 865);
    }
  }
  *(_DWORD *)(v11 + 800) = 100;
  v121 = ((unsigned __int64)(100 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v122 = (__int64 *)(v11 + 920);
  *(_QWORD *)(v11 + 808) = (v121 + ((unsigned __int64)(100 * gliQpcFreq.QuadPart - v121) >> 1)) >> 9;
  v123 = v141;
  *(_QWORD *)(a2 + 456) = v11;
  v124 = v123 + 432;
  *(_QWORD *)(v11 + 16) = a2;
  v125 = *(__int64 ***)(v124 + 8);
  if ( *v125 != (__int64 *)v124 )
    __fastfail(3u);
  *v122 = v124;
  *(_QWORD *)(v11 + 928) = v125;
  *v125 = v122;
  *(_QWORD *)(v124 + 8) = v122;
  v126 = v146;
  *(_QWORD *)(v11 + 792) = -1LL;
  if ( !(unsigned int)RIMGetDeviceParent(v126, a2, v33) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v127 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v127 = 0;
    }
    v128 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v127 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v129 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v130) = v128;
      LOBYTE(v131) = v127;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v131,
        v130,
        *(_QWORD *)(v129 + 19392),
        3,
        1,
        19,
        (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
    }
  }
  return (unsigned int)v32;
}
