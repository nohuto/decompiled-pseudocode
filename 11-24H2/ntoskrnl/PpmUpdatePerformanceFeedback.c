/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x14036EAB0
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x1402AD8FC (PpmContinueTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x14036E610 (PpmSnapPerformanceAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x14036F8B0 (PopGetIdleTimesCallback.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14037009C (PpmContinueActiveTimeAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x140371B70 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     HvlGetReferenceTime @ 0x14036FFB8 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14036FFF0 (HvlGetReferenceTimeUsingTscPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, _QWORD *a5)
{
  bool v5; // zf
  unsigned __int8 v6; // di
  _QWORD *v7; // rdx
  LARGE_INTEGER v10; // r13
  LARGE_INTEGER *v11; // r12
  __int64 ReferenceTime; // r10
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  char v18; // r8
  __int64 i; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdi
  int v31; // edx
  int v32; // r8d
  unsigned int v33; // eax
  unsigned int v34; // r9d
  __int64 v35; // rax
  __int64 *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // rdi
  __int64 ReferenceTimeUsingTscPage; // rax
  __int64 v41; // rcx
  LARGE_INTEGER v42; // r9
  __int64 v43; // rax
  unsigned int v44; // r9d
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r8
  LARGE_INTEGER v47; // rax
  __int64 v48; // rcx
  LARGE_INTEGER v49; // r10
  __int64 v50; // rax
  unsigned int v51; // r9d
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v55; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rbx
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  unsigned __int8 v63; // [rsp+30h] [rbp-D0h] BYREF
  char v64; // [rsp+31h] [rbp-CFh] BYREF
  char v65; // [rsp+32h] [rbp-CEh]
  bool v66; // [rsp+33h] [rbp-CDh]
  int v67; // [rsp+34h] [rbp-CCh] BYREF
  int v68; // [rsp+38h] [rbp-C8h]
  __int64 v69; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v70; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+58h] [rbp-A8h] BYREF
  int v73; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG LowPart; // [rsp+60h] [rbp-A0h] BYREF
  int v75; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER v76; // [rsp+68h] [rbp-98h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  __int64 v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER v82; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER v83; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER v84; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v85; // [rsp+B0h] [rbp-50h] BYREF
  LARGE_INTEGER v86; // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+D0h] [rbp-30h] BYREF
  int *v89; // [rsp+F0h] [rbp-10h]
  __int64 v90; // [rsp+F8h] [rbp-8h]
  int *v91; // [rsp+100h] [rbp+0h]
  __int64 v92; // [rsp+108h] [rbp+8h]
  LARGE_INTEGER *v93; // [rsp+110h] [rbp+10h]
  __int64 v94; // [rsp+118h] [rbp+18h]
  ULONG *p_LowPart; // [rsp+120h] [rbp+20h]
  __int64 v96; // [rsp+128h] [rbp+28h]
  char *v97; // [rsp+130h] [rbp+30h]
  __int64 v98; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v99; // [rsp+140h] [rbp+40h]
  __int64 v100; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER *v101; // [rsp+150h] [rbp+50h]
  __int64 v102; // [rsp+158h] [rbp+58h]
  LARGE_INTEGER *v103; // [rsp+160h] [rbp+60h]
  __int64 v104; // [rsp+168h] [rbp+68h]
  LARGE_INTEGER *v105; // [rsp+170h] [rbp+70h]
  __int64 v106; // [rsp+178h] [rbp+78h]
  LARGE_INTEGER *v107; // [rsp+180h] [rbp+80h]
  __int64 v108; // [rsp+188h] [rbp+88h]
  int *v109; // [rsp+190h] [rbp+90h]
  __int64 v110; // [rsp+198h] [rbp+98h]
  LARGE_INTEGER *v111; // [rsp+1A0h] [rbp+A0h]
  __int64 v112; // [rsp+1A8h] [rbp+A8h]
  LARGE_INTEGER *v113; // [rsp+1B0h] [rbp+B0h]
  __int64 v114; // [rsp+1B8h] [rbp+B8h]
  LARGE_INTEGER *v115; // [rsp+1C0h] [rbp+C0h]
  __int64 v116; // [rsp+1C8h] [rbp+C8h]
  LARGE_INTEGER *v117; // [rsp+1D0h] [rbp+D0h]
  __int64 v118; // [rsp+1D8h] [rbp+D8h]
  LARGE_INTEGER *v119; // [rsp+1E0h] [rbp+E0h]
  __int64 v120; // [rsp+1E8h] [rbp+E8h]
  LARGE_INTEGER *v121; // [rsp+1F0h] [rbp+F0h]
  __int64 v122; // [rsp+1F8h] [rbp+F8h]
  __int64 retaddr; // [rsp+248h] [rbp+148h]

  v63 = a2;
  v5 = *(_DWORD *)(a1 + 35104) == 3;
  v6 = a2;
  v7 = a5;
  v79 = (__int64)a5;
  v64 = a3;
  v10.QuadPart = 0LL;
  v67 = 0;
  v11 = 0LL;
  v76.QuadPart = 0LL;
  ReferenceTime = 0LL;
  v68 = 0;
  v13 = 0LL;
  v69 = 0LL;
  v14 = 0LL;
  v78 = 0LL;
  if ( v5 )
  {
    v15 = *(_QWORD *)(a1 + 35792);
    v65 = 1;
    v16 = *(_QWORD *)(v15 + 8LL * DWORD2(xmmword_140E3EE10)) >> 1;
  }
  else
  {
    v65 = 0;
    v16 = 0LL;
  }
  v81 = v16;
  v17 = (volatile signed __int32 *)(a1 + 34960);
  if ( v6
    || (*(_QWORD *)(a1 + 35016)
     || *(_QWORD *)(a1 + 35040)
     && (*(_DWORD *)(a1 + 34376) != *(_DWORD *)(a1 + 35056) || *(_DWORD *)(a1 + 34372) != *(_DWORD *)(a1 + 35060))
     || a3 && v16 != *(_QWORD *)(a1 + 35064))
    && (!a4 || !*(_BYTE *)(a1 + 35098)) )
  {
    v18 = 0;
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      v23 = *(_QWORD *)&v17[2 * i + 6];
      if ( v23 && *(_BYTE *)(v23 + 32) )
      {
        if ( a3 )
          return 0;
        v18 = 1;
      }
    }
    if ( !v18 && !v6 && a4 )
    {
LABEL_35:
      v7 = (_QWORD *)v79;
      goto LABEL_36;
    }
    v66 = KeDisableInterrupts();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v17, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 34960), v20, v21, v22);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 34960));
    }
    v24 = _InterlockedExchange64((volatile __int64 *)(a1 + 35016), 0LL);
    if ( v65 )
    {
      if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        v36 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * HIDWORD(xmmword_140E3EE10));
        do
        {
          v37 = *v36;
          v38 = *v36;
          v78 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EE20);
        }
        while ( v37 != v38 );
        v39 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EE20));
        do
        {
          v14 = *v39;
          if ( (HvlEnlightenments & 0x100) != 0 )
            ReferenceTimeUsingTscPage = HvlGetReferenceTimeUsingTscPage(0LL);
          else
            ReferenceTimeUsingTscPage = __readmsr(0x40000020u);
          v26 = ReferenceTimeUsingTscPage;
          v69 = ReferenceTimeUsingTscPage;
        }
        while ( v14 != *v39 );
        v6 = v63;
      }
      else
      {
        if ( (HvlEnlightenments & 0x100) != 0 )
          v25 = HvlGetReferenceTimeUsingTscPage(0LL);
        else
          v25 = __readmsr(0x40000020u);
        v26 = v25;
        v69 = v25;
        v14 = v25 - *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EE10));
        v78 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EE20);
      }
      v24 = v26 - v14 - *(_QWORD *)(a1 + 35072);
      *(_QWORD *)(a1 + 35072) = v26 - v14;
    }
    *(_QWORD *)(a1 + 35008) += v24;
    v27 = *(_QWORD *)(a1 + 35256);
    v80 = v27;
    if ( v27 )
    {
      v11 = (LARGE_INTEGER *)(v27 + 160 + ((unsigned __int64)*(unsigned int *)(v27 + 152) << 7));
      memset_0(v11, 0, 0x80uLL);
      v28 = v80;
      ++*(_DWORD *)(v80 + 152);
      if ( *(_DWORD *)(v28 + 152) == 8 )
        *(_DWORD *)(v28 + 152) = 0;
      v11->LowPart = KeGetPcr()->Prcb.Number;
      BYTE5(v11->QuadPart) = v6;
      BYTE4(v11->QuadPart) = 0;
      v11[1] = RtlGetInterruptTimePrecise(&PerformanceCounter);
      BYTE6(v11->QuadPart) = v64;
      v11[2].QuadPart = v24;
      v11[3] = *(LARGE_INTEGER *)(a1 + 35008);
      v11[13].QuadPart = v69;
      v11[14].QuadPart = v14;
    }
    v29 = *(_QWORD *)(a1 + 34984);
    if ( !v29 )
    {
LABEL_26:
      v30 = *(_QWORD *)(a1 + 34992);
      if ( !v30 )
      {
LABEL_27:
        if ( v11 && (unsigned int)dword_140E076B8 > 5 )
        {
          v90 = 4LL;
          v92 = 4LL;
          v94 = 8LL;
          v72 = *(_DWORD *)(v80 + 152);
          v89 = &v72;
          v73 = *(_DWORD *)(a1 + 36);
          v91 = &v73;
          v82 = v11[1];
          v93 = &v82;
          LowPart = v11->LowPart;
          p_LowPart = &LowPart;
          v64 = BYTE5(v11->QuadPart);
          v97 = &v64;
          v63 = BYTE6(v11->QuadPart);
          v99 = &v63;
          v83 = v11[2];
          v101 = &v83;
          v84 = v11[3];
          v103 = &v84;
          v85 = v11[13];
          v105 = &v85;
          v86 = v11[14];
          v107 = &v86;
          v75 = v68;
          v109 = &v75;
          v111 = v11 + 4;
          v113 = v11 + 5;
          v115 = v11 + 7;
          v117 = v11 + 9;
          v119 = v11 + 11;
          v121 = v11 + 15;
          v96 = 4LL;
          v98 = 1LL;
          v100 = 1LL;
          v102 = 8LL;
          v104 = 8LL;
          v106 = 8LL;
          v108 = 8LL;
          v110 = 4LL;
          v112 = 8LL;
          v114 = 16LL;
          v116 = 16LL;
          v118 = 16LL;
          v120 = 16LL;
          v122 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E076B8,
            (unsigned __int8 *)&word_1400489A6,
            0LL,
            0LL,
            0x13u,
            &v88);
        }
        if ( *(_BYTE *)(a1 + 35096) == 2 )
          *(_QWORD *)(a1 + 35040) += 100 * v24;
        v31 = *(_DWORD *)(a1 + 34376);
        v32 = *(_DWORD *)(a1 + 34372);
        v33 = v32 - *(_DWORD *)(a1 + 35060);
        v34 = v33 + v31 - *(_DWORD *)(a1 + 35056);
        if ( v34 )
        {
          v55 = *(_QWORD *)(a1 + 35040);
          *(_QWORD *)(a1 + 35040) = 0LL;
          *(_DWORD *)(a1 + 35056) = v31;
          *(_DWORD *)(a1 + 35060) = v32;
          if ( v33 )
          {
            v67 = v33 / v34;
            *(_QWORD *)(a1 + 35048) += v55 * (v33 / v34);
          }
        }
        *(_QWORD *)(a1 + 35064) = v81;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 34960), retaddr);
        if ( v66 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v61 = *SchedulerAssist;
            do
            {
              v62 = v61;
              v61 = _InterlockedCompareExchange(SchedulerAssist, v61 & 0xFFDFFFFF, v61);
            }
            while ( v62 != v61 );
            if ( (v61 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        ReferenceTime = v69;
        v13 = v78;
        goto LABEL_35;
      }
      v48 = *(_QWORD *)(v30 + 40);
      v5 = *(_BYTE *)(v30 + 33) == 0;
      v70.QuadPart = 0LL;
      v71.QuadPart = 0LL;
      if ( v5 )
      {
        guard_dispatch_icall_no_overrides(v48, &v67);
        v51 = v67;
        v49 = v76;
        goto LABEL_73;
      }
      guard_dispatch_icall_no_overrides(v48, v63);
      v49 = v70;
      v10 = v71;
      if ( !v63 )
      {
        v50 = *(_QWORD *)(v30 + 16);
        if ( v71.QuadPart == v50 )
        {
LABEL_72:
          v51 = *(_DWORD *)(v30 + 24);
          v67 = v51;
LABEL_73:
          if ( *(_BYTE *)(v30 + 33) )
          {
            v52 = v24 * v51;
            if ( v52 )
            {
              v77 = (v52 * (unsigned __int128)0x64uLL) >> 64;
              if ( is_mul_ok(v52, 0x64uLL) )
                v53 = (100 * v52) >> 16;
              else
                v53 = ((100 * (v52 - (v52 >> 16 << 16))) >> 16) + 100 * (v52 >> 16);
            }
            else
            {
              v53 = 0LL;
            }
          }
          else
          {
            v53 = v24 * v51;
          }
          *(_QWORD *)(a1 + 35032) += v53;
          if ( v11 )
          {
            if ( *(_BYTE *)(v30 + 33) )
            {
              v11[4].HighPart = v51;
              v11[6] = v10;
              v11[8] = v49;
              v11[10].QuadPart = v53;
              v11[12] = *(LARGE_INTEGER *)(a1 + 35032);
              v68 = *(_DWORD *)(v30 + 36);
            }
            else
            {
              v11[15].HighPart = v51;
            }
          }
          if ( *(_BYTE *)(a1 + 35096) == 1 )
            *(_QWORD *)(a1 + 35040) += v53;
          goto LABEL_27;
        }
        *(_DWORD *)(v30 + 24) = (v70.QuadPart - *(_QWORD *)(v30 + 8))
                              * (unsigned __int64)*(unsigned int *)(v30 + 36)
                              / (v71.QuadPart - v50);
      }
      *(LARGE_INTEGER *)(v30 + 16) = v10;
      *(LARGE_INTEGER *)(v30 + 8) = v49;
      goto LABEL_72;
    }
    v41 = *(_QWORD *)(v29 + 40);
    v70.QuadPart = 0LL;
    v71.QuadPart = 0LL;
    if ( !*(_BYTE *)(v29 + 33) )
    {
      guard_dispatch_icall_no_overrides(v41, &v67);
      v44 = v67;
      goto LABEL_58;
    }
    guard_dispatch_icall_no_overrides(v41, v63);
    v42 = v70;
    v10 = v71;
    v76 = v70;
    if ( !v63 )
    {
      v43 = *(_QWORD *)(v29 + 16);
      if ( v71.QuadPart == v43 )
      {
LABEL_57:
        v44 = *(_DWORD *)(v29 + 24);
        v67 = v44;
LABEL_58:
        if ( *(_BYTE *)(v29 + 33) )
        {
          v45 = v24 * v44;
          if ( v45 )
          {
            v77 = (v45 * (unsigned __int128)0x64uLL) >> 64;
            if ( is_mul_ok(v45, 0x64uLL) )
              v46 = (100 * v45) >> 16;
            else
              v46 = ((100 * (v45 - (v45 >> 16 << 16))) >> 16) + 100 * (v45 >> 16);
          }
          else
          {
            v46 = 0LL;
          }
        }
        else
        {
          v46 = v24 * v44;
        }
        *(_QWORD *)(a1 + 35024) += v46;
        if ( v11 )
        {
          if ( *(_BYTE *)(v29 + 33) )
          {
            v47 = v76;
            v11[4].LowPart = v44;
            v11[7] = v47;
            v11[5] = v10;
            v11[9].QuadPart = v46;
            v11[11] = *(LARGE_INTEGER *)(a1 + 35024);
            v68 = *(_DWORD *)(v29 + 36);
          }
          else
          {
            v11[15].LowPart = v44;
          }
        }
        if ( !*(_BYTE *)(a1 + 35096) )
          *(_QWORD *)(a1 + 35040) += v46;
        goto LABEL_26;
      }
      *(_DWORD *)(v29 + 24) = (v70.QuadPart - *(_QWORD *)(v29 + 8))
                            * (unsigned __int64)*(unsigned int *)(v29 + 36)
                            / (v71.QuadPart - v43);
    }
    *(LARGE_INTEGER *)(v29 + 8) = v42;
    *(LARGE_INTEGER *)(v29 + 16) = v10;
    goto LABEL_57;
  }
LABEL_36:
  if ( v7 )
  {
    if ( !ReferenceTime )
    {
      if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * HIDWORD(xmmword_140E3EE10));
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EE20);
        v59 = DWORD1(xmmword_140E3EE20);
        v60 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EE20));
        do
        {
          v14 = *v60;
          ReferenceTime = HvlGetReferenceTime(v59, v58);
        }
        while ( v14 != *v60 );
      }
      else
      {
        if ( (HvlEnlightenments & 0x100) != 0 )
          v35 = HvlGetReferenceTimeUsingTscPage(0LL);
        else
          v35 = __readmsr(0x40000020u);
        ReferenceTime = v35;
        v14 = v35 - *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EE10));
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EE20);
      }
      v7 = (_QWORD *)v79;
    }
    *v7 = ReferenceTime;
    v7[1] = v14;
    v7[2] = v13;
  }
  return 1;
}
