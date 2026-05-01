/*
 * XREFs of ?Stop@UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAAXAEBUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x1800CE744
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444444444444444444444444@Z @ 0x1800041B4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800041B4.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180024F20 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::Stop(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *this,
        __m128i *a2,
        const struct tagRECT *a3)
{
  __m128i *v4; // rcx
  __m128i v5; // xmm6
  __m128i si128; // xmm7
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rsi
  __int32 v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  LONG bottom; // ecx
  int v19; // eax
  LONG right; // ecx
  int v21; // eax
  LONG top; // ecx
  __int32 v23; // eax
  LONG left; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  const struct _tlgProvider_t *v29; // r9
  __int32 v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  LONG v33; // ecx
  __int64 v34; // rax
  LONG v35; // ecx
  LONG v36; // ecx
  LONG v37; // ecx
  __int64 v38; // rax
  LONG v39; // [rsp+18Ch] [rbp-7Ch] BYREF
  LONG v40; // [rsp+190h] [rbp-78h] BYREF
  LONG v41; // [rsp+194h] [rbp-74h] BYREF
  LONG v42; // [rsp+198h] [rbp-70h] BYREF
  int v43; // [rsp+19Ch] [rbp-6Ch] BYREF
  __int32 v44; // [rsp+1A0h] [rbp-68h] BYREF
  DWORD v45; // [rsp+1A4h] [rbp-64h] BYREF
  __int32 v46; // [rsp+1A8h] [rbp-60h] BYREF
  int v47; // [rsp+1ACh] [rbp-5Ch] BYREF
  __int32 v48; // [rsp+1B0h] [rbp-58h] BYREF
  int v49; // [rsp+1B4h] [rbp-54h] BYREF
  int v50; // [rsp+1B8h] [rbp-50h] BYREF
  int v51; // [rsp+1BCh] [rbp-4Ch] BYREF
  int v52; // [rsp+1C0h] [rbp-48h] BYREF
  int v53; // [rsp+1C4h] [rbp-44h] BYREF
  int v54; // [rsp+1C8h] [rbp-40h] BYREF
  int v55; // [rsp+1CCh] [rbp-3Ch] BYREF
  int v56; // [rsp+1D0h] [rbp-38h] BYREF
  int v57; // [rsp+1D4h] [rbp-34h] BYREF
  int v58; // [rsp+1D8h] [rbp-30h] BYREF
  int v59; // [rsp+1DCh] [rbp-2Ch] BYREF
  int v60; // [rsp+1E0h] [rbp-28h] BYREF
  int v61; // [rsp+1E4h] [rbp-24h] BYREF
  __int32 v62; // [rsp+1E8h] [rbp-20h] BYREF
  __int32 v63; // [rsp+1ECh] [rbp-1Ch] BYREF
  __int32 v64; // [rsp+1F0h] [rbp-18h] BYREF
  _DWORD v65[7]; // [rsp+1F4h] [rbp-14h] BYREF
  __int64 v66; // [rsp+210h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+218h] [rbp+10h] BYREF
  __int64 v68; // [rsp+228h] [rbp+20h] BYREF
  __int64 v69; // [rsp+230h] [rbp+28h] BYREF
  __int64 v70; // [rsp+238h] [rbp+30h] BYREF
  __int64 v71; // [rsp+240h] [rbp+38h] BYREF
  __int64 v72; // [rsp+248h] [rbp+40h] BYREF
  __int64 v73; // [rsp+250h] [rbp+48h] BYREF
  __int64 v74; // [rsp+258h] [rbp+50h] BYREF
  __int64 v75; // [rsp+260h] [rbp+58h] BYREF
  __int64 v76; // [rsp+268h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+278h] [rbp+70h] BYREF
  void *v78; // [rsp+288h] [rbp+80h]
  int v79; // [rsp+290h] [rbp+88h]
  int v80; // [rsp+294h] [rbp+8Ch]
  __int64 *v81; // [rsp+298h] [rbp+90h]
  __int64 v82; // [rsp+2A0h] [rbp+98h]
  __int32 *v83; // [rsp+2A8h] [rbp+A0h]
  __int64 v84; // [rsp+2B0h] [rbp+A8h]
  DWORD *v85; // [rsp+2B8h] [rbp+B0h]
  __int64 v86; // [rsp+2C0h] [rbp+B8h]
  __int32 *v87; // [rsp+2C8h] [rbp+C0h]
  __int64 v88; // [rsp+2D0h] [rbp+C8h]
  int *v89; // [rsp+2D8h] [rbp+D0h]
  __int64 v90; // [rsp+2E0h] [rbp+D8h]
  int *v91; // [rsp+2E8h] [rbp+E0h]
  __int64 v92; // [rsp+2F0h] [rbp+E8h]
  int *v93; // [rsp+2F8h] [rbp+F0h]
  __int64 v94; // [rsp+300h] [rbp+F8h]
  int *v95; // [rsp+308h] [rbp+100h]
  __int64 v96; // [rsp+310h] [rbp+108h]
  int *v97; // [rsp+318h] [rbp+110h]
  __int64 v98; // [rsp+320h] [rbp+118h]
  int *v99; // [rsp+328h] [rbp+120h]
  __int64 v100; // [rsp+330h] [rbp+128h]
  int *v101; // [rsp+338h] [rbp+130h]
  __int64 v102; // [rsp+340h] [rbp+138h]
  int *v103; // [rsp+348h] [rbp+140h]
  __int64 v104; // [rsp+350h] [rbp+148h]
  int *v105; // [rsp+358h] [rbp+150h]
  __int64 v106; // [rsp+360h] [rbp+158h]
  int *v107; // [rsp+368h] [rbp+160h]
  __int64 v108; // [rsp+370h] [rbp+168h]
  int *v109; // [rsp+378h] [rbp+170h]
  __int64 v110; // [rsp+380h] [rbp+178h]
  int *v111; // [rsp+388h] [rbp+180h]
  __int64 v112; // [rsp+390h] [rbp+188h]
  int *v113; // [rsp+398h] [rbp+190h]
  __int64 v114; // [rsp+3A0h] [rbp+198h]
  int *v115; // [rsp+3A8h] [rbp+1A0h]
  __int64 v116; // [rsp+3B0h] [rbp+1A8h]
  int *v117; // [rsp+3B8h] [rbp+1B0h]
  __int64 v118; // [rsp+3C0h] [rbp+1B8h]
  __int32 *v119; // [rsp+3C8h] [rbp+1C0h]
  __int64 v120; // [rsp+3D0h] [rbp+1C8h]
  __int32 *v121; // [rsp+3D8h] [rbp+1D0h]
  __int64 v122; // [rsp+3E0h] [rbp+1D8h]
  __int32 *v123; // [rsp+3E8h] [rbp+1E0h]
  __int64 v124; // [rsp+3F0h] [rbp+1E8h]
  _DWORD *v125; // [rsp+3F8h] [rbp+1F0h]
  __int64 v126; // [rsp+400h] [rbp+1F8h]
  LONG *v127; // [rsp+408h] [rbp+200h]
  __int64 v128; // [rsp+410h] [rbp+208h]
  LONG *v129; // [rsp+418h] [rbp+210h]
  __int64 v130; // [rsp+420h] [rbp+218h]
  LONG *v131; // [rsp+428h] [rbp+220h]
  __int64 v132; // [rsp+430h] [rbp+228h]
  LONG *v133; // [rsp+438h] [rbp+230h]
  __int64 v134; // [rsp+440h] [rbp+238h]
  __int32 *v135; // [rsp+448h] [rbp+240h]
  __int64 v136; // [rsp+450h] [rbp+248h]

  v4 = (__m128i *)a2[4].m128i_i64[1];
  v5 = a2[2];
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v9 = (a2[5].m128i_i64[0] - (__int64)v4) >> 4;
  if ( v9 )
    v5 = *v4;
  if ( v9 > 1 )
    si128 = v4[1];
  v10 = *((_QWORD *)this + 34);
  v11 = *(_DWORD *)(v10 + 72);
  if ( v11 >= 0 || v11 != *(_DWORD *)(v10 + 88) || (v27 = v10 + 80, v10 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = SearchAppLauncherLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u )
    {
      v14 = a2[4].m128i_i32[0];
      v65[0] = a2[3].m128i_i32[3];
      v64 = a2[3].m128i_i32[2];
      v63 = a2[3].m128i_i32[1];
      v62 = a2[3].m128i_i32[0];
      v53 = a2[1].m128i_i32[3];
      v15 = a2[1].m128i_i32[2];
      v61 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
      v52 = v15;
      v51 = a2[1].m128i_i32[1];
      v16 = a2[1].m128i_i32[0];
      v59 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
      v50 = v16;
      v17 = a2->m128i_i32[3];
      v48 = v14;
      bottom = a3->bottom;
      v49 = v17;
      v19 = a2->m128i_i32[2];
      v42 = bottom;
      right = a3->right;
      v60 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
      v57 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
      v43 = v19;
      v21 = a2->m128i_i32[1];
      v41 = right;
      top = a3->top;
      v47 = v21;
      v23 = a2->m128i_i32[0];
      v40 = top;
      left = a3->left;
      v46 = v23;
      v39 = left;
      v58 = _mm_cvtsi128_si32(si128);
      v56 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
      v55 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
      v54 = _mm_cvtsi128_si32(v5);
      CurrentThreadId = GetCurrentThreadId();
      v26 = *((_QWORD *)this + 34);
      v45 = CurrentThreadId;
      v136 = 4LL;
      v134 = 4LL;
      v44 = *(_DWORD *)(v26 + 72);
      v66 = 0x1000000LL;
      v135 = &v48;
      v133 = &v42;
      v131 = &v41;
      v129 = &v40;
      v127 = &v39;
      v125 = v65;
      v132 = 4LL;
      v130 = 4LL;
      v128 = 4LL;
      v126 = 4LL;
      v123 = &v64;
      v124 = 4LL;
      v121 = &v63;
      v119 = &v62;
      v117 = &v61;
      v115 = &v60;
      v113 = &v59;
      v111 = &v58;
      v109 = &v57;
      v107 = &v56;
      v105 = &v55;
      v103 = &v54;
      v101 = &v53;
      v99 = &v52;
      v97 = &v51;
      v95 = &v50;
      v93 = &v49;
      v91 = &v43;
      v89 = &v47;
      v87 = &v46;
      v85 = &v45;
      v83 = &v44;
      v81 = &v66;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v13 + 1);
      v122 = 4LL;
      v120 = 4LL;
      v118 = 4LL;
      v116 = 4LL;
      v114 = 4LL;
      v112 = 4LL;
      v110 = 4LL;
      v108 = 4LL;
      v106 = 4LL;
      v104 = 4LL;
      v102 = 4LL;
      v100 = 4LL;
      v98 = 4LL;
      v96 = 4LL;
      v94 = 4LL;
      v92 = 4LL;
      v90 = 4LL;
      v88 = 4LL;
      v86 = 4LL;
      v84 = 4LL;
      v82 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v78 = &unk_1807F2B01;
      UserData.Reserved = 2;
      v79 = 721;
      v80 = 1;
      EventWriteTransfer(*((_QWORD *)v13 + 4), &EventDescriptor, (LPCGUID)(v26 + 8), 0LL, 0x1Eu, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v29 = SearchAppLauncherLogging::Provider(v28);
    if ( *(_DWORD *)v29 > 5u )
    {
      v30 = a2[4].m128i_i32[0];
      v44 = a2[3].m128i_i32[2];
      v45 = a2[3].m128i_u32[1];
      v46 = a2[3].m128i_i32[0];
      v55 = a2[1].m128i_i32[3];
      v56 = a2[1].m128i_i32[2];
      v57 = a2[1].m128i_i32[1];
      v58 = a2[1].m128i_i32[0];
      v59 = a2->m128i_i32[3];
      v60 = a2->m128i_i32[2];
      v61 = a2->m128i_i32[1];
      v62 = a2->m128i_i32[0];
      v68 = *(_QWORD *)(v27 + 48);
      v63 = *(_DWORD *)(v27 + 68);
      v64 = *(_DWORD *)(v27 + 16);
      v69 = *(_QWORD *)(v27 + 120);
      v70 = *(_QWORD *)(v27 + 112);
      v65[0] = *(_DWORD *)(v27 + 104);
      v71 = *(_QWORD *)(v27 + 96);
      v31 = *(_QWORD *)(v27 + 88);
      v47 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
      v72 = v31;
      v39 = *(_DWORD *)(v27 + 80);
      v32 = *(_QWORD *)(v27 + 72);
      v49 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
      v73 = v32;
      LODWORD(v32) = *(_DWORD *)(v27 + 32);
      v65[5] = v30;
      v33 = a3->bottom;
      v40 = v32;
      v34 = *(_QWORD *)(v27 + 24);
      v65[1] = v33;
      v35 = a3->right;
      v43 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
      v51 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
      v65[2] = v35;
      v36 = a3->top;
      v74 = v34;
      LODWORD(v34) = *(_DWORD *)v27;
      v65[3] = v36;
      v37 = a3->left;
      v41 = v34;
      v38 = *(_QWORD *)(v27 + 128);
      v65[4] = v37;
      v50 = _mm_cvtsi128_si32(si128);
      v52 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
      v53 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
      v54 = _mm_cvtsi128_si32(v5);
      v75 = v38;
      v42 = *(_DWORD *)(v27 + 64);
      v76 = *(_QWORD *)(v27 + 56);
      v48 = *(_DWORD *)(v27 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v66 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v29,
        (__int64)&unk_1807F24EA,
        *((_QWORD *)this + 34) + 8LL,
        (__int64)v29,
        (__int64)&v66,
        (__int64)&EventDescriptor,
        (__int64)&v48,
        &v76,
        (__int64)&v42,
        &v75,
        (__int64)&v41,
        &v74,
        (__int64)&v40,
        &v73,
        (__int64)&v39,
        &v72,
        &v71,
        (__int64)v65,
        &v70,
        &v69,
        (__int64)&v64,
        (__int64)&v63,
        &v68);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
