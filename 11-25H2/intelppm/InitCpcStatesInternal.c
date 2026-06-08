/*
 * XREFs of InitCpcStatesInternal @ 0x1400358D0
 * Callers:
 *     RegisterHvCpcCounters @ 0x140030610 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x140038020 (RegisterKernelCpc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x140002014 (ReadGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrEx @ 0x140002040 (ReadGenAddrEx.c)
 *     WPP_RECORDER_SF_DD @ 0x140003804 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     CpcRegisterIsSupportedEx @ 0x140006010 (CpcRegisterIsSupportedEx.c)
 *     ReadGenAddrHiddenEx @ 0x140006608 (ReadGenAddrHiddenEx.c)
 *     ClearEnumerationContext @ 0x14000681C (ClearEnumerationContext.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 *     CpcFindResourcePriorityDescriptor @ 0x140008D64 (CpcFindResourcePriorityDescriptor.c)
 *     GetCpcRegisterDefinitionTable @ 0x140009058 (GetCpcRegisterDefinitionTable.c)
 *     WPP_RECORDER_SF_ii @ 0x14000DD9C (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x14000DEC4 (WPP_RECORDER_SF_iii.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 *     GetRegistryDwordValue @ 0x140028658 (GetRegistryDwordValue.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1400299E0 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     StartPccCommand @ 0x140029B24 (StartPccCommand.c)
 *     DisplayKernelPerfStates @ 0x140029E40 (DisplayKernelPerfStates.c)
 *     ExecutePccCommand @ 0x14002A228 (ExecutePccCommand.c)
 *     ProcLibTraceNoPayloadEvent @ 0x14002BFB4 (ProcLibTraceNoPayloadEvent.c)
 *     CpcConnectNativeInterrupt @ 0x14002D0E0 (CpcConnectNativeInterrupt.c)
 *     GetLogicalProcessorIndex @ 0x1400355E0 (GetLogicalProcessorIndex.c)
 *     GetPackageAffinity @ 0x140035700 (GetPackageAffinity.c)
 *     ProcLibCapChange @ 0x140044B24 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x140045878 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x140046EC0 (InitCommonPerfStateContext.c)
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
  int v18; // r11d
  __int64 v19; // rbx
  bool v20; // zf
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // r9
  int v24; // r11d
  int v25; // ecx
  char v26; // al
  int v27; // r11d
  int v28; // ecx
  __int64 v29; // rax
  int GenAddr; // eax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  void (__fastcall *v33)(__int64, __int64, unsigned __int64 *, unsigned __int64 *); // rcx
  int v34; // eax
  char v35; // r8
  __m128i v36; // xmm1
  unsigned int v37; // r9d
  __int64 v38; // xmm0_8
  __int64 v39; // rdx
  _BYTE *v40; // rdx
  int v41; // r9d
  __int64 v42; // rdx
  char v43; // r8
  char v44; // r10d^3
  char v45; // al
  char v46; // al
  int v47; // eax
  int v48; // ecx
  unsigned int *v49; // rcx
  __int64 v50; // r8
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // r12
  _QWORD *v55; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v57; // r12
  __int64 v58; // rbx
  __int64 v59; // r8
  __int64 *v60; // rdi
  __int64 v61; // rbx
  int v62; // edx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 j; // rbx
  int v66; // edx
  __int64 v67; // rdi
  PVOID v68; // r13
  struct _GROUP_AFFINITY *v69; // rdx
  _BYTE *v70; // rcx
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  bool v78; // al
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  int v83; // eax
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // rax
  unsigned __int16 v86; // r9
  char v87; // r12
  __int64 v88; // rbx
  int v89; // edi
  __int64 inited; // rax
  char v91; // dl
  int v92; // r8d
  __int64 (__fastcall *v93)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, int, _DWORD *, __int64, _QWORD *); // rax
  char v94; // r9
  void *v95; // rax
  unsigned int v96; // ecx
  bool v97; // al
  int v98; // ecx
  int v99; // eax
  int v100; // eax
  int v101; // ecx
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // rtt
  unsigned __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rcx
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  int v111; // esi
  __int64 v112; // rdi
  __int64 v113; // rax
  unsigned int v114; // r12d
  _DWORD *v115; // r13
  __int64 v116; // rbx
  struct _GROUP_AFFINITY *v117; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  int v119; // edx
  unsigned __int64 v120; // rax
  __int64 v121; // rdx
  _QWORD *v122; // r11
  unsigned __int8 v123; // cl
  unsigned __int8 v124; // cl
  int LogicalProcessorIndex; // eax
  __int64 v126; // r11
  _QWORD *v127; // r11
  __int64 (__fastcall *v128)(__int64); // rax
  __int64 *v130; // [rsp+20h] [rbp-E0h]
  _QWORD *v131; // [rsp+28h] [rbp-D8h]
  __int64 v132; // [rsp+28h] [rbp-D8h]
  char *v133; // [rsp+30h] [rbp-D0h]
  __int64 v134; // [rsp+30h] [rbp-D0h]
  char v135; // [rsp+60h] [rbp-A0h]
  char v136; // [rsp+61h] [rbp-9Fh]
  char v137; // [rsp+62h] [rbp-9Eh]
  char v138; // [rsp+63h] [rbp-9Dh]
  char v139; // [rsp+64h] [rbp-9Ch]
  char v140; // [rsp+65h] [rbp-9Bh]
  bool v141; // [rsp+66h] [rbp-9Ah]
  char v142; // [rsp+67h] [rbp-99h]
  PVOID DeferredContext; // [rsp+70h] [rbp-90h] BYREF
  char v144; // [rsp+78h] [rbp-88h]
  char IsSupported; // [rsp+79h] [rbp-87h]
  char v146; // [rsp+7Ah] [rbp-86h]
  char v147; // [rsp+7Bh] [rbp-85h] BYREF
  char v148; // [rsp+7Ch] [rbp-84h]
  int v149; // [rsp+80h] [rbp-80h]
  int v150; // [rsp+84h] [rbp-7Ch]
  int v151; // [rsp+88h] [rbp-78h]
  int v152; // [rsp+8Ch] [rbp-74h] BYREF
  int v153; // [rsp+90h] [rbp-70h]
  int v154; // [rsp+94h] [rbp-6Ch]
  int v155; // [rsp+98h] [rbp-68h]
  int v156; // [rsp+9Ch] [rbp-64h]
  int v157; // [rsp+A0h] [rbp-60h]
  int v158; // [rsp+A4h] [rbp-5Ch]
  __int64 v159; // [rsp+A8h] [rbp-58h]
  _OWORD v160[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v161; // [rsp+D0h] [rbp-30h]
  unsigned int v162; // [rsp+D8h] [rbp-28h] BYREF
  int v163; // [rsp+DCh] [rbp-24h] BYREF
  BOOL v164; // [rsp+E0h] [rbp-20h]
  _QWORD *v165; // [rsp+E8h] [rbp-18h]
  __int64 v166; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v167; // [rsp+F8h] [rbp-8h] BYREF
  __int64 (__fastcall *v168)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, int, _DWORD *, __int64, _QWORD *); // [rsp+100h] [rbp+0h] BYREF
  void (__fastcall *v169)(__int64, __int64, unsigned __int64 *, unsigned __int64 *); // [rsp+108h] [rbp+8h]
  __int64 v170; // [rsp+110h] [rbp+10h]
  unsigned int *v171; // [rsp+118h] [rbp+18h] BYREF
  __int64 v172; // [rsp+120h] [rbp+20h] BYREF
  __int64 v173; // [rsp+128h] [rbp+28h] BYREF
  __int64 v174; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v175)(__int64); // [rsp+138h] [rbp+38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+140h] [rbp+40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v178[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v179[272]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v180[2]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v181; // [rsp+390h] [rbp+290h]

  v4 = 0LL;
  v175 = a2;
  v5 = a1;
  v159 = a1;
  v171 = 0LL;
  v162 = 0;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v178, 0, 0x108uLL);
  v167 = 0LL;
  v172 = 0LL;
  v168 = 0LL;
  memset(v179, 0, 0x108uLL);
  v173 = 0LL;
  v158 = 0;
  v181 = 0LL;
  memset(v160, 0, sizeof(v160));
  v147 = 0;
  v6 = 0LL;
  v166 = 0LL;
  PreviousAffinity = 0LL;
  v163 = 0;
  *(_OWORD *)v180 = 0LL;
  v148 = 0;
  v137 = 0;
  ClearEnumerationContext(v160);
  v152 = 0;
  v161 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v152);
  if ( !v152 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        31,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
    }
    *(_QWORD *)(v5 + 280) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v153) = *(_QWORD *)(v5 + 336) != 0LL;
  v9 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v169 = 0LL;
  v9(WdfDriverGlobals, qword_140019188, 0LL);
  LODWORD(v165) = GetPerfDomain(v5, v160, &v163);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(1400 * (_DWORD)v165), 1919119952LL);
  v174 = Pool2;
  v12 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_318;
  }
  LOBYTE(Pool2) = 0;
  LOBYTE(v151) = 0;
  LOBYTE(v11) = 0;
  v156 = Pool2;
  v157 = v11;
  LOBYTE(v3) = 0;
  v154 = v3;
  LOBYTE(Pool2) = 1;
  v136 = 1;
  LOBYTE(v5) = 0;
  v140 = 1;
  v155 = v5;
  v144 = 0;
  v138 = 0;
  v139 = 0;
  IsSupported = 0;
  v146 = 0;
  v135 = 0;
  v142 = 0;
  v158 = 1000;
  v141 = 0;
  v149 = Pool2;
  KeInitializeAffinityEx2(v178, 32LL);
  ResetEnumerationContext((__int64 *)v160);
  for ( i = EnumerateNextDevice((__int64 *)v160, &DeferredContext);
        !i;
        i = EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v178, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v2) = 0;
  v164 = v2;
  ResetEnumerationContext((__int64 *)v160);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
  {
    v14 = DeferredContext;
    if ( !*((_DWORD *)DeferredContext + 20) )
    {
      v4 = *((_QWORD *)DeferredContext + 74);
      KeInitializeAffinityEx2(v179, 32LL);
      if ( (int)GetPackageAffinity((__int64)v14, (__int64)v179) >= 0 )
        v164 = KeIsEqualAffinityEx(v179, v178) != 0;
      break;
    }
  }
  v15 = ResetEnumerationContext((__int64 *)v160);
  LOBYTE(v15) = v180[0];
  v16 = v12 + 124;
  v150 = v15;
  while ( 1 )
  {
    v17 = EnumerateNextDevice((__int64 *)v160, &DeferredContext);
    if ( v17 )
      break;
    v19 = *((_QWORD *)DeferredContext + 74);
    if ( *(_BYTE *)(v19 + 272) == 10 || *(_BYTE *)(v19 + 296) == 10 )
      v138 = v18;
    if ( *(_BYTE *)(v19 + 344) == 10
      || *(_BYTE *)(v19 + 152) == 10
      || *(_BYTE *)(v19 + 176) == 10
      || *(_BYTE *)(v19 + 128) == 10
      || *(_BYTE *)(v19 + 200) == 10
      || *(_BYTE *)(v19 + 416) == 10 )
    {
      v139 = v18;
    }
    v3 = (unsigned __int8)v3;
    if ( *(_BYTE *)(v19 + 104) == 10 )
      v3 = v18;
    LODWORD(v5) = (unsigned __int8)v5;
    v20 = *(_BYTE *)(v19 + 8) == 10;
    v154 = v3;
    if ( v20 )
      LODWORD(v5) = v18;
    v155 = v5;
    if ( *(_BYTE *)(v19 + 392) == 10 || *(_BYTE *)(v19 + 368) == 10 || *(_BYTE *)(v19 + 224) == 10 )
      v144 = v18;
    *(_QWORD *)(v16 + 20) = v19;
    IsSupported = CpcRegisterIsSupportedEx(v19 + 344);
    *(_BYTE *)v16 = IsSupported;
    *(_BYTE *)(v16 + 1) = CpcRegisterIsSupportedEx(v19 + 128);
    *(_BYTE *)(v16 + 2) = CpcRegisterIsSupportedEx(v19 + 152);
    *(_BYTE *)(v16 + 3) = CpcRegisterIsSupportedEx(v19 + 176);
    *(_BYTE *)(v16 + 6) = CpcRegisterIsSupportedEx(v19 + 200);
    *(_BYTE *)(v16 + 7) = CpcRegisterIsSupportedEx(v19 + 104);
    v146 = CpcRegisterIsSupportedEx(v21);
    v22 = CpcRegisterIsSupportedEx(v19 + 416);
    v25 = (unsigned __int8)v156;
    if ( v22 )
      v25 = v24;
    *(_BYTE *)(v16 + 4) = v22;
    v156 = v25;
    v26 = CpcRegisterIsSupportedEx(v23);
    v28 = (unsigned __int8)v157;
    if ( v26 )
      v28 = v27;
    *(_BYTE *)(v16 + 5) = v26;
    v157 = v28;
    if ( qword_1400193C8 )
    {
      if ( (unsigned __int8)qword_1400193C8(v19, &v166) )
      {
        *(_BYTE *)(v16 + 1224) = 1;
        v29 = v166;
        *(_OWORD *)(v16 + 1228) = *(_OWORD *)(v166 + 80);
        *(_QWORD *)(v16 + 1244) = *(_QWORD *)(v29 + 96);
        *(_QWORD *)(v16 + 1252) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - *(_BYTE *)(v16 + 1229)) << *(_BYTE *)(v16 + 1230);
        GenAddr = ReadGenAddrEx((unsigned __int8 *)(v166 + 56));
        v31 = *(unsigned __int8 *)(v16 + 1229);
        *(_DWORD *)(v16 + 1260) = GenAddr;
        v32 = (unsigned int)(GenAddr - 1);
        if ( v32 > (1LL << v31) - 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x20u,
              (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
              v31,
              v32);
          goto LABEL_92;
        }
      }
    }
    *(_QWORD *)(v16 + 1212) = CpcFindResourcePriorityDescriptor(*(_DWORD **)(v19 + 536));
    if ( qword_1400193C0 )
      v33 = (void (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))qword_1400193C0(v19, 0LL);
    else
      v33 = v169;
    if ( !v33 )
      v33 = GetCpcDifferentialFeedback;
    v34 = (unsigned __int8)v153;
    if ( v33 == (void (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))qword_140019398 )
      v34 = 0;
    v169 = v33;
    v153 = v34;
    if ( !qword_1400193D0 || !(unsigned __int8)qword_1400193D0(v19, 0LL) )
      v140 = 0;
    v35 = v135;
    v36 = 0LL;
    v150 = _mm_cvtsi128_si32((__m128i)0LL);
    v181 = 0LL;
    v37 = 0;
    v38 = 0LL;
    *(_OWORD *)v180 = 0LL;
    while ( v37 < 5 )
    {
      if ( v37 )
      {
        switch ( v37 )
        {
          case 1u:
            v39 = v19 + 152;
            break;
          case 2u:
            v39 = v19 + 176;
            break;
          case 3u:
            v39 = v19 + 416;
            break;
          default:
            v39 = v19 + 200;
            break;
        }
      }
      else
      {
        v39 = v19 + 128;
      }
      if ( CpcRegisterIsSupportedEx(v39) )
      {
        v135 = 1;
        if ( *v40 == 10 )
          goto LABEL_74;
        if ( CpcRegisterIsSupportedEx((__int64)v180) )
        {
          if ( (_BYTE)v150 != v43
            || *(__int64 *)((char *)v180 + 4) != *(_QWORD *)(v42 + 4)
            || v44 != *(_BYTE *)(v42 + 3) )
          {
LABEL_74:
            v46 = 0;
LABEL_78:
            v136 = v46;
            goto LABEL_79;
          }
        }
        else
        {
          v36 = *(__m128i *)v42;
          v38 = *(_QWORD *)(v42 + 16);
          v45 = _mm_cvtsi128_si32(*(__m128i *)v42);
          *(_OWORD *)v180 = *(_OWORD *)v42;
          LOBYTE(v150) = v45;
          v181 = v38;
        }
        v35 = 1;
      }
      v37 = v41 + 1;
    }
    v46 = v136;
    v135 = v35;
    if ( v35 )
    {
      v135 = v35;
      if ( v136 )
      {
        *(__m128i *)(v16 + 28) = v36;
        v135 = v35;
        *(_QWORD *)(v16 + 44) = v38;
        goto LABEL_78;
      }
    }
LABEL_79:
    if ( qword_1400193E8 )
    {
      v133 = &v147;
      v131 = &v168;
      v130 = &v173;
      v47 = qword_1400193E8(DeferredContext, v16 - 124, &v167, &v172);
      v48 = (unsigned __int8)v149;
      if ( v47 < 0 )
        v48 = 0;
      v149 = v48;
    }
    GetCpcRegisterDefinitionTable(v19, &v171, &v162);
    if ( v162 )
    {
      v49 = v171;
      v50 = v162;
      LOBYTE(v51) = v151;
      do
      {
        v52 = *v49;
        v49 += 6;
        v51 = (unsigned __int8)v51;
        if ( *(_BYTE *)(v52 + v19) == 10 )
          v51 = 1;
        --v50;
      }
      while ( v50 );
      v151 = v51;
    }
    LOBYTE(v3) = v154;
    v16 += 1400LL;
    LOBYTE(v5) = v155;
  }
  if ( !v167 || !v168 )
  {
    LOBYTE(v17) = 0;
    v149 = v17;
  }
  if ( (_BYTE)v151 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400197C8,
      0LL);
    ResetEnumerationContext((__int64 *)v160);
    v53 = v12 + 144;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
    {
      if ( *(_BYTE *)(v53 - 20) )
      {
        v54 = *(_QWORD *)v53;
        v55 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v53 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v137 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v137 = 1;
        }
        if ( (*(_BYTE *)(v55[32] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(*(_QWORD *)(v159 + 256));
          if ( started < 0 )
          {
            v57 = v159;
LABEL_115:
            ResetEnumerationContext((__int64 *)v160);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
            {
              if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
              {
                v58 = *(_QWORD *)(v57 + 256);
                (*(void (__fastcall **)(_QWORD))(v58 + 136))(*(_QWORD *)(v58 + 72));
                *(_DWORD *)(v58 + 144) &= ~1u;
              }
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_1400197C8);
            goto LABEL_318;
          }
        }
        WriteGenAddrMaybeHiddenEx((__int64)v55, (char *)(v54 + 344), 1LL);
      }
      v53 += 1400LL;
    }
    ResetEnumerationContext((__int64 *)v160);
    v57 = v159;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
      {
        started = ExecutePccCommand(*(_QWORD *)(v57 + 256));
        if ( started < 0 )
          goto LABEL_115;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400197C8);
  }
  ResetEnumerationContext((__int64 *)v160);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
  {
    v60 = (__int64 *)(v12 + 144);
    do
    {
      v61 = *v60;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v61 + 32) == 10
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (unsigned __int8 *)(v61 + 32), v59) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v62) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v62,
            1,
            33,
            (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
        }
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
          if ( (unsigned int)dword_140018C60 > 5 && tlgKeywordOn((__int64)&dword_140018C60, 0x400000000000LL) )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140018C60,
              (unsigned __int8 *)dword_140014E83,
              v63,
              v64,
              (ULONG)2,
              (struct _EVENT_DATA_DESCRIPTOR *)v180);
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v61 + 32) = *(_QWORD *)(v4 + 32);
        *(_DWORD *)(v61 + 40) = *(_DWORD *)(v4 + 40);
        if ( *(_BYTE *)(v61 + 8) == 10 )
        {
          *(_QWORD *)(v61 + 8) = *(_QWORD *)(v4 + 8);
          *(_DWORD *)(v61 + 16) = *(_DWORD *)(v4 + 16);
        }
        if ( *(_BYTE *)(v61 + 56) == 10 )
        {
          *(_QWORD *)(v61 + 56) = *(_QWORD *)(v4 + 56);
          *(_DWORD *)(v61 + 64) = *(_DWORD *)(v4 + 64);
        }
        if ( *(_BYTE *)(v61 + 80) == 10 )
        {
          *(_QWORD *)(v61 + 80) = *(_QWORD *)(v4 + 80);
          *(_DWORD *)(v61 + 88) = *(_DWORD *)(v4 + 88);
        }
        if ( *(_BYTE *)(v61 + 440) == 10 )
        {
          *(_QWORD *)(v61 + 440) = *(_QWORD *)(v4 + 440);
          *(_DWORD *)(v61 + 448) = *(_DWORD *)(v4 + 448);
        }
        if ( *(_BYTE *)(v61 + 104) == 10 )
        {
          *(_QWORD *)(v61 + 104) = *(_QWORD *)(v4 + 104);
          *(_DWORD *)(v61 + 112) = *(_DWORD *)(v4 + 112);
        }
      }
      v60 += 175;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) );
    v6 = 0LL;
    v12 = v174;
  }
  ResetEnumerationContext((__int64 *)v160);
  for ( j = v12 + 132; ; j += 1400LL )
  {
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
    {
      if ( *(_QWORD *)(v12 + 40) >= *(_QWORD *)(v12 + 48) )
      {
        if ( *(_QWORD *)(v12 + 56) >= *(_QWORD *)(v12 + 64) )
        {
          v87 = v153;
          v88 = v159;
          v89 = (int)v165;
          inited = AllocateAndInitKernelPerfStatesRegistration(v159, (int)v165, (unsigned int)((_BYTE)v153 != 0) + 1);
          v170 = inited;
          v6 = inited;
          if ( inited )
          {
            v91 = v149;
            v92 = v163;
            *(_WORD *)(inited + 4) = v163;
            if ( v91 )
            {
              *(_QWORD *)(inited + 464) = v167;
              *(_QWORD *)(inited + 472) = v172;
              if ( v164 && v173 && v92 == 254 )
              {
                *(_QWORD *)(inited + 480) = v173;
                *(_QWORD *)(inited + 104) = v12;
              }
              v93 = v168;
              v94 = v135;
            }
            else
            {
              v94 = v135;
              if ( v135 )
              {
                if ( v136 )
                {
                  v20 = (_BYTE)v150 == 0;
                  *(_QWORD *)(inited + 464) = PerfControlCpcSingleRegister;
                  v95 = PerfControlCpcSingleRegisterHidden;
                  if ( v20 )
                    v95 = PerfControlCpcSingleRegister;
                }
                else
                {
                  *(_QWORD *)(inited + 464) = PerfControlCpc;
                  v95 = (void *)qword_140019388;
                  if ( !qword_140019388 || !CpcHiddenProcessorMitigationReported )
                    v95 = PerfControlCpcHidden;
                }
              }
              else
              {
                v95 = AcpiCStateIdleComplete;
                *(_QWORD *)(v6 + 464) = AcpiCStateIdleComplete;
              }
              *(_QWORD *)(v6 + 472) = v95;
              v93 = PerfSelectionCpc;
            }
            *(_QWORD *)(v6 + 448) = v93;
            if ( (_BYTE)v151 )
            {
              if ( v138 )
                *(_QWORD *)(v6 + 488) = CpcReadFeedback;
              if ( v139 )
              {
                *(_QWORD *)(v6 + 496) = CpcAcquirePerformance;
                *(_QWORD *)(v6 + 504) = CpcCommitPerformance;
              }
              if ( v144 )
              {
                *(_QWORD *)(v6 + 424) = AcquirePccSubspace;
                *(_QWORD *)(v6 + 432) = ExecutePccWrite;
              }
              v96 = *(_DWORD *)(*(_QWORD *)(v88 + 256) + 84LL);
              if ( v96 )
              {
                v91 = v149;
                *(_DWORD *)(v6 + 40) = 0x989680 / (v96 >> 1);
              }
            }
            if ( IsSupported || _bittest64((const signed __int64 *)(v88 + 280), 0x26u) )
              *(_QWORD *)(v6 + 440) = CpcReinitializeHandler;
            *(_BYTE *)(v6 + 6) = 0;
            v97 = v94 || v91;
            v98 = v161;
            *(_BYTE *)(v6 + 7) = v97;
            *(_BYTE *)(v6 + 8) = v140;
            *(_BYTE *)(v6 + 52) = v141;
            v99 = v152;
            if ( v98 )
              v99 = v98;
            *(_DWORD *)(v6 + 20) = v99;
            *(_DWORD *)(v6 + 24) = *(_DWORD *)(v12 + 100);
            v100 = *(_DWORD *)(v12 + 108);
            *(_DWORD *)(v6 + 28) = v100;
            v101 = *(_DWORD *)(v12 + 112);
            *(_DWORD *)(v6 + 32) = v101;
            if ( !v100 )
              *(_DWORD *)(v6 + 28) = 1;
            if ( !v101 )
              *(_DWORD *)(v6 + 32) = 1;
            *(_QWORD *)(v6 + 56) = *(_QWORD *)(v12 + 64);
            *(_QWORD *)(v6 + 64) = *(_QWORD *)(v12 + 48);
            v102 = *(_QWORD *)(v88 + 344);
            if ( v102 )
              *(_QWORD *)(v6 + 376) = v102;
            v20 = (_BYTE)v156 == 0;
            *(_QWORD *)(v6 + 392) = *(_QWORD *)(v88 + 352);
            if ( !v20 )
              *(_BYTE *)(v6 + 9) = 1;
            if ( (_BYTE)v157 )
            {
              if ( v91 )
                *(_BYTE *)(v6 + 10) = 1;
              else
                *(_QWORD *)(v6 + 408) = CpcSetAutonomousActivityWindow;
            }
            if ( v142 )
              *(_QWORD *)(v6 + 416) = CpcSetAutonomousMode;
            if ( v146 )
              *(_QWORD *)(v6 + 384) = CpcSetTimeWindow;
            if ( (*(_DWORD *)(v88 + 280) & 0x400000) != 0 && v91 && v147 && (v92 == 254 || v89 == 1) )
            {
              *(_BYTE *)(v6 + 11) = 1;
              *(_QWORD *)(v88 + 280) = *(_QWORD *)(v88 + 280);
              *(_BYTE *)(v6 + 12) = 1;
              *(_DWORD *)(v6 + 48) = v158;
            }
            if ( v148 )
            {
              v103 = *(unsigned int *)(v6 + 20);
              *(_BYTE *)(v6 + 13) = 1;
              v104 = *(_QWORD *)(v12 + 48);
              v105 = (v104 >> 1) + v103;
              LODWORD(v103) = v105 / v104;
              *(_DWORD *)(v6 + 72) = v103;
              *(_DWORD *)(v6 + 76) = *(_DWORD *)(v12 + 40) * v103;
              *(_DWORD *)(v6 + 80) = *(_DWORD *)(v12 + 48) * v103;
              *(_DWORD *)(v6 + 84) = *(_DWORD *)(v12 + 64) * v103;
              *(_DWORD *)(v6 + 88) = *(_DWORD *)(v12 + 1344);
            }
            if ( *(_DWORD *)(v6 + 88) )
              *(_QWORD *)(v6 + 456) = PerfPriorityCpc;
            v106 = *(_QWORD *)(v12 + 48);
            v107 = *(_QWORD *)(v12 + 72);
            v108 = *(_QWORD *)(v6 + 560);
            if ( v106 == v107 )
              LODWORD(v109) = 0x10000;
            else
              v109 = (v107 << 16) / v106;
            *(_DWORD *)(v108 + 8) = v109;
            *(_QWORD *)v108 = PerfReadWrappingCounter;
            *(_DWORD *)(v108 + 12) = 1;
            *(_BYTE *)(v108 + 17) = 1;
            *(_BYTE *)(v108 + 16) = v138 == 0;
            if ( v87 )
            {
              v110 = *(_QWORD *)(v6 + 560);
              *(_QWORD *)(v110 + 32) = 0x10000LL;
              *(_QWORD *)(v110 + 24) = PerfReadWrappingCounter;
              *(_WORD *)(v110 + 40) = 257;
            }
            DisplayKernelPerfStates(v6, (__int64)PerfReadWrappingCounter, v106);
            v161 = *(_QWORD *)(v6 + 568);
            v165 = *(_QWORD **)(v6 + 576);
            ResetEnumerationContext((__int64 *)v160);
            if ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
            {
              v111 = v161;
              v112 = v12 + 64;
              do
              {
                v113 = *(_QWORD *)(v112 + 80);
                v114 = 100;
                v115 = DeferredContext;
                v161 = v113;
                if ( *(_BYTE *)(v112 + 67) )
                {
                  v116 = v113 + 104;
                  if ( *(_BYTE *)(v113 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
                  {
                    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                    v117 = &PreviousAffinity;
                    if ( v137 )
                      v117 = 0LL;
                    KeSetSystemGroupAffinityThread(&Affinity, v117);
                    v137 = 1;
                  }
                  GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v115, v116);
                  if ( GenAddrMaybeHidden > *(_QWORD *)(v112 - 16) )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v119) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v119,
                        1,
                        44,
                        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)(v112 - 16);
                  }
                  if ( GenAddrMaybeHidden < *(_QWORD *)v112 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v119) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v119,
                        1,
                        45,
                        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)v112;
                  }
                  v114 = *(_DWORD *)(v112 + 48);
                  *(_QWORD *)(v112 + 24) = GenAddrMaybeHidden;
                  v120 = 100 * GenAddrMaybeHidden / *(_QWORD *)(v112 - 16);
                  if ( (unsigned int)v120 > v114 )
                    v114 = v120;
                  *(_DWORD *)(v112 + 52) = v114;
                  if ( v114 != v115[185] )
                    ProcLibCapChange(v159, (unsigned int)v115[116], (unsigned int)v115[128], v114);
                }
                else
                {
                  *(_QWORD *)(v112 + 24) = *(_QWORD *)(v112 - 16);
                }
                InitCommonPerfStateContext((_DWORD)v115, v112 - 64, v111, v114, v114 < 0x64 ? 2 : 0);
                v121 = v161;
                v122 = v165;
                *(_QWORD *)(v159 + 216) = v112 - 64;
                *v122 = v112 + 136;
                *(_QWORD *)(v112 + 184) = v169;
                *(_QWORD *)(v112 + 192) = v121;
                v123 = *(_BYTE *)(v121 + 297);
                if ( v123 < 0x40u )
                  *(_QWORD *)(v112 + 168) = (1LL << v123) - 1;
                v124 = *(_BYTE *)(v121 + 273);
                if ( v124 < 0x40u )
                  *(_QWORD *)(v112 + 176) = (1LL << v124) - 1;
                LogicalProcessorIndex = GetLogicalProcessorIndex((__int64)v115);
                v127 = (_QWORD *)(v126 + 8);
                *(_DWORD *)(v112 + 200) = LogicalProcessorIndex;
                v165 = v127;
                if ( (_BYTE)v153 )
                {
                  *v127 = v112 + 664;
                  *(_DWORD *)(v112 + 728) = *(_DWORD *)(v112 + 200);
                  *(_QWORD *)(v112 + 712) = *((_QWORD *)v115 + 42);
                  v165 = v127 + 1;
                }
                v111 += 32;
                v112 += 1400LL;
              }
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) );
              v6 = v170;
              v12 = v174;
              v88 = v159;
            }
            if ( v137 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            v128 = v175;
            *(_BYTE *)(v6 + 15) = 1;
            started = v128(v6);
            if ( started >= 0 )
            {
              ResetEnumerationContext((__int64 *)v160);
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
              {
                *((_QWORD *)DeferredContext + 31) = v12;
                v12 += 1400LL;
              }
              if ( _bittest64((const signed __int64 *)(v88 + 280), 0x26u) )
              {
                ResetEnumerationContext((__int64 *)v160);
                while ( !(unsigned int)EnumerateNextDevice((__int64 *)v160, &DeferredContext) )
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
        v72 = 43;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_92;
        v72 = 42;
      }
LABEL_163:
      LOBYTE(v66) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v66,
        1,
        v72,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
      goto LABEL_92;
    }
    v67 = *(_QWORD *)(j + 12);
    v68 = DeferredContext;
    if ( (*(_BYTE *)(v67 + 8) == 127
       || *(_BYTE *)(v67 + 32) == 127
       || *(_BYTE *)(v67 + 56) == 127
       || *(_BYTE *)(v67 + 80) == 127
       || *(_BYTE *)(v67 + 440) == 127
       || *(_BYTE *)(v67 + 368) == 127)
      && !*((_DWORD *)DeferredContext + 20) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v69 = &PreviousAffinity;
      if ( v137 )
        v69 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v69);
      v137 = 1;
    }
    *(_BYTE *)j = v138;
    *(_BYTE *)(j + 1) = v154;
    *(_BYTE *)(j + 2) = v155;
    *(_BYTE *)(j + 3) = v139;
    if ( CpcRegisterIsSupportedEx(v67 + 488) && (*v70 != 126 || *(_DWORD *)(v67 + 492)) )
    {
      v71 = ReadGenAddrMaybeHiddenEx((__int64)v68, (__int64)v70);
      v161 = v71;
      if ( !(_DWORD)v71 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_92;
        v72 = 34;
        goto LABEL_163;
      }
    }
    else
    {
      LODWORD(v71) = v152;
    }
    *(_DWORD *)(j - 36) = v71;
    *(_QWORD *)(j - 92) = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 8);
    v73 = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 32);
    *(_QWORD *)(j - 84) = v73;
    if ( !v73 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v72 = 35;
      goto LABEL_163;
    }
    v74 = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 56);
    v75 = *(_QWORD *)(j - 84);
    *(_QWORD *)(j - 76) = v74;
    if ( v74 > v75 )
      *(_QWORD *)(j - 76) = v75;
    *(_QWORD *)(j - 68) = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 80);
    *(_QWORD *)(j - 60) = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 440);
    if ( CpcRegisterIsSupportedEx(v67 + 368) )
    {
      v78 = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 368) != 0;
      v141 = v78;
      if ( *(_BYTE *)(v67 + 368) == 126 )
      {
        v142 = 0;
        v141 = v78;
      }
      else
      {
        v142 = 1;
      }
    }
    v79 = *(_QWORD *)(j + 1204);
    if ( v79 )
      *(_DWORD *)(j + 1212) = ReadGenAddrMaybeHiddenEx((__int64)v68, v79 + 56);
    if ( j - 132 != v12 )
      break;
LABEL_188:
    v82 = *(_QWORD *)(j - 84);
    v83 = 100LL * *(_QWORD *)(j - 92) / v82;
    *(_DWORD *)(j - 32) = v83;
    *(_DWORD *)(j - 28) = v83;
    v84 = 100LL * *(_QWORD *)(j - 76) / v82;
    v85 = 100LL * *(_QWORD *)(j - 68) / v82;
    if ( !(_DWORD)v85 )
      LODWORD(v85) = 1;
    *(_DWORD *)(j - 20) = v85;
    if ( !(_DWORD)v84 )
      LODWORD(v84) = 1;
    *(_DWORD *)(j - 24) = v84;
  }
  v80 = *(_QWORD *)(j - 92);
  v81 = *(_QWORD *)(v12 + 40);
  if ( v80 != v81 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v86 = 36;
    goto LABEL_201;
  }
  v80 = *(_QWORD *)(j - 84);
  v81 = *(_QWORD *)(v12 + 48);
  if ( v80 != v81 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v86 = 37;
    goto LABEL_201;
  }
  v80 = *(_QWORD *)(j - 68);
  v81 = *(_QWORD *)(v12 + 64);
  if ( v80 != v81 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v86 = 38;
LABEL_201:
    v134 = v81;
    v132 = v80;
LABEL_202:
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v86,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v132,
      v134);
    goto LABEL_92;
  }
  if ( *(_QWORD *)(j - 76) == *(_QWORD *)(v12 + 56) )
    goto LABEL_183;
  if ( !v140 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v134 = *(_QWORD *)(v12 + 56);
    v86 = 39;
    v132 = *(_QWORD *)(j - 76);
    goto LABEL_202;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v133) = HIDWORD(*(_QWORD *)(v12 + 56));
    HIDWORD(v131) = HIDWORD(*(_QWORD *)(j - 76));
    WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v79, v76, v77, (int)v130);
  }
  *(_QWORD *)(j - 76) = *(_QWORD *)(v12 + 56);
LABEL_183:
  if ( !*(_QWORD *)(j + 1204) || !*(_QWORD *)(v12 + 1336) || *(_DWORD *)(j + 1212) == *(_DWORD *)(v12 + 1344) )
    goto LABEL_188;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v133) = *(_DWORD *)(v12 + 1344);
    LODWORD(v131) = *(_DWORD *)(j + 1212);
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x29u,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v131,
      v133);
  }
LABEL_92:
  started = -1073741811;
LABEL_318:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, (ULONG)1919119952);
  if ( v12 )
    ExFreePoolWithTag((PVOID)v12, (ULONG)1919119952);
  return (unsigned int)started;
}
