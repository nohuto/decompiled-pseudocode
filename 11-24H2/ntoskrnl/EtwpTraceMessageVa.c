/*
 * XREFs of EtwpTraceMessageVa @ 0x140326900
 * Callers:
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     WmiTraceMessage @ 0x140459330 (WmiTraceMessage.c)
 *     WmiTraceMessageVa @ 0x1404B79B0 (WmiTraceMessageVa.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x140327DF0 (EtwpReserveTraceBuffer.c)
 *     KeIsTraceCallbackAllowed @ 0x1403282EC (KeIsTraceCallbackAllowed.c)
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 *     EtwpSendTraceEvent @ 0x1404AC8C4 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
  unsigned int v34; // ecx
  __int64 v35; // rdi
  signed __int32 v36; // ecx
  __int64 v37; // r9
  volatile signed __int32 *v38; // rax
  __int16 v39; // ax
  __int16 v40; // r8
  char v41; // r9
  signed __int32 *v42; // rdi
  signed __int32 *v43; // r8
  signed __int32 *v44; // rdx
  struct _KTHREAD *v45; // rdx
  unsigned __int64 v46; // r15
  char *v47; // rdx
  size_t v48; // r13
  int v49; // r9d
  __int64 v50; // rdi
  __int64 v51; // rdx
  unsigned int v52; // r10d
  __int64 v53; // r11
  signed __int64 *v54; // roff
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  unsigned __int8 v58; // dl
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // r10
  int v62; // r10d
  unsigned __int8 v63; // dl
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // r10d
  __int64 v67; // r11
  int *v68; // r11
  int v69; // edi
  unsigned int v70; // eax
  int v71; // r8d
  unsigned int v72; // r10d
  unsigned int v73; // r10d
  char v74; // [rsp+40h] [rbp-1E8h]
  char v75; // [rsp+41h] [rbp-1E7h]
  unsigned int v76; // [rsp+44h] [rbp-1E4h]
  __int16 v77; // [rsp+48h] [rbp-1E0h] BYREF
  unsigned __int8 v78; // [rsp+50h] [rbp-1D8h]
  __int16 v79; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v80; // [rsp+60h] [rbp-1C8h]
  unsigned int v81; // [rsp+68h] [rbp-1C0h]
  signed __int32 *v82; // [rsp+70h] [rbp-1B8h]
  __int64 v83; // [rsp+78h] [rbp-1B0h]
  __int64 v84; // [rsp+80h] [rbp-1A8h]
  __int64 v85; // [rsp+88h] [rbp-1A0h]
  unsigned __int64 v86; // [rsp+90h] [rbp-198h]
  unsigned __int64 v87; // [rsp+98h] [rbp-190h]
  unsigned __int64 v88; // [rsp+A0h] [rbp-188h]
  __int128 *v89; // [rsp+A8h] [rbp-180h]
  int v90; // [rsp+B0h] [rbp-178h] BYREF
  int v91; // [rsp+B8h] [rbp-170h] BYREF
  unsigned int v92; // [rsp+C0h] [rbp-168h]
  int v93; // [rsp+C4h] [rbp-164h]
  int v94; // [rsp+C8h] [rbp-160h]
  int v95; // [rsp+CCh] [rbp-15Ch]
  int v96; // [rsp+D0h] [rbp-158h]
  _QWORD v97[2]; // [rsp+D8h] [rbp-150h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-140h]
  __int128 v99; // [rsp+F0h] [rbp-138h] BYREF
  __int64 v100; // [rsp+100h] [rbp-128h]
  unsigned int CurrentRunTime; // [rsp+108h] [rbp-120h]
  unsigned __int64 v102; // [rsp+110h] [rbp-118h]
  __int64 v103; // [rsp+118h] [rbp-110h]
  _DWORD *v104; // [rsp+120h] [rbp-108h]
  unsigned __int64 v105; // [rsp+128h] [rbp-100h]
  struct _KTHREAD *v106; // [rsp+130h] [rbp-F8h]
  __int128 v107; // [rsp+138h] [rbp-F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp-D8h] BYREF
  __int16 *v109; // [rsp+160h] [rbp-C8h]
  __int64 v110; // [rsp+168h] [rbp-C0h]
  int *v111; // [rsp+170h] [rbp-B8h]
  __int64 v112; // [rsp+178h] [rbp-B0h]
  __int64 v113; // [rsp+180h] [rbp-A8h]
  int v114; // [rsp+188h] [rbp-A0h]
  int v115; // [rsp+18Ch] [rbp-9Ch]
  __int64 *v116; // [rsp+190h] [rbp-98h]
  __int64 v117; // [rsp+198h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+1A0h] [rbp-88h] BYREF
  __int16 *v119; // [rsp+1B0h] [rbp-78h]
  __int64 v120; // [rsp+1B8h] [rbp-70h]
  int *v121; // [rsp+1C0h] [rbp-68h]
  __int64 v122; // [rsp+1C8h] [rbp-60h]
  __int64 v123; // [rsp+1D0h] [rbp-58h]
  int v124; // [rsp+1D8h] [rbp-50h]
  int v125; // [rsp+1DCh] [rbp-4Ch]
  __int64 *v126; // [rsp+1E0h] [rbp-48h]
  __int64 v127; // [rsp+1E8h] [rbp-40h]

  v77 = a4;
  v89 = a3;
  v81 = a2;
  v6 = a1;
  v88 = a1;
  v7 = a5;
  v78 = a6;
  LOBYTE(v79) = a6;
  v99 = 0LL;
  v100 = 0LL;
  v107 = 0LL;
  v8 = 0LL;
  v76 = 0;
  v97[0] = 0LL;
  v86 = 0LL;
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
      if ( !(unsigned __int8)PsIsServerSilo(Blink) )
      {
        while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v11 + 1304)) )
          ;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v105 = v11;
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
  v97[1] = v13;
  v80 = v13;
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
  v83 = 8 * v14;
  v22 = *(_QWORD *)(8 * v14 + *(_QWORD *)(v13 + 712));
  v98 = v22;
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
  v103 = v22;
  if ( !v22 )
    return (unsigned int)-1073741816;
  v104 = (_DWORD *)(v22 + 12);
  v23 = *(_DWORD *)(v22 + 12);
  if ( (v23 & 0x80u) != 0 )
  {
    v76 = -1073741790;
    goto LABEL_99;
  }
  if ( !a6 && (v23 & 0x1000000) != 0 )
  {
    v76 = -1073741637;
    goto LABEL_99;
  }
  v84 = 0LL;
  v24 = v81 & 0x40;
  v74 = v81 & 0x40;
  v25 = v81 & 0x80;
  v75 = v81 & 0x80;
  if ( (v81 & 0x40) != 0 )
  {
    if ( !HIDWORD(v88) )
    {
      v76 = -1073741306;
      v13 = v80;
      goto LABEL_99;
    }
    v26 = a5 + HIDWORD(v88);
    v86 = v26;
  }
  else
  {
    v26 = v86;
  }
  v87 = v26;
  v88 = 0LL;
  v27 = a5;
  v84 = a5;
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
          v76 = -1073741306;
          v13 = v80;
          goto LABEL_99;
        }
        v84 = v32;
        v30 = *(unsigned int *)(v32 - 4);
      }
      else
      {
        v28 = v27 + 8;
        v29 = v28;
        if ( v28 > v26 )
        {
          v76 = -1073741306;
          v13 = v80;
          goto LABEL_99;
        }
        v84 = v28;
        v30 = *(_QWORD *)(v28 - 8);
      }
    }
    else
    {
      v29 = v27 + 8;
      v84 = v29;
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
    v84 = v27;
    if ( v31 )
    {
      v8 += v31;
      v88 = v8;
      if ( v8 < v31 )
      {
        v76 = -1073741675;
        v13 = v80;
        goto LABEL_99;
      }
    }
  }
  v107 = *v89;
  v33 = v81 & 0xFFFFFFFE;
  if ( *(_QWORD *)(v22 + 264) )
    v33 = v81;
  v92 = v33;
  v93 = v33 & 1;
  v95 = v33 & 2;
  v94 = v33 & 4;
  v96 = v33 & 0x20;
  v34 = (v94 != 0 ? 4 : 0) + (v96 != 0 ? 8 : 0) + ((v33 & 0x18) != 0 ? 8 : 0) + v8 + (v95 != 0 ? 0x10 : 0) + 4 * v93 + 8;
  v81 = v34;
  if ( v8 > v34 )
  {
    v76 = -1073741306;
    if ( EtwpEventTracingProvRegHandle
      && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL, 2u, 64LL)
       || *(_WORD *)(v61 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v61 + 40) + 96LL, v58, v59)) )
    {
      v90 = v60;
      UserData.Ptr = (ULONGLONG)&v107;
      *(_QWORD *)&UserData.Size = 16LL;
      v109 = &v77;
      v110 = 2LL;
      v111 = &v90;
      v112 = 4LL;
      v113 = *(_QWORD *)(v22 + 144);
      v114 = *(unsigned __int16 *)(v22 + 136);
      v115 = 0;
      v116 = &EtwpNull;
      v117 = 2LL;
      EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT, 0LL, 1u, 0LL, 0LL, 5u, &UserData);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 240));
    if ( (*(_DWORD *)(v22 + 816) & 8) != 0 )
      *(_DWORD *)(v22 + 448) = 1;
    goto LABEL_97;
  }
  v35 = EtwpReserveTraceBuffer(v22, v34, (unsigned int)&v99, (unsigned int)v97, 0);
  v36 = 0;
  v37 = v98;
  v38 = *(volatile signed __int32 **)(v98 + 264);
  if ( v38 )
  {
    v36 = _InterlockedIncrement(v38);
    v8 = v88;
    v24 = v74;
    v26 = v86;
    v87 = v86;
    v25 = v75;
  }
  v39 = v81;
  if ( !v35 )
  {
    if ( v81 > 0xFFF8 )
    {
      v62 = -1073741675;
    }
    else
    {
      v62 = -1073741801;
      if ( v81 > *(_DWORD *)(v37 + 8) )
        v62 = -2147483643;
    }
    v76 = v62;
    if ( EtwpEventTracingProvRegHandle
      && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL, 2u, 64LL)
       || *(_WORD *)(v67 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v67 + 40) + 96LL, v63, v64)) )
    {
      v91 = v66;
      v79 = v77;
      v118.Ptr = (ULONGLONG)&v107;
      *(_QWORD *)&v118.Size = 16LL;
      v119 = &v79;
      v120 = 2LL;
      v121 = &v91;
      v122 = 4LL;
      v123 = *(_QWORD *)(v65 + 144);
      v124 = *(unsigned __int16 *)(v65 + 136);
      v125 = 0;
      v126 = &EtwpNull;
      v127 = 2LL;
      EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT, 0LL, 1u, 0LL, 0LL, 5u, &v118);
    }
LABEL_97:
    v13 = v80;
    goto LABEL_98;
  }
  *(_DWORD *)v35 = -1879048192;
  *(_WORD *)v35 = v39;
  *(_WORD *)(v35 + 4) = v77;
  if ( v25 )
    v40 = 64;
  else
    v40 = 128;
  v41 = v92;
  *(_WORD *)(v35 + 6) = v40 | v92 & 0x3F;
  v42 = (signed __int32 *)(v35 + 8);
  v82 = v42;
  v43 = v42;
  v44 = v42;
  if ( v93 )
  {
    *v42++ = v36;
    v44 = v42;
    v82 = v42;
    v43 = v42;
  }
  if ( v94 )
  {
    *v42 = *(_DWORD *)v89;
    v42 = v43 + 1;
    goto LABEL_58;
  }
  if ( v95 )
  {
    *(_OWORD *)v42 = *v89;
    v42 = v43 + 4;
LABEL_58:
    v43 = v42;
    v82 = v42;
    v44 = v42;
  }
  if ( (v41 & 8) != 0 )
  {
    v44[1] = HIDWORD(v97[0]);
    *v42 = v97[0];
    v42 = v43 + 2;
    v82 = v43 + 2;
    v43 += 2;
  }
  if ( v96 )
  {
    v45 = KeGetCurrentThread();
    v106 = v45;
    CurrentRunTime = v45[1].CurrentRunTime;
    *v82 = CurrentRunTime;
    v82 = v43 + 1;
    LODWORD(v89) = v45[1].CycleTime;
    v43[1] = (int)v89;
    v42 = v43 + 2;
    v82 = v43 + 2;
    v8 = v88;
    v24 = v74;
    v26 = v86;
    v87 = v86;
    v25 = v75;
  }
  v102 = v8;
  v85 = a5;
  while ( 1 )
  {
    if ( v24 && v25 )
    {
      v46 = v7 + 4;
      v47 = (char *)*(unsigned int *)(v46 - 4);
    }
    else
    {
      v46 = v7 + 8;
      v47 = *(char **)(v46 - 8);
    }
    v85 = v46;
    if ( !v47 )
    {
      v49 = 0;
      goto LABEL_86;
    }
    if ( !v24 )
    {
LABEL_71:
      v7 = v46 + 8;
      v48 = *(_QWORD *)(v7 - 8);
      goto LABEL_72;
    }
    if ( v46 >= v26 )
      break;
    if ( !v25 )
      goto LABEL_71;
    v7 = v46 + 4;
    v48 = *(unsigned int *)(v7 - 4);
LABEL_72:
    v85 = v7;
    if ( v48 )
    {
      if ( v48 > v8 )
      {
        v49 = -1073741306;
        v76 = -1073741306;
        goto LABEL_86;
      }
      if ( v24 && ((unsigned __int64)&v47[v48] > 0x7FFFFFFF0000LL || &v47[v48] < v47) )
      {
        v42 = v82;
        v24 = v74;
        v87 = v86;
        v25 = v75;
      }
      memmove(v42, v47, v48);
      v8 -= v48;
      v102 = v8;
      v42 = (signed __int32 *)((char *)v42 + v48);
      v82 = v42;
    }
    v26 = v87;
  }
  v49 = -1073741306;
  v76 = -1073741306;
LABEL_86:
  v50 = v98;
  v13 = v80;
  if ( v49 >= 0 )
  {
    if ( (*v104 & 0x80000) != 0 && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
      EtwpSendTraceEvent(v98, &v99);
    if ( *(_QWORD *)(v50 + 1552) )
    {
      v51 = *(unsigned int *)v99;
      if ( (_DWORD)v51 )
      {
        if ( (unsigned int)v100 >= 0x48 && (unsigned int)v100 < (unsigned __int64)(v51 - 4) )
        {
          v68 = (int *)((unsigned int)v100 + (_QWORD)v99);
          v69 = *v68;
          v70 = *v68 & 0xFF000000;
          if ( v70 == -1879048192 )
          {
            v71 = 15;
            v72 = (unsigned __int16)v69;
            if ( (unsigned __int16)v69 >= 8u )
            {
LABEL_158:
              v73 = (v72 + 7) & 0xFFFFFFF8;
              if ( v73 < (unsigned int)v51
                && (unsigned int)v100 + v73 <= (unsigned int)v51
                && v71
                && (unsigned int)KeIsTraceCallbackAllowed(v78) )
              {
                guard_dispatch_icall_no_overrides(v53, v52, &v107, v78);
              }
            }
          }
          else if ( v70 == -1073741824 )
          {
            v71 = BYTE2(v69);
            switch ( BYTE2(v69) )
            {
              case 1:
              case 2:
                if ( (unsigned int)v100 < (unsigned __int64)(v51 - 8) )
                {
                  v72 = *((unsigned __int16 *)v68 + 2);
                  if ( v72 >= 0x20 )
                    goto LABEL_158;
                }
                break;
              case 3:
              case 4:
                if ( (unsigned int)v100 < (unsigned __int64)(v51 - 8) )
                {
                  v72 = *((unsigned __int16 *)v68 + 2);
                  if ( v72 >= 0x18 )
                    goto LABEL_158;
                }
                break;
              case 0xA:
              case 0xB:
              case 0x14:
              case 0x15:
                v72 = (unsigned __int16)v69;
                if ( (unsigned __int16)v69 >= 0x30u )
                  goto LABEL_158;
                break;
              case 0xD:
              case 0x12:
              case 0x13:
                v72 = (unsigned __int16)v69;
                if ( (unsigned __int16)v69 >= 0x50u )
                  goto LABEL_158;
                break;
              case 0x10:
              case 0x11:
                if ( (unsigned int)v100 < (unsigned __int64)(v51 - 8) )
                {
                  v72 = *((unsigned __int16 *)v68 + 2);
                  if ( v72 >= 0x10 )
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
  v54 = (signed __int64 *)*((_QWORD *)&v99 + 1);
  _m_prefetchw(*((const void **)&v99 + 1));
  v55 = *v54;
  while ( (v55 ^ (unsigned __int64)v99) < 0xF )
  {
    v56 = v55;
    v55 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v99 + 1), v55 + 1, v55);
    if ( v56 == v55 )
      goto LABEL_97;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v99 + 12));
LABEL_98:
  v21 = v83;
LABEL_99:
  if ( v15 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v13 + 704) + v21), 1u);
    KeLeaveCriticalRegionThread();
  }
  return v76;
}
