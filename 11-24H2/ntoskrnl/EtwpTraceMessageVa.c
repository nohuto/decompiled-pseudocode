/*
 * XREFs of EtwpTraceMessageVa @ 0x1402CF490
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     WmiTraceMessage @ 0x1402D1120 (WmiTraceMessage.c)
 *     WmiTraceMessageVa @ 0x1404B2190 (WmiTraceMessageVa.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     KeIsTraceCallbackAllowed @ 0x1402D0E7C (KeIsTraceCallbackAllowed.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall EtwpTraceMessageVa(
        unsigned __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int16 v6; // r10
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  char v15; // bl
  struct _KTHREAD *v16; // rax
  __int64 v17; // r8
  signed __int64 *v18; // r9
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // eax
  char v24; // si
  char v25; // r14
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rdi
  signed __int32 v38; // ecx
  __int64 v39; // r9
  volatile signed __int32 *v40; // rax
  __int16 v41; // ax
  __int16 v42; // r8
  char v43; // r9
  signed __int32 *v44; // rdi
  signed __int32 *v45; // r8
  signed __int32 *v46; // rdx
  struct _KTHREAD *v47; // rdx
  unsigned __int64 v48; // r15
  char *v49; // rdx
  size_t v50; // r13
  int v51; // r9d
  __int64 v52; // rdi
  __int64 v53; // rdx
  unsigned int v54; // r10d
  __int64 v55; // r11
  signed __int64 *v56; // roff
  signed __int64 v57; // rax
  signed __int64 v58; // rtt
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r10
  int v64; // r10d
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // r10d
  __int64 v69; // r11
  int *v70; // r11
  int v71; // edi
  unsigned int v72; // eax
  int v73; // r8d
  unsigned int v74; // r10d
  unsigned int v75; // r10d
  char v76; // [rsp+40h] [rbp-1E8h]
  char v77; // [rsp+41h] [rbp-1E7h]
  unsigned int v78; // [rsp+44h] [rbp-1E4h]
  __int16 v79; // [rsp+48h] [rbp-1E0h] BYREF
  unsigned __int8 v80; // [rsp+50h] [rbp-1D8h]
  __int16 v81; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v82; // [rsp+60h] [rbp-1C8h]
  unsigned int v83; // [rsp+68h] [rbp-1C0h]
  signed __int32 *v84; // [rsp+70h] [rbp-1B8h]
  __int64 v85; // [rsp+78h] [rbp-1B0h]
  __int64 v86; // [rsp+80h] [rbp-1A8h]
  __int64 v87; // [rsp+88h] [rbp-1A0h]
  unsigned __int64 v88; // [rsp+90h] [rbp-198h]
  unsigned __int64 v89; // [rsp+98h] [rbp-190h]
  unsigned __int64 v90; // [rsp+A0h] [rbp-188h]
  __int128 *v91; // [rsp+A8h] [rbp-180h]
  int v92; // [rsp+B0h] [rbp-178h] BYREF
  int v93; // [rsp+B8h] [rbp-170h] BYREF
  unsigned int v94; // [rsp+C0h] [rbp-168h]
  int v95; // [rsp+C4h] [rbp-164h]
  int v96; // [rsp+C8h] [rbp-160h]
  int v97; // [rsp+CCh] [rbp-15Ch]
  int v98; // [rsp+D0h] [rbp-158h]
  _QWORD v99[2]; // [rsp+D8h] [rbp-150h] BYREF
  __int64 v100; // [rsp+E8h] [rbp-140h]
  __int128 v101; // [rsp+F0h] [rbp-138h] BYREF
  __int64 v102; // [rsp+100h] [rbp-128h]
  unsigned int CurrentRunTime; // [rsp+108h] [rbp-120h]
  unsigned __int64 v104; // [rsp+110h] [rbp-118h]
  __int64 v105; // [rsp+118h] [rbp-110h]
  _DWORD *v106; // [rsp+120h] [rbp-108h]
  unsigned __int64 v107; // [rsp+128h] [rbp-100h]
  struct _KTHREAD *v108; // [rsp+130h] [rbp-F8h]
  __int128 v109; // [rsp+138h] [rbp-F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp-D8h] BYREF
  __int16 *v111; // [rsp+160h] [rbp-C8h]
  __int64 v112; // [rsp+168h] [rbp-C0h]
  int *v113; // [rsp+170h] [rbp-B8h]
  __int64 v114; // [rsp+178h] [rbp-B0h]
  __int64 v115; // [rsp+180h] [rbp-A8h]
  int v116; // [rsp+188h] [rbp-A0h]
  int v117; // [rsp+18Ch] [rbp-9Ch]
  int *v118; // [rsp+190h] [rbp-98h]
  __int64 v119; // [rsp+198h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+1A0h] [rbp-88h] BYREF
  __int16 *v121; // [rsp+1B0h] [rbp-78h]
  __int64 v122; // [rsp+1B8h] [rbp-70h]
  int *v123; // [rsp+1C0h] [rbp-68h]
  __int64 v124; // [rsp+1C8h] [rbp-60h]
  __int64 v125; // [rsp+1D0h] [rbp-58h]
  int v126; // [rsp+1D8h] [rbp-50h]
  int v127; // [rsp+1DCh] [rbp-4Ch]
  int *v128; // [rsp+1E0h] [rbp-48h]
  __int64 v129; // [rsp+1E8h] [rbp-40h]

  v79 = a4;
  v91 = a3;
  v83 = a2;
  v6 = a1;
  v90 = a1;
  v7 = a5;
  v80 = a6;
  LOBYTE(v81) = a6;
  v101 = 0LL;
  v102 = 0LL;
  v109 = 0LL;
  v8 = 0LL;
  v78 = 0;
  v99[0] = 0LL;
  v88 = 0LL;
  if ( a6 )
  {
    if ( KeGetPcr()->Prcb.NestingLevel )
      goto LABEL_6;
    CurrentThread = KeGetCurrentThread();
    Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
    {
      v11 = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
    }
    else if ( Blink )
    {
      if ( !(unsigned __int8)((__int64 (*)(void))PsIsServerSilo)() )
      {
        while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v11 + 1304)) )
          ;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v107 = v11;
    if ( v11 )
      v12 = *(_QWORD **)(v11 + 1504);
    else
LABEL_6:
      v12 = &PspHostSiloGlobals;
    v13 = v12[104];
  }
  else
  {
    v13 = EtwpHostSiloState;
  }
  v99[1] = v13;
  v82 = v13;
  v14 = v6;
  if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 16) )
    return (unsigned int)-1073741816;
  v15 = 0;
  if ( a6 == 1 || KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    _mm_lfence();
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = *(_QWORD *)(*(_QWORD *)(v13 + 704) + 8 * v14);
    v18 = (signed __int64 *)(*(_QWORD *)v17 + *(_DWORD *)(v17 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v17 + 20)));
    _m_prefetchw(v18);
    v19 = *v18;
    do
    {
      if ( (v19 & 1) != 0 )
        goto LABEL_118;
      v20 = v19;
      v19 = _InterlockedCompareExchange64(v18, v19 + 2, v19);
    }
    while ( v20 != v19 );
    v15 = 1;
  }
  _mm_lfence();
  v21 = 8 * v14;
  v85 = 8 * v14;
  v22 = *(_QWORD *)(8 * v14 + *(_QWORD *)(v13 + 712));
  v100 = v22;
  if ( (v22 & 1) != 0 )
  {
    if ( v15 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v13 + 704) + v21), 1u);
LABEL_118:
      KeLeaveCriticalRegionThread();
    }
    return (unsigned int)-1073741816;
  }
  v105 = v22;
  if ( !v22 )
    return (unsigned int)-1073741816;
  v106 = (_DWORD *)(v22 + 12);
  v23 = *(_DWORD *)(v22 + 12);
  if ( (v23 & 0x80u) != 0 )
  {
    v78 = -1073741790;
    goto LABEL_99;
  }
  if ( !a6 && (v23 & 0x1000000) != 0 )
  {
    v78 = -1073741637;
    goto LABEL_99;
  }
  v86 = 0LL;
  v24 = v83 & 0x40;
  v76 = v83 & 0x40;
  v25 = v83 & 0x80;
  v77 = v83 & 0x80;
  if ( (v83 & 0x40) != 0 )
  {
    if ( !HIDWORD(v90) )
    {
      v78 = -1073741306;
      v13 = v82;
      goto LABEL_99;
    }
    v26 = a5 + HIDWORD(v90);
    v88 = v26;
  }
  else
  {
    v26 = v88;
  }
  v89 = v26;
  v90 = 0LL;
  v27 = a5;
  v86 = a5;
  while ( 1 )
  {
    if ( v24 )
    {
      if ( v25 )
      {
        v32 = v27 + 4;
        v29 = v32;
        if ( v32 > v26 )
        {
          v78 = -1073741306;
          v13 = v82;
          goto LABEL_99;
        }
        v86 = v32;
        v30 = *(unsigned int *)(v32 - 4);
      }
      else
      {
        v28 = v27 + 8;
        v29 = v28;
        if ( v28 > v26 )
        {
          v78 = -1073741306;
          v13 = v82;
          goto LABEL_99;
        }
        v86 = v28;
        v30 = *(_QWORD *)(v28 - 8);
      }
    }
    else
    {
      v29 = v27 + 8;
      v86 = v29;
      v30 = *(_QWORD *)(v29 - 8);
    }
    if ( !v30 )
      break;
    if ( v24 && v25 )
    {
      v27 = v29 + 4;
      v31 = *(unsigned int *)(v27 - 4);
    }
    else
    {
      v27 = v29 + 8;
      v31 = *(_QWORD *)(v27 - 8);
    }
    v86 = v27;
    if ( v31 )
    {
      v8 += v31;
      v90 = v8;
      if ( v8 < v31 )
      {
        v78 = -1073741675;
        v13 = v82;
        goto LABEL_99;
      }
    }
  }
  v109 = *v91;
  v33 = v83 & 0xFFFFFFFE;
  if ( *(_QWORD *)(v22 + 264) )
    v33 = v83;
  v94 = v33;
  v95 = v33 & 1;
  v97 = v33 & 2;
  v96 = v33 & 4;
  v98 = v33 & 0x20;
  v34 = (v96 != 0 ? 4 : 0) + (v98 != 0 ? 8 : 0) + ((v33 & 0x18) != 0 ? 8 : 0);
  v35 = v34 + v8 + (v97 != 0 ? 0x10 : 0) + 4 * v95 + 8;
  v83 = v35;
  if ( v8 > v35 )
  {
    v78 = -1073741306;
    if ( EtwpEventTracingProvRegHandle )
    {
      LOBYTE(v34) = 2;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL,
                              v34,
                              64LL,
                              3221225990LL)
        || *(_WORD *)(v63 + 102)
        && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v63 + 40) + 96LL, v60, v61, v62) )
      {
        v92 = v62;
        UserData.Ptr = (ULONGLONG)&v109;
        *(_QWORD *)&UserData.Size = 16LL;
        v111 = &v79;
        v112 = 2LL;
        v113 = &v92;
        v114 = 4LL;
        v115 = *(_QWORD *)(v22 + 144);
        v116 = *(unsigned __int16 *)(v22 + 136);
        v117 = 0;
        v118 = &EtwpNull;
        v119 = 2LL;
        EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT, 0LL, 1u, 0LL, 0LL, 5u, &UserData);
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 240));
    if ( (*(_DWORD *)(v22 + 816) & 8) != 0 )
      *(_DWORD *)(v22 + 448) = 1;
    goto LABEL_97;
  }
  v37 = EtwpReserveTraceBuffer(v22, v35, (unsigned int)&v101, (unsigned int)v99, 0);
  v38 = 0;
  v39 = v100;
  v40 = *(volatile signed __int32 **)(v100 + 264);
  if ( v40 )
  {
    v38 = _InterlockedIncrement(v40);
    v8 = v90;
    v24 = v76;
    v26 = v88;
    v89 = v88;
    v25 = v77;
  }
  v41 = v83;
  if ( !v37 )
  {
    if ( v83 > 0xFFF8 )
    {
      v64 = -1073741675;
    }
    else
    {
      v64 = -1073741801;
      if ( v83 > *(_DWORD *)(v39 + 8) )
        v64 = -2147483643;
    }
    v78 = v64;
    if ( EtwpEventTracingProvRegHandle )
    {
      LOBYTE(v36) = 2;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL,
                              v36,
                              64LL,
                              v39)
        || *(_WORD *)(v69 + 102)
        && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v69 + 40) + 96LL, v65, v66, v67) )
      {
        v93 = v68;
        v81 = v79;
        v120.Ptr = (ULONGLONG)&v109;
        *(_QWORD *)&v120.Size = 16LL;
        v121 = &v81;
        v122 = 2LL;
        v123 = &v93;
        v124 = 4LL;
        v125 = *(_QWORD *)(v67 + 144);
        v126 = *(unsigned __int16 *)(v67 + 136);
        v127 = 0;
        v128 = &EtwpNull;
        v129 = 2LL;
        EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT, 0LL, 1u, 0LL, 0LL, 5u, &v120);
      }
    }
LABEL_97:
    v13 = v82;
    goto LABEL_98;
  }
  *(_DWORD *)v37 = -1879048192;
  *(_WORD *)v37 = v41;
  *(_WORD *)(v37 + 4) = v79;
  if ( v25 )
    v42 = 64;
  else
    v42 = 128;
  v43 = v94;
  *(_WORD *)(v37 + 6) = v42 | v94 & 0x3F;
  v44 = (signed __int32 *)(v37 + 8);
  v84 = v44;
  v45 = v44;
  v46 = v44;
  if ( v95 )
  {
    *v44++ = v38;
    v46 = v44;
    v84 = v44;
    v45 = v44;
  }
  if ( v96 )
  {
    *v44 = *(_DWORD *)v91;
    v44 = v45 + 1;
    goto LABEL_58;
  }
  if ( v97 )
  {
    *(_OWORD *)v44 = *v91;
    v44 = v45 + 4;
LABEL_58:
    v45 = v44;
    v84 = v44;
    v46 = v44;
  }
  if ( (v43 & 8) != 0 )
  {
    v46[1] = HIDWORD(v99[0]);
    *v44 = v99[0];
    v44 = v45 + 2;
    v84 = v45 + 2;
    v45 += 2;
  }
  if ( v98 )
  {
    v47 = KeGetCurrentThread();
    v108 = v47;
    CurrentRunTime = v47[1].CurrentRunTime;
    *v84 = CurrentRunTime;
    v84 = v45 + 1;
    LODWORD(v91) = v47[1].CycleTime;
    v45[1] = (int)v91;
    v44 = v45 + 2;
    v84 = v45 + 2;
    v8 = v90;
    v24 = v76;
    v26 = v88;
    v89 = v88;
    v25 = v77;
  }
  v104 = v8;
  v87 = a5;
  while ( 1 )
  {
    if ( v24 && v25 )
    {
      v48 = v7 + 4;
      v49 = (char *)*(unsigned int *)(v48 - 4);
    }
    else
    {
      v48 = v7 + 8;
      v49 = *(char **)(v48 - 8);
    }
    v87 = v48;
    if ( !v49 )
    {
      v51 = 0;
      goto LABEL_86;
    }
    if ( !v24 )
    {
LABEL_71:
      v7 = v48 + 8;
      v50 = *(_QWORD *)(v7 - 8);
      goto LABEL_72;
    }
    if ( v48 >= v26 )
      break;
    if ( !v25 )
      goto LABEL_71;
    v7 = v48 + 4;
    v50 = *(unsigned int *)(v7 - 4);
LABEL_72:
    v87 = v7;
    if ( v50 )
    {
      if ( v50 > v8 )
      {
        v51 = -1073741306;
        v78 = -1073741306;
        goto LABEL_86;
      }
      if ( v24 && ((unsigned __int64)&v49[v50] > 0x7FFFFFFF0000LL || &v49[v50] < v49) )
      {
        v44 = v84;
        v24 = v76;
        v89 = v88;
        v25 = v77;
      }
      memmove(v44, v49, v50);
      v8 -= v50;
      v104 = v8;
      v44 = (signed __int32 *)((char *)v44 + v50);
      v84 = v44;
    }
    v26 = v89;
  }
  v51 = -1073741306;
  v78 = -1073741306;
LABEL_86:
  v52 = v100;
  v13 = v82;
  if ( v51 >= 0 )
  {
    if ( (*v106 & 0x80000) != 0 && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
      EtwpSendTraceEvent(v100, &v101);
    if ( *(_QWORD *)(v52 + 1552) )
    {
      v53 = *(unsigned int *)v101;
      if ( (_DWORD)v53 )
      {
        if ( (unsigned int)v102 >= 0x48 && (unsigned int)v102 < (unsigned __int64)(v53 - 4) )
        {
          v70 = (int *)((unsigned int)v102 + (_QWORD)v101);
          v71 = *v70;
          v72 = *v70 & 0xFF000000;
          if ( v72 == -1879048192 )
          {
            v73 = 15;
            v74 = (unsigned __int16)v71;
            if ( (unsigned __int16)v71 >= 8u )
            {
LABEL_158:
              v75 = (v74 + 7) & 0xFFFFFFF8;
              if ( v75 < (unsigned int)v53
                && (unsigned int)v102 + v75 <= (unsigned int)v53
                && v73
                && (unsigned int)KeIsTraceCallbackAllowed(v80) )
              {
                guard_dispatch_icall_no_overrides(v55, v54);
              }
            }
          }
          else if ( v72 == -1073741824 )
          {
            v73 = BYTE2(v71);
            switch ( BYTE2(v71) )
            {
              case 1:
              case 2:
                if ( (unsigned int)v102 < (unsigned __int64)(v53 - 8) )
                {
                  v74 = *((unsigned __int16 *)v70 + 2);
                  if ( v74 >= 0x20 )
                    goto LABEL_158;
                }
                break;
              case 3:
              case 4:
                if ( (unsigned int)v102 < (unsigned __int64)(v53 - 8) )
                {
                  v74 = *((unsigned __int16 *)v70 + 2);
                  if ( v74 >= 0x18 )
                    goto LABEL_158;
                }
                break;
              case 0xA:
              case 0xB:
              case 0x14:
              case 0x15:
                v74 = (unsigned __int16)v71;
                if ( (unsigned __int16)v71 >= 0x30u )
                  goto LABEL_158;
                break;
              case 0xD:
              case 0x12:
              case 0x13:
                v74 = (unsigned __int16)v71;
                if ( (unsigned __int16)v71 >= 0x50u )
                  goto LABEL_158;
                break;
              case 0x10:
              case 0x11:
                if ( (unsigned int)v102 < (unsigned __int64)(v53 - 8) )
                {
                  v74 = *((unsigned __int16 *)v70 + 2);
                  if ( v74 >= 0x10 )
                    goto LABEL_158;
                }
                break;
              default:
                break;
            }
          }
        }
      }
    }
  }
  v56 = (signed __int64 *)*((_QWORD *)&v101 + 1);
  _m_prefetchw(*((const void **)&v101 + 1));
  v57 = *v56;
  while ( (v57 ^ (unsigned __int64)v101) < 0xF )
  {
    v58 = v57;
    v57 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v101 + 1), v57 + 1, v57);
    if ( v58 == v57 )
      goto LABEL_97;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v101 + 12));
LABEL_98:
  v21 = v85;
LABEL_99:
  if ( v15 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v13 + 704) + v21), 1u);
    KeLeaveCriticalRegionThread();
  }
  return v78;
}
