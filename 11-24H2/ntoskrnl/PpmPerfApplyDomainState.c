/*
 * XREFs of PpmPerfApplyDomainState @ 0x1403A14F0
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x1403A1430 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmEventDomainPerfStateChange @ 0x14032CA00 (PpmEventDomainPerfStateChange.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     PpmGetPerfPolicyClass @ 0x1403A2FAC (PpmGetPerfPolicyClass.c)
 *     PpmPerfApplyCapsAndFloors @ 0x1403A3174 (PpmPerfApplyCapsAndFloors.c)
 *     PpmEventQosClassPerfSelection @ 0x1403A32A4 (PpmEventQosClassPerfSelection.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r12
  unsigned __int8 PerfPolicyClass; // al
  unsigned int v5; // r11d
  unsigned int v6; // r15d
  __int64 *v7; // r14
  __int64 v8; // rdi
  int v9; // r13d
  unsigned __int64 v10; // rsi
  int v11; // eax
  char v12; // r9
  char v13; // r10
  unsigned int v14; // r9d
  __int64 v15; // rax
  unsigned int v16; // r11d
  __int64 v17; // r10
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int128 *v20; // rcx
  __int64 v21; // rdx
  char v22; // r8
  char v23; // si
  __int64 v25; // r15
  unsigned int v26; // eax
  unsigned int v27; // esi
  char v28; // r9
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // r12d
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // edi
  unsigned int v44; // r14d
  char v45; // r13
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  char v52; // al
  int IsSubsetAffinity; // eax
  unsigned int v54; // edx
  char v55; // [rsp+68h] [rbp-59h]
  char v56; // [rsp+69h] [rbp-58h]
  unsigned __int8 v57; // [rsp+6Ah] [rbp-57h]
  unsigned int v58; // [rsp+6Ch] [rbp-55h] BYREF
  unsigned int v59; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v60; // [rsp+74h] [rbp-4Dh] BYREF
  unsigned int v61; // [rsp+78h] [rbp-49h]
  unsigned int v62; // [rsp+7Ch] [rbp-45h]
  unsigned int v63; // [rsp+80h] [rbp-41h]
  unsigned int v64; // [rsp+84h] [rbp-3Dh]
  unsigned int v65; // [rsp+88h] [rbp-39h]
  __int64 *v66; // [rsp+90h] [rbp-31h]
  __int128 v67; // [rsp+98h] [rbp-29h]
  __int64 v68; // [rsp+A8h] [rbp-19h]
  __int64 v69; // [rsp+B0h] [rbp-11h]
  __int128 v70; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v71; // [rsp+C8h] [rbp+7h]
  __int128 v72; // [rsp+D8h] [rbp+17h]
  __int64 v73; // [rsp+E8h] [rbp+27h]

  v73 = 0LL;
  v1 = *(_QWORD *)(a1 + 312);
  v63 = 0;
  v67 = 0uLL;
  v3 = *(_QWORD *)(a1 + 16);
  v69 = *(_QWORD *)(v1 + 8);
  v70 = 0LL;
  v71 = 0LL;
  v56 = 0;
  v66 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
  v72 = 0LL;
  PerfPolicyClass = PpmGetPerfPolicyClass(v3);
  v6 = *(_DWORD *)(a1 + 452);
  v57 = PerfPolicyClass;
  v58 = v5 + 100;
  v60 = *(_DWORD *)(a1 + 460);
  v61 = v5;
  v55 = v5;
  v62 = v5;
  v59 = v6;
  if ( PpmPerfArtificialDomainEnabled == v5
    || (IsSubsetAffinity = KeIsSubsetAffinityEx(a1 + 24, &PpmPerfNewCoreParkingMask), v5 = 0, IsSubsetAffinity)
    || *(_DWORD *)(a1 + 304) )
  {
    v7 = *(__int64 **)a1;
    v8 = a1;
  }
  else
  {
    v8 = PpmPerfDomainHead;
    v7 = &PpmPerfDomainHead;
  }
  v9 = 1;
  while ( (__int64 *)v8 != v7 )
  {
    v10 = *(unsigned int *)(v8 + 524);
    if ( v8 == a1 )
      goto LABEL_13;
    if ( *(_DWORD *)(v8 + 304) != v5 )
      goto LABEL_9;
    v11 = KeIsSubsetAffinityEx(v8 + 24, &PpmPerfNewCoreParkingMask);
    v5 = 0;
    if ( v11 )
      goto LABEL_9;
    if ( *(_QWORD *)(v3 - 35056) != *(_QWORD *)(*(_QWORD *)(v8 + 16) - 35056LL) )
      goto LABEL_9;
    v12 = *(_BYTE *)(a1 + 300);
    v13 = *(_BYTE *)(v8 + 300);
    if ( v12 != v13 && !PpmPerfQosEnabled )
      goto LABEL_9;
    if ( *(_BYTE *)(a1 + 301) != *(_BYTE *)(v8 + 301) )
    {
      v10 = (*(_QWORD *)(v8 + 480) * v10 + (*(_QWORD *)(a1 + 480) >> 1)) / *(_QWORD *)(a1 + 480);
      if ( (unsigned int)v10 > v6 )
        LODWORD(v10) = v6;
    }
    if ( v12 == v13 )
    {
LABEL_13:
      if ( (unsigned int)v10 <= v61 )
        LODWORD(v10) = v61;
      v61 = v10;
      if ( *(_BYTE *)(v8 + 532) != (_BYTE)v5 )
      {
        v55 = 1;
        v61 = v10;
      }
    }
    else
    {
      if ( (unsigned int)v10 <= v62 )
        LODWORD(v10) = v62;
      v62 = v10;
    }
LABEL_9:
    v8 = *(_QWORD *)v8;
  }
  PpmPerfApplyCapsAndFloors(&v59, &v60, &v58, a1);
  v14 = v58;
  v64 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v68 = 0LL;
  do
  {
    v65 = PpmQosClassesOrdered[2 * v17];
    v18 = v65;
    if ( *(_DWORD *)(a1 + 4LL * v65 + 760) )
    {
      if ( LOBYTE(PpmQosClassesOrdered[2 * v17 + 1]) )
        v19 = a1 + 56 * v15;
      else
        v19 = a1;
      v20 = (__int128 *)(v19 + 808);
      goto LABEL_22;
    }
    v25 = 32LL * v65;
    if ( *(_BYTE *)(v25 + a1 + 557) )
      v26 = *(_DWORD *)(a1 + 460);
    else
      v26 = *(_DWORD *)(a1 + 456);
    v27 = *(_DWORD *)(v25 + a1 + 544);
    v28 = *(_BYTE *)(v25 + a1 + 558);
    v29 = 100;
    if ( v26 > v27 )
      v27 = v26;
    if ( v28 )
    {
      v30 = *(_DWORD *)(a1 + 452);
    }
    else
    {
      v30 = v58;
      if ( !PpmPerfBoostAtGuaranteed )
        v30 = 100;
    }
    v31 = *(_DWORD *)(v25 + a1 + 536);
    if ( v31 < 0x64 && v30 >= v31 )
      v30 = *(_DWORD *)(v25 + a1 + 536);
    v32 = *(_DWORD *)(v25 + a1 + 540);
    if ( v30 < v32 )
      v32 = v30;
    if ( !PpmPerfMaxOverrideEnabled )
    {
      if ( PpmCheckLatencyBoostActive )
      {
        v29 = *(unsigned __int8 *)(v25 + a1 + 559);
      }
      else if ( v55 )
      {
        v29 = *((_DWORD *)v66 + v57 + 32);
      }
      else
      {
        v29 = 0;
      }
    }
    v33 = v32;
    if ( v29 < v32 )
      v33 = v29;
    if ( v33 > v27 )
    {
      v34 = v32;
      if ( v29 < v32 )
        v34 = v29;
    }
    else
    {
      v34 = v27;
    }
    if ( v34 < v58 )
    {
      v51 = v32;
      if ( v29 < v32 )
        v51 = v29;
      if ( v51 > v27 )
      {
        v35 = v32;
        if ( v29 < v32 )
          v35 = v29;
      }
      else
      {
        v35 = v27;
      }
    }
    else
    {
      v35 = v58;
    }
    if ( v35 > v60 )
    {
      v48 = v32;
      if ( v29 < v32 )
        v48 = v29;
      if ( v48 > v27 )
      {
        v49 = v32;
        if ( v29 < v32 )
          v49 = v29;
      }
      else
      {
        v49 = v27;
      }
      if ( v49 >= v58 )
      {
        v36 = v58;
      }
      else
      {
        v50 = v32;
        if ( v29 < v32 )
          v50 = v29;
        if ( v50 > v27 )
        {
          v36 = v32;
          if ( v29 < v32 )
            v36 = v29;
        }
        else
        {
          v36 = v27;
        }
      }
    }
    else
    {
      v36 = v60;
    }
    v37 = v27;
    if ( v32 > v27 )
      v37 = v32;
    if ( v37 < v59 )
    {
      v38 = v27;
      if ( v32 > v27 )
        v38 = v32;
    }
    else
    {
      v38 = v59;
    }
    if ( v38 > v60 )
    {
      v47 = v27;
      if ( v32 > v27 )
        v47 = v32;
      if ( v47 < v59 )
      {
        if ( v32 > v27 )
          v27 = v32;
      }
      else
      {
        v27 = v59;
      }
    }
    else
    {
      v27 = v60;
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v39 = v27;
      v40 = v27;
LABEL_68:
      if ( v39 < v36 )
        v40 = v36;
      goto LABEL_70;
    }
    if ( *(_BYTE *)(v25 + a1 + 561) )
    {
      v39 = v62;
      if ( v61 > v62 )
        v39 = v61;
    }
    else
    {
      v39 = v61;
    }
    v40 = v39;
    if ( v39 <= v27 )
      goto LABEL_68;
    v40 = v27;
LABEL_70:
    if ( v28 == 2 || (unsigned __int8)(v28 - 4) <= 2u )
    {
      if ( (unsigned __int8)(v28 - 5) <= 1u || (v41 = 100, PpmPerfBoostAtGuaranteed) )
        v41 = v58;
      if ( (unsigned int)v40 >= v41 )
        v40 = v27;
    }
    v42 = 0;
    if ( !PpmPerfMaxOverrideEnabled )
      v42 = *((_DWORD *)v66 + 19);
    if ( v42 >= v39 )
      v43 = 0;
    else
      v43 = v39 - v42;
    if ( v43 < v36 )
      v43 = v36;
    if ( v43 > v58 )
      v43 = v58;
    if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
      v44 = 0;
    else
      v44 = *(_DWORD *)(v25 + a1 + 552);
    if ( PpmCheckLatencyBoostActive && v44 >= *(unsigned __int8 *)(v25 + a1 + 560) )
      v44 = *(unsigned __int8 *)(v25 + a1 + 560);
    if ( v55 && v44 >= *((_DWORD *)v66 + v57 + 30) )
      v44 = *((_DWORD *)v66 + v57 + 30);
    v45 = *(_BYTE *)(v25 + a1 + 556);
    v46 = guard_dispatch_icall_no_overrides(v69, v40);
    *((_QWORD *)&v71 + 1) = __PAIR64__(v27, v36);
    if ( v43 > v46 )
      v43 = v46;
    *(_QWORD *)&v71 = __PAIR64__(v63, v46);
    *(_QWORD *)&v72 = __PAIR64__(v44, v43);
    v18 = v65;
    BYTE4(v73) = 0;
    *(_WORD *)((char *)&v73 + 5) = 0;
    LODWORD(v73) = v45 == 0;
    HIBYTE(v73) = BYTE1(v73);
    v70 = v67;
    v9 = 1;
    DWORD2(v72) = *(_DWORD *)(v25 + a1 + 548);
    HIDWORD(v72) = *(_DWORD *)(v25 + a1 + 564);
    if ( !v65 )
    {
      v52 = BYTE1(v73);
      if ( *(_QWORD *)(a1 + 408) )
        v52 = 1;
      BYTE1(v73) = v52;
    }
    v14 = v58;
    v20 = &v70;
    v17 = v68;
    v16 = v64;
LABEL_22:
    v21 = 56LL * v18;
    if ( !*(_BYTE *)(a1 + 1212)
      && (v22 = *((_BYTE *)v20 + 48), *(_BYTE *)(v21 + a1 + 856) == v22)
      && *(_DWORD *)(v21 + a1 + 832) == *((_DWORD *)v20 + 6)
      && *(_DWORD *)(v21 + a1 + 836) == *((_DWORD *)v20 + 7)
      && *(_DWORD *)(v21 + a1 + 844) == *((_DWORD *)v20 + 9)
      && *(_DWORD *)(v21 + a1 + 848) == *((_DWORD *)v20 + 10)
      && *(_QWORD *)(v21 + a1 + 808) == *(_QWORD *)v20
      && *(_QWORD *)(v21 + a1 + 816) == *((_QWORD *)v20 + 1)
      && v14 == *(_DWORD *)(a1 + 528)
      && (v22
       || *(_DWORD *)(v21 + a1 + 840) == *((_DWORD *)v20 + 8) && *(_DWORD *)(v21 + a1 + 824) == *((_DWORD *)v20 + 4)) )
    {
      v23 = v56;
    }
    else
    {
      v23 = 1;
      v56 = 1;
      *(_OWORD *)(v21 + a1 + 808) = *v20;
      *(_OWORD *)(v21 + a1 + 824) = v20[1];
      *(_OWORD *)(v21 + a1 + 840) = v20[2];
      *(_QWORD *)(v21 + a1 + 856) = *((_QWORD *)v20 + 6);
    }
    ++v16;
    v15 = v18;
    ++v17;
    v64 = v16;
    v68 = v17;
  }
  while ( v16 < 7 );
  if ( v23 )
  {
    v54 = v58;
    if ( *(_DWORD *)(a1 + 804) != -1 )
      v9 = *(_DWORD *)(a1 + 804) + 1;
    *(_DWORD *)(a1 + 804) = v9;
    *(_BYTE *)(a1 + 1212) = 0;
    *(_DWORD *)(a1 + 528) = v54;
    *(LARGE_INTEGER *)(a1 + 1200) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 1208) = 0;
    PpmEventDomainPerfStateChange(a1);
    PpmEventQosClassPerfSelection(a1, 0LL);
  }
  return v23;
}
