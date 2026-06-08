/*
 * XREFs of InitCpcStatesInternal @ 0x140033390
 * Callers:
 *     RegisterHvCpcCounters @ 0x140027150 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x140035DB0 (RegisterKernelCpc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x140001BA0 (WriteGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1400025A4 (ReadGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrEx @ 0x1400025CC (ReadGenAddrEx.c)
 *     ResetEnumerationContext @ 0x14000305C (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     ReadGenAddrHiddenEx @ 0x140003D40 (ReadGenAddrHiddenEx.c)
 *     ClearEnumerationContext @ 0x1400056E0 (ClearEnumerationContext.c)
 *     CpcFindResourcePriorityDescriptor @ 0x140006520 (CpcFindResourcePriorityDescriptor.c)
 *     CpcRegisterIsSupportedEx @ 0x140006644 (CpcRegisterIsSupportedEx.c)
 *     GetCpcRegisterDefinitionTable @ 0x140006890 (GetCpcRegisterDefinitionTable.c)
 *     WPP_RECORDER_SF_ii @ 0x14000B57C (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x14000B6A4 (WPP_RECORDER_SF_iii.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     memset @ 0x14000E780 (memset.c)
 *     GetRegistryDwordValue @ 0x140024360 (GetRegistryDwordValue.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1400245E4 (ProcLibTraceNoPayloadEvent.c)
 *     CpcConnectNativeInterrupt @ 0x140025FE8 (CpcConnectNativeInterrupt.c)
 *     ExecutePccCommand @ 0x140027E24 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x140028138 (StartPccCommand.c)
 *     DisplayKernelPerfStates @ 0x14002EA9C (DisplayKernelPerfStates.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x140032B54 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetLogicalProcessorIndex @ 0x140032FCC (GetLogicalProcessorIndex.c)
 *     GetPackageAffinity @ 0x1400330F0 (GetPackageAffinity.c)
 *     InitCommonPerfStateContext @ 0x1400332C0 (InitCommonPerfStateContext.c)
 *     ProcLibCapChange @ 0x140040F98 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1400415F0 (GetPerfDomain.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  BOOL v2; // edi
  int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rsi
  int v7; // edx
  int started; // edi
  void (__fastcall *v9)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 Pool2; // rax
  int v11; // ecx
  __int64 v12; // r14
  int i; // eax
  PVOID v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r10d
  unsigned __int8 v19; // r11
  __int64 v20; // rbx
  bool v21; // zf
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // r9
  int v25; // r10d
  int v26; // ecx
  char v27; // al
  int v28; // r10d
  int v29; // ecx
  __int64 v30; // rax
  int GenAddr; // eax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64, __int64, __int64 *, __int64 *); // rcx
  int v35; // eax
  char v36; // r8
  __m128i v37; // xmm1
  unsigned int v38; // r9d
  __int64 v39; // xmm0_8
  __int64 v40; // rdx
  _BYTE *v41; // rdx
  int v42; // r9d
  __int64 v43; // rdx
  char v44; // r8
  char v45; // r10d^3
  char v46; // al
  char v47; // al
  int v48; // eax
  int v49; // ecx
  unsigned int *v50; // rcx
  __int64 v51; // r8
  int v52; // edx
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // r12
  _QWORD *v56; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v58; // r12
  __int64 v59; // rbx
  char v60; // r11
  __int64 *v61; // rdi
  __int64 v62; // rbx
  int v63; // edx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 j; // rbx
  int v67; // edx
  __int64 v68; // rdi
  PVOID v69; // r13
  struct _GROUP_AFFINITY *v70; // rdx
  _BYTE *v71; // rcx
  __int64 v72; // rax
  int v73; // r9d
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  bool v79; // al
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  int v84; // eax
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rax
  unsigned __int16 v87; // r9
  char v88; // r12
  __int64 v89; // rbx
  int v90; // edi
  __int64 inited; // rax
  char v92; // dl
  int v93; // r8d
  __int64 (__fastcall *v94)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, int, _DWORD *, __int64, _QWORD *); // rax
  char v95; // r9
  void *v96; // rax
  unsigned int v97; // ecx
  bool v98; // al
  int v99; // ecx
  int v100; // eax
  int v101; // eax
  int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // rtt
  unsigned __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rcx
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 v114; // rax
  unsigned int v115; // r12d
  _DWORD *v116; // r13
  __int64 v117; // rbx
  struct _GROUP_AFFINITY *v118; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  int v120; // edx
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  _QWORD *v123; // r10
  unsigned __int8 v124; // cl
  unsigned __int8 v125; // cl
  int LogicalProcessorIndex; // eax
  __int64 v127; // r10
  _QWORD *v128; // r10
  __int64 (__fastcall *v129)(__int64); // rax
  __int64 *v131; // [rsp+20h] [rbp-E0h]
  _QWORD *v132; // [rsp+28h] [rbp-D8h]
  __int64 v133; // [rsp+28h] [rbp-D8h]
  char *v134; // [rsp+30h] [rbp-D0h]
  __int64 v135; // [rsp+30h] [rbp-D0h]
  char v136; // [rsp+60h] [rbp-A0h]
  char v137; // [rsp+61h] [rbp-9Fh]
  char v138; // [rsp+62h] [rbp-9Eh]
  char v139; // [rsp+63h] [rbp-9Dh]
  char v140; // [rsp+64h] [rbp-9Ch]
  char v141; // [rsp+65h] [rbp-9Bh]
  bool v142; // [rsp+66h] [rbp-9Ah]
  char v143; // [rsp+67h] [rbp-99h]
  PVOID DeferredContext; // [rsp+70h] [rbp-90h] BYREF
  char v145; // [rsp+78h] [rbp-88h]
  char IsSupported; // [rsp+79h] [rbp-87h]
  char v147; // [rsp+7Ah] [rbp-86h]
  char v148; // [rsp+7Bh] [rbp-85h] BYREF
  char v149; // [rsp+7Ch] [rbp-84h]
  int v150; // [rsp+80h] [rbp-80h]
  int v151; // [rsp+84h] [rbp-7Ch]
  int v152; // [rsp+88h] [rbp-78h]
  int v153; // [rsp+8Ch] [rbp-74h] BYREF
  int v154; // [rsp+90h] [rbp-70h]
  int v155; // [rsp+94h] [rbp-6Ch]
  int v156; // [rsp+98h] [rbp-68h]
  int v157; // [rsp+9Ch] [rbp-64h]
  int v158; // [rsp+A0h] [rbp-60h]
  int v159; // [rsp+A4h] [rbp-5Ch]
  __int64 v160; // [rsp+A8h] [rbp-58h]
  _OWORD v161[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v162; // [rsp+D0h] [rbp-30h]
  unsigned int v163; // [rsp+D8h] [rbp-28h] BYREF
  int v164; // [rsp+DCh] [rbp-24h] BYREF
  BOOL v165; // [rsp+E0h] [rbp-20h]
  _QWORD *v166; // [rsp+E8h] [rbp-18h]
  __int64 v167; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v168; // [rsp+F8h] [rbp-8h] BYREF
  __int64 (__fastcall *v169)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, int, _DWORD *, __int64, _QWORD *); // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v170)(__int64, __int64, __int64 *, __int64 *); // [rsp+108h] [rbp+8h]
  __int64 v171; // [rsp+110h] [rbp+10h]
  unsigned int *v172; // [rsp+118h] [rbp+18h] BYREF
  __int64 v173; // [rsp+120h] [rbp+20h] BYREF
  __int64 v174; // [rsp+128h] [rbp+28h] BYREF
  __int64 v175; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v176)(__int64); // [rsp+138h] [rbp+38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+140h] [rbp+40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v179[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v180[272]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v181[2]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v182; // [rsp+390h] [rbp+290h]

  v4 = 0LL;
  v176 = a2;
  v5 = a1;
  v160 = a1;
  v172 = 0LL;
  v163 = 0;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v179, 0, 0x108uLL);
  v168 = 0LL;
  v173 = 0LL;
  v169 = 0LL;
  memset(v180, 0, 0x108uLL);
  v174 = 0LL;
  v159 = 0;
  v182 = 0LL;
  memset(v161, 0, sizeof(v161));
  v148 = 0;
  v6 = 0LL;
  v167 = 0LL;
  PreviousAffinity = 0LL;
  v164 = 0;
  *(_OWORD *)v181 = 0LL;
  v149 = 0;
  v138 = 0;
  ClearEnumerationContext(v161);
  v153 = 0;
  v162 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v153);
  if ( !v153 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        31,
        (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
    }
    *(_QWORD *)(v5 + 280) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v154) = *(_QWORD *)(v5 + 336) != 0LL;
  v9 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v170 = 0LL;
  v9(WdfDriverGlobals, qword_1400155D8, 0LL);
  LODWORD(v166) = GetPerfDomain(v5, v161, &v164);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(1400 * (_DWORD)v166), 1919119952LL);
  v175 = Pool2;
  v12 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_318;
  }
  LOBYTE(Pool2) = 0;
  LOBYTE(v152) = 0;
  LOBYTE(v11) = 0;
  v157 = Pool2;
  v158 = v11;
  LOBYTE(v3) = 0;
  v155 = v3;
  LOBYTE(Pool2) = 1;
  v137 = 1;
  LOBYTE(v5) = 0;
  v141 = 1;
  v156 = v5;
  v145 = 0;
  v139 = 0;
  v140 = 0;
  IsSupported = 0;
  v147 = 0;
  v136 = 0;
  v143 = 0;
  v159 = 1000;
  v142 = 0;
  v150 = Pool2;
  KeInitializeAffinityEx2(v179, 32LL);
  ResetEnumerationContext((__int64 *)v161);
  for ( i = EnumerateNextDevice((__int64 *)v161, &DeferredContext);
        !i;
        i = EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v179, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v2) = 0;
  v165 = v2;
  ResetEnumerationContext((__int64 *)v161);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
  {
    v14 = DeferredContext;
    if ( !*((_DWORD *)DeferredContext + 20) )
    {
      v4 = *((_QWORD *)DeferredContext + 74);
      KeInitializeAffinityEx2(v180, 32LL);
      if ( (int)GetPackageAffinity((__int64)v14, (__int64)v180) >= 0 )
        v165 = KeIsEqualAffinityEx(v180, v179) != 0;
      break;
    }
  }
  v15 = ResetEnumerationContext((__int64 *)v161);
  LOBYTE(v15) = v181[0];
  v16 = v12 + 124;
  v151 = v15;
  while ( 1 )
  {
    v17 = EnumerateNextDevice((__int64 *)v161, &DeferredContext);
    if ( v17 )
      break;
    v20 = *((_QWORD *)DeferredContext + 74);
    if ( *(_BYTE *)(v20 + 272) == v19 || *(_BYTE *)(v20 + 296) == v19 )
      v139 = v18;
    if ( *(_BYTE *)(v20 + 344) == v19
      || *(_BYTE *)(v20 + 152) == v19
      || *(_BYTE *)(v20 + 176) == v19
      || *(_BYTE *)(v20 + 128) == v19
      || *(_BYTE *)(v20 + 200) == v19
      || *(_BYTE *)(v20 + 416) == v19 )
    {
      v140 = v18;
    }
    v3 = (unsigned __int8)v3;
    if ( *(_BYTE *)(v20 + 104) == v19 )
      v3 = v18;
    LODWORD(v5) = (unsigned __int8)v5;
    v21 = *(_BYTE *)(v20 + 8) == v19;
    v155 = v3;
    if ( v21 )
      LODWORD(v5) = v18;
    v156 = v5;
    if ( *(_BYTE *)(v20 + 392) == v19 || *(_BYTE *)(v20 + 368) == v19 || *(_BYTE *)(v20 + 224) == v19 )
      v145 = v18;
    *(_QWORD *)(v16 + 20) = v20;
    IsSupported = CpcRegisterIsSupportedEx(v20 + 344);
    *(_BYTE *)v16 = IsSupported;
    *(_BYTE *)(v16 + 1) = CpcRegisterIsSupportedEx(v20 + 128);
    *(_BYTE *)(v16 + 2) = CpcRegisterIsSupportedEx(v20 + 152);
    *(_BYTE *)(v16 + 3) = CpcRegisterIsSupportedEx(v20 + 176);
    *(_BYTE *)(v16 + 6) = CpcRegisterIsSupportedEx(v20 + 200);
    *(_BYTE *)(v16 + 7) = CpcRegisterIsSupportedEx(v20 + 104);
    v147 = CpcRegisterIsSupportedEx(v22);
    v23 = CpcRegisterIsSupportedEx(v20 + 416);
    v26 = (unsigned __int8)v157;
    if ( v23 )
      v26 = v25;
    *(_BYTE *)(v16 + 4) = v23;
    v157 = v26;
    v27 = CpcRegisterIsSupportedEx(v24);
    v29 = (unsigned __int8)v158;
    if ( v27 )
      v29 = v28;
    *(_BYTE *)(v16 + 5) = v27;
    v158 = v29;
    if ( qword_140015818 )
    {
      if ( (unsigned __int8)qword_140015818(v20, &v167) )
      {
        *(_BYTE *)(v16 + 1224) = 1;
        v30 = v167;
        *(_OWORD *)(v16 + 1228) = *(_OWORD *)(v167 + 80);
        *(_QWORD *)(v16 + 1244) = *(_QWORD *)(v30 + 96);
        *(_QWORD *)(v16 + 1252) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - *(_BYTE *)(v16 + 1229)) << *(_BYTE *)(v16 + 1230);
        GenAddr = ReadGenAddrEx((unsigned __int8 *)(v167 + 56));
        v32 = *(unsigned __int8 *)(v16 + 1229);
        *(_DWORD *)(v16 + 1260) = GenAddr;
        v33 = (unsigned int)(GenAddr - 1);
        if ( v33 > (1LL << v32) - 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x20u,
              (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
              v32,
              v33);
          goto LABEL_92;
        }
      }
    }
    *(_QWORD *)(v16 + 1212) = CpcFindResourcePriorityDescriptor(*(_DWORD **)(v20 + 536));
    if ( qword_140015810 )
      v34 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))qword_140015810(v20, 0LL);
    else
      v34 = v170;
    if ( !v34 )
      v34 = GetCpcDifferentialFeedback;
    v35 = (unsigned __int8)v154;
    if ( v34 == (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))qword_1400157E8 )
      v35 = 0;
    v170 = v34;
    v154 = v35;
    if ( !qword_140015820 || !(unsigned __int8)qword_140015820(v20, 0LL) )
      v141 = 0;
    v36 = v136;
    v37 = 0LL;
    v151 = _mm_cvtsi128_si32((__m128i)0LL);
    v182 = 0LL;
    v38 = 0;
    v39 = 0LL;
    *(_OWORD *)v181 = 0LL;
    while ( v38 < 5 )
    {
      if ( v38 )
      {
        switch ( v38 )
        {
          case 1u:
            v40 = v20 + 152;
            break;
          case 2u:
            v40 = v20 + 176;
            break;
          case 3u:
            v40 = v20 + 416;
            break;
          default:
            v40 = v20 + 200;
            break;
        }
      }
      else
      {
        v40 = v20 + 128;
      }
      if ( CpcRegisterIsSupportedEx(v40) )
      {
        v136 = 1;
        if ( *v41 == 10 )
          goto LABEL_74;
        if ( CpcRegisterIsSupportedEx((__int64)v181) )
        {
          if ( (_BYTE)v151 != v44
            || *(__int64 *)((char *)v181 + 4) != *(_QWORD *)(v43 + 4)
            || v45 != *(_BYTE *)(v43 + 3) )
          {
LABEL_74:
            v47 = 0;
LABEL_78:
            v137 = v47;
            goto LABEL_79;
          }
        }
        else
        {
          v37 = *(__m128i *)v43;
          v39 = *(_QWORD *)(v43 + 16);
          v46 = _mm_cvtsi128_si32(*(__m128i *)v43);
          *(_OWORD *)v181 = *(_OWORD *)v43;
          LOBYTE(v151) = v46;
          v182 = v39;
        }
        v36 = 1;
      }
      v38 = v42 + 1;
    }
    v47 = v137;
    v136 = v36;
    if ( v36 )
    {
      v136 = v36;
      if ( v137 )
      {
        *(__m128i *)(v16 + 28) = v37;
        v136 = v36;
        *(_QWORD *)(v16 + 44) = v39;
        goto LABEL_78;
      }
    }
LABEL_79:
    if ( qword_140015838 )
    {
      v134 = &v148;
      v132 = &v169;
      v131 = &v174;
      v48 = qword_140015838(DeferredContext, v16 - 124, &v168, &v173);
      v49 = (unsigned __int8)v150;
      if ( v48 < 0 )
        v49 = 0;
      v150 = v49;
    }
    GetCpcRegisterDefinitionTable(v20, &v172, &v163);
    if ( v163 )
    {
      v50 = v172;
      v51 = v163;
      LOBYTE(v52) = v152;
      do
      {
        v53 = *v50;
        v50 += 6;
        v52 = (unsigned __int8)v52;
        if ( *(_BYTE *)(v53 + v20) == 10 )
          v52 = 1;
        --v51;
      }
      while ( v51 );
      v152 = v52;
    }
    LOBYTE(v3) = v155;
    v16 += 1400LL;
    LOBYTE(v5) = v156;
  }
  if ( !v168 || !v169 )
  {
    LOBYTE(v17) = 0;
    v150 = v17;
  }
  if ( (_BYTE)v152 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140015C18,
      0LL);
    ResetEnumerationContext((__int64 *)v161);
    v54 = v12 + 144;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
    {
      if ( *(_BYTE *)(v54 - 20) )
      {
        v55 = *(_QWORD *)v54;
        v56 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v54 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v138 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v138 = 1;
        }
        if ( (*(_BYTE *)(v56[32] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(*(_QWORD *)(v160 + 256));
          if ( started < 0 )
          {
            v58 = v160;
LABEL_115:
            ResetEnumerationContext((__int64 *)v161);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
            {
              if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
              {
                v59 = *(_QWORD *)(v58 + 256);
                (*(void (__fastcall **)(_QWORD))(v59 + 136))(*(_QWORD *)(v59 + 72));
                *(_DWORD *)(v59 + 144) &= ~1u;
              }
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_140015C18);
            goto LABEL_318;
          }
        }
        WriteGenAddrMaybeHiddenEx((__int64)v56, v55 + 344, 1LL);
      }
      v54 += 1400LL;
    }
    ResetEnumerationContext((__int64 *)v161);
    v58 = v160;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
      {
        started = ExecutePccCommand(*(_QWORD *)(v58 + 256));
        if ( started < 0 )
          goto LABEL_115;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_140015C18);
  }
  ResetEnumerationContext((__int64 *)v161);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
  {
    v61 = (__int64 *)(v12 + 144);
    do
    {
      v62 = *v61;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v62 + 32) == v60
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (unsigned __int8 *)(v62 + 32)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v63) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v63,
            1,
            33,
            (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
        }
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
          if ( (unsigned int)dword_1400150F8 > 5 && tlgKeywordOn((__int64)&dword_1400150F8, 0x400000000000LL) )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1400150F8,
              (unsigned __int8 *)dword_140012683,
              v64,
              v65,
              (ULONG)2,
              (struct _EVENT_DATA_DESCRIPTOR *)v181);
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v62 + 32) = *(_QWORD *)(v4 + 32);
        *(_DWORD *)(v62 + 40) = *(_DWORD *)(v4 + 40);
        if ( *(_BYTE *)(v62 + 8) == 10 )
        {
          *(_QWORD *)(v62 + 8) = *(_QWORD *)(v4 + 8);
          *(_DWORD *)(v62 + 16) = *(_DWORD *)(v4 + 16);
        }
        if ( *(_BYTE *)(v62 + 56) == 10 )
        {
          *(_QWORD *)(v62 + 56) = *(_QWORD *)(v4 + 56);
          *(_DWORD *)(v62 + 64) = *(_DWORD *)(v4 + 64);
        }
        if ( *(_BYTE *)(v62 + 80) == 10 )
        {
          *(_QWORD *)(v62 + 80) = *(_QWORD *)(v4 + 80);
          *(_DWORD *)(v62 + 88) = *(_DWORD *)(v4 + 88);
        }
        if ( *(_BYTE *)(v62 + 440) == 10 )
        {
          *(_QWORD *)(v62 + 440) = *(_QWORD *)(v4 + 440);
          *(_DWORD *)(v62 + 448) = *(_DWORD *)(v4 + 448);
        }
        if ( *(_BYTE *)(v62 + 104) == 10 )
        {
          *(_QWORD *)(v62 + 104) = *(_QWORD *)(v4 + 104);
          *(_DWORD *)(v62 + 112) = *(_DWORD *)(v4 + 112);
        }
      }
      v61 += 175;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) );
    v6 = 0LL;
    v12 = v175;
  }
  ResetEnumerationContext((__int64 *)v161);
  for ( j = v12 + 132; ; j += 1400LL )
  {
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
    {
      if ( *(_QWORD *)(v12 + 40) >= *(_QWORD *)(v12 + 48) )
      {
        if ( *(_QWORD *)(v12 + 56) >= *(_QWORD *)(v12 + 64) )
        {
          v88 = v154;
          v89 = v160;
          v90 = (int)v166;
          inited = AllocateAndInitKernelPerfStatesRegistration(v160, (int)v166, (unsigned int)((_BYTE)v154 != 0) + 1);
          v171 = inited;
          v6 = inited;
          if ( inited )
          {
            v92 = v150;
            v93 = v164;
            *(_WORD *)(inited + 4) = v164;
            if ( v92 )
            {
              *(_QWORD *)(inited + 464) = v168;
              *(_QWORD *)(inited + 472) = v173;
              if ( v165 && v174 && v93 == 254 )
              {
                *(_QWORD *)(inited + 480) = v174;
                *(_QWORD *)(inited + 104) = v12;
              }
              v94 = v169;
              v95 = v136;
            }
            else
            {
              v95 = v136;
              if ( v136 )
              {
                if ( v137 )
                {
                  v21 = (_BYTE)v151 == 0;
                  *(_QWORD *)(inited + 464) = PerfControlCpcSingleRegister;
                  v96 = PerfControlCpcSingleRegisterHidden;
                  if ( v21 )
                    v96 = PerfControlCpcSingleRegister;
                }
                else
                {
                  *(_QWORD *)(inited + 464) = PerfControlCpc;
                  v96 = (void *)qword_1400157D8;
                  if ( !qword_1400157D8 || !CpcHiddenProcessorMitigationReported )
                    v96 = PerfControlCpcHidden;
                }
              }
              else
              {
                v96 = AcpiCStateIdleComplete;
                *(_QWORD *)(v6 + 464) = AcpiCStateIdleComplete;
              }
              *(_QWORD *)(v6 + 472) = v96;
              v94 = PerfSelectionCpc;
            }
            *(_QWORD *)(v6 + 448) = v94;
            if ( (_BYTE)v152 )
            {
              if ( v139 )
                *(_QWORD *)(v6 + 488) = CpcReadFeedback;
              if ( v140 )
              {
                *(_QWORD *)(v6 + 496) = CpcAcquirePerformance;
                *(_QWORD *)(v6 + 504) = CpcCommitPerformance;
              }
              if ( v145 )
              {
                *(_QWORD *)(v6 + 424) = AcquirePccSubspace;
                *(_QWORD *)(v6 + 432) = ExecutePccWrite;
              }
              v97 = *(_DWORD *)(*(_QWORD *)(v89 + 256) + 84LL);
              if ( v97 )
              {
                v92 = v150;
                *(_DWORD *)(v6 + 40) = 0x989680 / (v97 >> 1);
              }
            }
            if ( IsSupported || _bittest64((const signed __int64 *)(v89 + 280), 0x26u) )
              *(_QWORD *)(v6 + 440) = CpcReinitializeHandler;
            *(_BYTE *)(v6 + 6) = 0;
            v98 = v95 || v92;
            v99 = v162;
            *(_BYTE *)(v6 + 7) = v98;
            *(_BYTE *)(v6 + 8) = v141;
            *(_BYTE *)(v6 + 52) = v142;
            v100 = v153;
            if ( v99 )
              v100 = v99;
            *(_DWORD *)(v6 + 20) = v100;
            *(_DWORD *)(v6 + 24) = *(_DWORD *)(v12 + 100);
            v101 = *(_DWORD *)(v12 + 108);
            *(_DWORD *)(v6 + 28) = v101;
            v102 = *(_DWORD *)(v12 + 112);
            *(_DWORD *)(v6 + 32) = v102;
            if ( !v101 )
              *(_DWORD *)(v6 + 28) = 1;
            if ( !v102 )
              *(_DWORD *)(v6 + 32) = 1;
            *(_QWORD *)(v6 + 56) = *(_QWORD *)(v12 + 64);
            *(_QWORD *)(v6 + 64) = *(_QWORD *)(v12 + 48);
            v103 = *(_QWORD *)(v89 + 344);
            if ( v103 )
              *(_QWORD *)(v6 + 376) = v103;
            v21 = (_BYTE)v157 == 0;
            *(_QWORD *)(v6 + 392) = *(_QWORD *)(v89 + 352);
            if ( !v21 )
              *(_BYTE *)(v6 + 9) = 1;
            if ( (_BYTE)v158 )
            {
              if ( v92 )
                *(_BYTE *)(v6 + 10) = 1;
              else
                *(_QWORD *)(v6 + 408) = CpcSetAutonomousActivityWindow;
            }
            if ( v143 )
              *(_QWORD *)(v6 + 416) = CpcSetAutonomousMode;
            if ( v147 )
              *(_QWORD *)(v6 + 384) = CpcSetTimeWindow;
            if ( (*(_DWORD *)(v89 + 280) & 0x400000) != 0 && v92 && v148 && (v93 == 254 || v90 == 1) )
            {
              *(_BYTE *)(v6 + 11) = 1;
              *(_QWORD *)(v89 + 280) = *(_QWORD *)(v89 + 280);
              *(_BYTE *)(v6 + 12) = 1;
              *(_DWORD *)(v6 + 48) = v159;
            }
            if ( v149 )
            {
              v104 = *(unsigned int *)(v6 + 20);
              *(_BYTE *)(v6 + 13) = 1;
              v105 = *(_QWORD *)(v12 + 48);
              v106 = (v105 >> 1) + v104;
              LODWORD(v104) = v106 / v105;
              *(_DWORD *)(v6 + 72) = v104;
              *(_DWORD *)(v6 + 76) = *(_DWORD *)(v12 + 40) * v104;
              *(_DWORD *)(v6 + 80) = *(_DWORD *)(v12 + 48) * v104;
              *(_DWORD *)(v6 + 84) = *(_DWORD *)(v12 + 64) * v104;
              *(_DWORD *)(v6 + 88) = *(_DWORD *)(v12 + 1344);
            }
            if ( *(_DWORD *)(v6 + 88) )
              *(_QWORD *)(v6 + 456) = PerfPriorityCpc;
            v107 = *(_QWORD *)(v12 + 48);
            v108 = *(_QWORD *)(v12 + 72);
            v109 = *(_QWORD *)(v6 + 560);
            if ( v107 == v108 )
              LODWORD(v110) = 0x10000;
            else
              v110 = (v108 << 16) / v107;
            *(_DWORD *)(v109 + 8) = v110;
            *(_QWORD *)v109 = PerfReadWrappingCounter;
            *(_DWORD *)(v109 + 12) = 1;
            *(_BYTE *)(v109 + 17) = 1;
            *(_BYTE *)(v109 + 16) = v139 == 0;
            if ( v88 )
            {
              v111 = *(_QWORD *)(v6 + 560);
              *(_QWORD *)(v111 + 32) = 0x10000LL;
              *(_QWORD *)(v111 + 24) = PerfReadWrappingCounter;
              *(_WORD *)(v111 + 40) = 257;
            }
            DisplayKernelPerfStates(v6, (__int64)PerfReadWrappingCounter, v107);
            v162 = *(_QWORD *)(v6 + 568);
            v166 = *(_QWORD **)(v6 + 576);
            ResetEnumerationContext((__int64 *)v161);
            if ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
            {
              v112 = v162;
              v113 = v12 + 64;
              do
              {
                v114 = *(_QWORD *)(v113 + 80);
                v115 = 100;
                v116 = DeferredContext;
                v162 = v114;
                if ( *(_BYTE *)(v113 + 67) )
                {
                  v117 = v114 + 104;
                  if ( *(_BYTE *)(v114 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
                  {
                    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                    v118 = &PreviousAffinity;
                    if ( v138 )
                      v118 = 0LL;
                    KeSetSystemGroupAffinityThread(&Affinity, v118);
                    v138 = 1;
                  }
                  GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v116, v117);
                  if ( GenAddrMaybeHidden > *(_QWORD *)(v113 - 16) )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v120) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v120,
                        1,
                        44,
                        (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)(v113 - 16);
                  }
                  if ( GenAddrMaybeHidden < *(_QWORD *)v113 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v120) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v120,
                        1,
                        45,
                        (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)v113;
                  }
                  v115 = *(_DWORD *)(v113 + 48);
                  *(_QWORD *)(v113 + 24) = GenAddrMaybeHidden;
                  v121 = 100 * GenAddrMaybeHidden / *(_QWORD *)(v113 - 16);
                  if ( (unsigned int)v121 > v115 )
                    v115 = v121;
                  *(_DWORD *)(v113 + 52) = v115;
                  if ( v115 != v116[185] )
                    ProcLibCapChange(v160, (unsigned int)v116[116], (unsigned int)v116[128], v115);
                }
                else
                {
                  *(_QWORD *)(v113 + 24) = *(_QWORD *)(v113 - 16);
                }
                InitCommonPerfStateContext((__int64)v116, (_QWORD *)(v113 - 64), v112, v115, v115 < 0x64 ? 2 : 0);
                v122 = v162;
                v123 = v166;
                *(_QWORD *)(v160 + 216) = v113 - 64;
                *v123 = v113 + 136;
                *(_QWORD *)(v113 + 184) = v170;
                *(_QWORD *)(v113 + 192) = v122;
                v124 = *(_BYTE *)(v122 + 297);
                if ( v124 < 0x40u )
                  *(_QWORD *)(v113 + 168) = (1LL << v124) - 1;
                v125 = *(_BYTE *)(v122 + 273);
                if ( v125 < 0x40u )
                  *(_QWORD *)(v113 + 176) = (1LL << v125) - 1;
                LogicalProcessorIndex = GetLogicalProcessorIndex((__int64)v116);
                v128 = (_QWORD *)(v127 + 8);
                *(_DWORD *)(v113 + 200) = LogicalProcessorIndex;
                v166 = v128;
                if ( (_BYTE)v154 )
                {
                  *v128 = v113 + 664;
                  *(_DWORD *)(v113 + 728) = *(_DWORD *)(v113 + 200);
                  *(_QWORD *)(v113 + 712) = *((_QWORD *)v116 + 42);
                  v166 = v128 + 1;
                }
                v112 += 32LL;
                v113 += 1400LL;
              }
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) );
              v6 = v171;
              v12 = v175;
              v89 = v160;
            }
            if ( v138 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            v129 = v176;
            *(_BYTE *)(v6 + 15) = 1;
            started = v129(v6);
            if ( started >= 0 )
            {
              ResetEnumerationContext((__int64 *)v161);
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
              {
                *((_QWORD *)DeferredContext + 31) = v12;
                v12 += 1400LL;
              }
              if ( _bittest64((const signed __int64 *)(v89 + 280), 0x26u) )
              {
                ResetEnumerationContext((__int64 *)v161);
                while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
                {
                  if ( !*((_DWORD *)DeferredContext + 20) )
                    CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
                }
              }
              v12 = 0LL;
              started = 0;
            }
            goto LABEL_318;
          }
          goto LABEL_6;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_92;
        v73 = 43;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_92;
        v73 = 42;
      }
LABEL_163:
      LOBYTE(v67) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v67,
        1,
        v73,
        (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids);
      goto LABEL_92;
    }
    v68 = *(_QWORD *)(j + 12);
    v69 = DeferredContext;
    if ( (*(_BYTE *)(v68 + 8) == 127
       || *(_BYTE *)(v68 + 32) == 127
       || *(_BYTE *)(v68 + 56) == 127
       || *(_BYTE *)(v68 + 80) == 127
       || *(_BYTE *)(v68 + 440) == 127
       || *(_BYTE *)(v68 + 368) == 127)
      && !*((_DWORD *)DeferredContext + 20) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v70 = &PreviousAffinity;
      if ( v138 )
        v70 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v70);
      v138 = 1;
    }
    *(_BYTE *)j = v139;
    *(_BYTE *)(j + 1) = v155;
    *(_BYTE *)(j + 2) = v156;
    *(_BYTE *)(j + 3) = v140;
    if ( CpcRegisterIsSupportedEx(v68 + 488) && (*v71 != 126 || *(_DWORD *)(v68 + 492)) )
    {
      v72 = ReadGenAddrMaybeHiddenEx((__int64)v69, (__int64)v71);
      v162 = v72;
      if ( !(_DWORD)v72 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_92;
        v73 = 34;
        goto LABEL_163;
      }
    }
    else
    {
      LODWORD(v72) = v153;
    }
    *(_DWORD *)(j - 36) = v72;
    *(_QWORD *)(j - 92) = ReadGenAddrMaybeHiddenEx((__int64)v69, v68 + 8);
    v74 = ReadGenAddrMaybeHiddenEx((__int64)v69, v68 + 32);
    *(_QWORD *)(j - 84) = v74;
    if ( !v74 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v73 = 35;
      goto LABEL_163;
    }
    v75 = ReadGenAddrMaybeHiddenEx((__int64)v69, v68 + 56);
    v76 = *(_QWORD *)(j - 84);
    *(_QWORD *)(j - 76) = v75;
    if ( v75 > v76 )
      *(_QWORD *)(j - 76) = v76;
    *(_QWORD *)(j - 68) = ReadGenAddrMaybeHiddenEx((__int64)v69, v68 + 80);
    *(_QWORD *)(j - 60) = ReadGenAddrMaybeHiddenEx((__int64)v69, v68 + 440);
    if ( CpcRegisterIsSupportedEx(v68 + 368) )
    {
      v79 = ReadGenAddrMaybeHiddenEx((__int64)v69, v68 + 368) != 0;
      v142 = v79;
      if ( *(_BYTE *)(v68 + 368) == 126 )
      {
        v143 = 0;
        v142 = v79;
      }
      else
      {
        v143 = 1;
      }
    }
    v80 = *(_QWORD *)(j + 1204);
    if ( v80 )
      *(_DWORD *)(j + 1212) = ReadGenAddrMaybeHiddenEx((__int64)v69, v80 + 56);
    if ( j - 132 != v12 )
      break;
LABEL_188:
    v83 = *(_QWORD *)(j - 84);
    v84 = 100LL * *(_QWORD *)(j - 92) / v83;
    *(_DWORD *)(j - 32) = v84;
    *(_DWORD *)(j - 28) = v84;
    v85 = 100LL * *(_QWORD *)(j - 76) / v83;
    v86 = 100LL * *(_QWORD *)(j - 68) / v83;
    if ( !(_DWORD)v86 )
      LODWORD(v86) = 1;
    *(_DWORD *)(j - 20) = v86;
    if ( !(_DWORD)v85 )
      LODWORD(v85) = 1;
    *(_DWORD *)(j - 24) = v85;
  }
  v81 = *(_QWORD *)(j - 92);
  v82 = *(_QWORD *)(v12 + 40);
  if ( v81 != v82 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v87 = 36;
    goto LABEL_201;
  }
  v81 = *(_QWORD *)(j - 84);
  v82 = *(_QWORD *)(v12 + 48);
  if ( v81 != v82 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v87 = 37;
    goto LABEL_201;
  }
  v81 = *(_QWORD *)(j - 68);
  v82 = *(_QWORD *)(v12 + 64);
  if ( v81 != v82 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v87 = 38;
LABEL_201:
    v135 = v82;
    v133 = v81;
LABEL_202:
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v87,
      (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
      v133,
      v135);
    goto LABEL_92;
  }
  if ( *(_QWORD *)(j - 76) == *(_QWORD *)(v12 + 56) )
    goto LABEL_183;
  if ( !v141 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v135 = *(_QWORD *)(v12 + 56);
    v87 = 39;
    v133 = *(_QWORD *)(j - 76);
    goto LABEL_202;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v134) = HIDWORD(*(_QWORD *)(v12 + 56));
    HIDWORD(v132) = HIDWORD(*(_QWORD *)(j - 76));
    WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v80, v77, v78, (int)v131);
  }
  *(_QWORD *)(j - 76) = *(_QWORD *)(v12 + 56);
LABEL_183:
  if ( !*(_QWORD *)(j + 1204) || !*(_QWORD *)(v12 + 1336) || *(_DWORD *)(j + 1212) == *(_DWORD *)(v12 + 1344) )
    goto LABEL_188;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v134) = *(_DWORD *)(v12 + 1344);
    LODWORD(v132) = *(_DWORD *)(j + 1212);
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x29u,
      (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
      v132,
      v134);
  }
LABEL_92:
  started = -1073741811;
LABEL_318:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, (ULONG)1919119952);
  if ( v12 )
    ExFreePoolWithTag((PVOID)v12, (ULONG)1919119952);
  return (unsigned int)started;
}
