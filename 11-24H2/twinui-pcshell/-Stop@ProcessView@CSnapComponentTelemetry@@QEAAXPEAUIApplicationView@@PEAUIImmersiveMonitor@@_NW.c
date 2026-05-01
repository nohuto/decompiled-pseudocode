/*
 * XREFs of ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x1800B8058
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18002C0C8 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U4@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U5@U2@U2@U2@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456644444AEBU?$_tlgWrapperByVal@$00@@47444447@Z @ 0x18000F1E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000F1E0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180034698 (-IgnoreCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800B88BC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B8CC0 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800B8E20 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSnapComponentTelemetry::ProcessView::Stop(
        __int64 a1,
        ApplicationViewTraceLoggingHelpers *a2,
        unsigned __int16 **a3,
        char a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  const unsigned __int16 *v18; // rdx
  const struct _tlgProvider_t *v19; // r15
  const WCHAR *v20; // r14
  const WCHAR *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // ebx
  void *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdi
  const unsigned __int16 *v29; // rdx
  const struct _tlgProvider_t *v30; // r14
  __int64 v31; // r9
  const WCHAR *v32; // r12
  char v33; // [rsp+140h] [rbp-80h] BYREF
  char v34; // [rsp+141h] [rbp-7Fh] BYREF
  char v35; // [rsp+142h] [rbp-7Eh] BYREF
  int v36; // [rsp+144h] [rbp-7Ch] BYREF
  unsigned int v37; // [rsp+148h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+14Ch] [rbp-74h]
  int v39; // [rsp+150h] [rbp-70h] BYREF
  __int128 v40; // [rsp+154h] [rbp-6Ch] BYREF
  int v41; // [rsp+164h] [rbp-5Ch] BYREF
  DWORD CurrentThreadId; // [rsp+168h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+16Ch] [rbp-54h] BYREF
  __int128 v44; // [rsp+170h] [rbp-50h] BYREF
  unsigned int v45; // [rsp+180h] [rbp-40h] BYREF
  __int64 v46; // [rsp+188h] [rbp-38h] BYREF
  int v47; // [rsp+190h] [rbp-30h]
  int v48; // [rsp+194h] [rbp-2Ch]
  int v49; // [rsp+198h] [rbp-28h]
  int v50; // [rsp+19Ch] [rbp-24h]
  int v51; // [rsp+1A0h] [rbp-20h]
  __int64 v52; // [rsp+1A8h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v54; // [rsp+1B8h] [rbp-8h]
  __int64 v55; // [rsp+1C0h] [rbp+0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+1C8h] [rbp+8h] BYREF
  LPVOID v57[3]; // [rsp+1D8h] [rbp+18h] BYREF
  const unsigned __int16 *v58; // [rsp+1F0h] [rbp+30h] BYREF
  const WCHAR *v59; // [rsp+1F8h] [rbp+38h] BYREF
  __int64 v60; // [rsp+200h] [rbp+40h] BYREF
  __int64 v61; // [rsp+208h] [rbp+48h] BYREF
  __int64 v62; // [rsp+210h] [rbp+50h] BYREF
  __int64 v63; // [rsp+218h] [rbp+58h] BYREF
  __int64 v64; // [rsp+220h] [rbp+60h] BYREF
  __int64 v65; // [rsp+228h] [rbp+68h] BYREF
  __int64 v66; // [rsp+230h] [rbp+70h] BYREF
  __int64 v67; // [rsp+238h] [rbp+78h] BYREF
  __int64 v68; // [rsp+240h] [rbp+80h] BYREF
  __int128 v69; // [rsp+248h] [rbp+88h] BYREF
  __int128 v70; // [rsp+258h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp+B0h] BYREF
  void *v72; // [rsp+280h] [rbp+C0h]
  int v73; // [rsp+288h] [rbp+C8h]
  int v74; // [rsp+28Ch] [rbp+CCh]
  __int64 *v75; // [rsp+290h] [rbp+D0h]
  __int64 v76; // [rsp+298h] [rbp+D8h]
  int *v77; // [rsp+2A0h] [rbp+E0h]
  __int64 v78; // [rsp+2A8h] [rbp+E8h]
  DWORD *p_CurrentThreadId; // [rsp+2B0h] [rbp+F0h]
  __int64 v80; // [rsp+2B8h] [rbp+F8h]
  const WCHAR *v81; // [rsp+2C0h] [rbp+100h]
  int v82; // [rsp+2C8h] [rbp+108h]
  int v83; // [rsp+2CCh] [rbp+10Ch]
  const WCHAR *v84; // [rsp+2D0h] [rbp+110h]
  int v85; // [rsp+2D8h] [rbp+118h]
  int v86; // [rsp+2DCh] [rbp+11Ch]
  int *v87; // [rsp+2E0h] [rbp+120h]
  __int64 v88; // [rsp+2E8h] [rbp+128h]
  __int128 *v89; // [rsp+2F0h] [rbp+130h]
  __int64 v90; // [rsp+2F8h] [rbp+138h]
  char *v91; // [rsp+300h] [rbp+140h]
  __int64 v92; // [rsp+308h] [rbp+148h]
  char *v93; // [rsp+310h] [rbp+150h]
  __int64 v94; // [rsp+318h] [rbp+158h]
  char *v95; // [rsp+320h] [rbp+160h]
  __int64 v96; // [rsp+328h] [rbp+168h]
  char *v97; // [rsp+330h] [rbp+170h]
  __int64 v98; // [rsp+338h] [rbp+178h]
  unsigned int *v99; // [rsp+340h] [rbp+180h]
  __int64 v100; // [rsp+348h] [rbp+188h]
  char *v101; // [rsp+350h] [rbp+190h]
  __int64 v102; // [rsp+358h] [rbp+198h]
  int *v103; // [rsp+360h] [rbp+1A0h]
  __int64 v104; // [rsp+368h] [rbp+1A8h]
  __int128 *v105; // [rsp+370h] [rbp+1B0h]
  __int64 v106; // [rsp+378h] [rbp+1B8h]
  char *v107; // [rsp+380h] [rbp+1C0h]
  __int64 v108; // [rsp+388h] [rbp+1C8h]
  char *v109; // [rsp+390h] [rbp+1D0h]
  __int64 v110; // [rsp+398h] [rbp+1D8h]
  char *v111; // [rsp+3A0h] [rbp+1E0h]
  __int64 v112; // [rsp+3A8h] [rbp+1E8h]
  char *v113; // [rsp+3B0h] [rbp+1F0h]
  __int64 v114; // [rsp+3B8h] [rbp+1F8h]
  wil::details::in1diag3 *retaddr; // [rsp+408h] [rbp+248h]

  v57[0] = 0LL;
  v11 = -1LL;
  v57[1] = (LPVOID)-1LL;
  v57[2] = (LPVOID)-1LL;
  ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)v57, a3);
  pv = 0LL;
  v12 = *(_QWORD *)a2;
  v54 = -1LL;
  v55 = -1LL;
  (*(void (__fastcall **)(ApplicationViewTraceLoggingHelpers *, LPVOID *))(v12 + 136))(a2, &pv);
  v37 = 0;
  v13 = (*((__int64 (__fastcall **)(unsigned __int16 **, unsigned int *))*a3 + 3))(a3, &v37);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v13);
  v70 = 0LL;
  v14 = (*((__int64 (__fastcall **)(unsigned __int16 **, __int128 *))*a3 + 11))(a3, &v70);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v14);
  v69 = 0LL;
  v15 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v69);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D6,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v15);
  v36 = 0;
  v46 = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v46) >= 0 )
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 32LL))(v46, &v36);
  v16 = *(_QWORD *)(a1 + 272);
  v17 = *(_DWORD *)(v16 + 72);
  if ( v17 >= 0 || v17 != *(_DWORD *)(v16 + 88) || (v28 = v16 + 80, v16 == -80) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v19 > 5u )
    {
      v35 = a7;
      v40 = v69;
      v39 = v36;
      v34 = a6;
      v45 = a5;
      v33 = a4;
      v44 = v70;
      v43 = v37;
      v20 = SQM::CensorAppID((LPCWSTR)pv, v18);
      v21 = &pvData;
      if ( v57[0] )
        v21 = (const WCHAR *)v57[0];
      CurrentThreadId = GetCurrentThreadId();
      v22 = *(_QWORD *)(a1 + 272);
      v41 = *(_DWORD *)(v22 + 72);
      v52 = 0LL;
      v113 = &v35;
      v114 = 1LL;
      v111 = (char *)&v40 + 12;
      v112 = 4LL;
      v109 = (char *)&v40 + 8;
      v110 = 4LL;
      v107 = (char *)&v40 + 4;
      v108 = 4LL;
      v105 = &v40;
      v106 = 4LL;
      v103 = &v39;
      v104 = 4LL;
      v101 = &v34;
      v102 = 1LL;
      v99 = &v45;
      v100 = 4LL;
      v97 = &v33;
      v98 = 1LL;
      v95 = (char *)&v44 + 12;
      v96 = 4LL;
      v93 = (char *)&v44 + 8;
      v94 = 4LL;
      v91 = (char *)&v44 + 4;
      v92 = 4LL;
      v89 = &v44;
      v90 = 4LL;
      v87 = (int *)&v43;
      v88 = 4LL;
      if ( v20 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( v20[v23] );
        v24 = 2 * v23 + 2;
      }
      else
      {
        v20 = &pvData;
        v24 = 2;
      }
      v84 = v20;
      v85 = v24;
      v86 = 0;
      if ( v21 )
      {
        do
          ++v11;
        while ( v21[v11] );
        v25 = 2 * v11 + 2;
      }
      else
      {
        v21 = &pvData;
        v25 = 2;
      }
      v81 = v21;
      v82 = v25;
      v83 = 0;
      p_CurrentThreadId = &CurrentThreadId;
      v80 = 4LL;
      v77 = &v41;
      v78 = 4LL;
      v75 = &v52;
      v76 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *((_QWORD *)v19 + 1);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v72 = &unk_1808144E6;
      v73 = 293;
      v74 = 1;
      v38 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v19 + 4), &EventDescriptor, (LPCGUID)(v22 + 8), 0LL, 0x15u, &UserData);
    }
    goto LABEL_21;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v30 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v30 <= 5u )
  {
LABEL_21:
    v26 = v57[0];
    goto LABEL_22;
  }
  v33 = a7;
  v51 = HIDWORD(v69);
  v47 = DWORD2(v69);
  v48 = DWORD1(v69);
  v49 = v69;
  v50 = v36;
  v34 = a6;
  v38 = a5;
  v35 = a4;
  v41 = HIDWORD(v70);
  CurrentThreadId = DWORD2(v70);
  v43 = DWORD1(v70);
  *(_QWORD *)&v44 = __PAIR64__(v37, v70);
  v58 = SQM::CensorAppID((LPCWSTR)pv, v29);
  v32 = &pvData;
  v26 = v57[0];
  if ( v57[0] )
    v32 = (const WCHAR *)v57[0];
  v59 = v32;
  v60 = *(_QWORD *)(v28 + 48);
  DWORD2(v44) = *(_DWORD *)(v28 + 68);
  HIDWORD(v44) = *(_DWORD *)(v28 + 16);
  v61 = *(_QWORD *)(v28 + 120);
  v62 = *(_QWORD *)(v28 + 112);
  v45 = *(_DWORD *)(v28 + 104);
  v63 = *(_QWORD *)(v28 + 96);
  v64 = *(_QWORD *)(v28 + 88);
  v39 = *(_DWORD *)(v28 + 80);
  v68 = *(_QWORD *)(v28 + 72);
  LODWORD(v40) = *(_DWORD *)(v28 + 32);
  v65 = *(_QWORD *)(v28 + 24);
  DWORD1(v40) = *(_DWORD *)v28;
  v66 = *(_QWORD *)(v28 + 128);
  DWORD2(v40) = *(_DWORD *)(v28 + 64);
  v67 = *(_QWORD *)(v28 + 56);
  HIDWORD(v40) = *(_DWORD *)(v28 + 8);
  *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
  v52 = 0LL;
  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
    (__int64)v30,
    (__int64)&unk_1808142B0,
    *(_QWORD *)(a1 + 272) + 8LL,
    v31,
    (__int64)&v52,
    (__int64)&EventDescriptor,
    (__int64)&v40 + 12,
    &v67,
    (__int64)&v40 + 8,
    &v66,
    (__int64)&v40 + 4,
    &v65,
    (__int64)&v40,
    &v68,
    (__int64)&v39,
    &v64,
    &v63,
    (__int64)&v45,
    &v62,
    &v61,
    (__int64)&v44 + 12,
    (__int64)&v44 + 8,
    &v60,
    &v59,
    &v58);
LABEL_22:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
  v27 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v54 = 0LL;
  v55 = 0LL;
  if ( v26 )
    CoTaskMemFree(v26);
}
