/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1403505D0
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x14029F2E8 (PpmContinueTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x140350130 (PpmSnapPerformanceAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140352240 (PopGetIdleTimesCallback.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403B69C4 (PpmEndActiveTimeAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140434024 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     HvlGetReferenceTime @ 0x1403527D4 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x140352810 (HvlGetReferenceTimeUsingTscPage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, _QWORD *a5)
{
  bool v5; // zf
  unsigned __int8 v6; // di
  _QWORD *v7; // rdx
  __int64 v10; // r13
  unsigned int *v11; // r12
  __int64 ReferenceTime; // r10
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  char v18; // r8
  __int64 i; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rdi
  int v30; // edx
  int v31; // r8d
  unsigned int v32; // eax
  unsigned int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rdi
  __int64 ReferenceTimeUsingTscPage; // rax
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r10
  __int64 v46; // rax
  unsigned int v47; // r9d
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  __int64 v51; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 *v54; // rbx
  signed __int32 v55; // eax
  signed __int32 v56; // ett
  unsigned __int8 v57; // [rsp+30h] [rbp-D0h] BYREF
  char v58; // [rsp+31h] [rbp-CFh] BYREF
  char v59; // [rsp+32h] [rbp-CEh]
  bool v60; // [rsp+33h] [rbp-CDh]
  unsigned int v61; // [rsp+34h] [rbp-CCh] BYREF
  int v62; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v68; // [rsp+60h] [rbp-A0h] BYREF
  int v69; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v81; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+D0h] [rbp-30h] BYREF
  int *v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  int *v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  __int64 *v87; // [rsp+110h] [rbp+10h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  unsigned int *v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  char *v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v93; // [rsp+140h] [rbp+40h]
  __int64 v94; // [rsp+148h] [rbp+48h]
  __int64 *v95; // [rsp+150h] [rbp+50h]
  __int64 v96; // [rsp+158h] [rbp+58h]
  __int64 *v97; // [rsp+160h] [rbp+60h]
  __int64 v98; // [rsp+168h] [rbp+68h]
  __int64 *v99; // [rsp+170h] [rbp+70h]
  __int64 v100; // [rsp+178h] [rbp+78h]
  __int64 *v101; // [rsp+180h] [rbp+80h]
  __int64 v102; // [rsp+188h] [rbp+88h]
  int *v103; // [rsp+190h] [rbp+90h]
  __int64 v104; // [rsp+198h] [rbp+98h]
  _DWORD *v105; // [rsp+1A0h] [rbp+A0h]
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v107; // [rsp+1B0h] [rbp+B0h]
  __int64 v108; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v109; // [rsp+1C0h] [rbp+C0h]
  __int64 v110; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v111; // [rsp+1D0h] [rbp+D0h]
  __int64 v112; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v113; // [rsp+1E0h] [rbp+E0h]
  __int64 v114; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v115; // [rsp+1F0h] [rbp+F0h]
  __int64 v116; // [rsp+1F8h] [rbp+F8h]
  __int64 retaddr; // [rsp+248h] [rbp+148h]

  v57 = a2;
  v5 = *(_DWORD *)(a1 + 35104) == 3;
  v6 = a2;
  v7 = a5;
  v73 = (__int64)a5;
  v58 = a3;
  v10 = 0LL;
  v61 = 0;
  v11 = 0LL;
  v70 = 0LL;
  ReferenceTime = 0LL;
  v62 = 0;
  v13 = 0LL;
  v63 = 0LL;
  v14 = 0LL;
  v72 = 0LL;
  if ( v5 )
  {
    v15 = *(_QWORD *)(a1 + 35792);
    v59 = 1;
    v16 = *(_QWORD *)(v15 + 8LL * DWORD2(xmmword_140E3ECD0)) >> 1;
  }
  else
  {
    v59 = 0;
    v16 = 0LL;
  }
  v75 = v16;
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
      v22 = *(_QWORD *)&v17[2 * i + 6];
      if ( v22 && *(_BYTE *)(v22 + 32) )
      {
        if ( a3 )
          return 0;
        v18 = 1;
      }
    }
    if ( !v18 && !v6 && a4 )
    {
LABEL_35:
      v7 = (_QWORD *)v73;
      goto LABEL_36;
    }
    v60 = KeDisableInterrupts();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v17, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 34960));
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 34960));
    }
    v23 = _InterlockedExchange64((volatile __int64 *)(a1 + 35016), 0LL);
    if ( v59 )
    {
      if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        v20 = *(_QWORD *)(a1 + 35792) + 8LL * HIDWORD(xmmword_140E3ECD0);
        do
        {
          v35 = *(_QWORD *)v20;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3ECE0);
          v36 = *(_QWORD *)v20;
          v72 = v21;
        }
        while ( v35 != v36 );
        v37 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3ECE0));
        do
        {
          v14 = *v37;
          if ( (HvlEnlightenments & 0x100) != 0 )
            ReferenceTimeUsingTscPage = HvlGetReferenceTimeUsingTscPage(0LL);
          else
            ReferenceTimeUsingTscPage = __readmsr(0x40000020u);
          v25 = ReferenceTimeUsingTscPage;
          v63 = ReferenceTimeUsingTscPage;
        }
        while ( v14 != *v37 );
        v6 = v57;
      }
      else
      {
        if ( (HvlEnlightenments & 0x100) != 0 )
          v24 = HvlGetReferenceTimeUsingTscPage(0LL);
        else
          v24 = __readmsr(0x40000020u);
        v25 = v24;
        v63 = v24;
        v14 = v24 - *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3ECD0));
        v72 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3ECE0);
      }
      v23 = v25 - v14 - *(_QWORD *)(a1 + 35072);
      *(_QWORD *)(a1 + 35072) = v25 - v14;
    }
    *(_QWORD *)(a1 + 35008) += v23;
    v26 = *(_QWORD *)(a1 + 35256);
    v74 = v26;
    if ( v26 )
    {
      v11 = (unsigned int *)(v26 + 160 + ((unsigned __int64)*(unsigned int *)(v26 + 152) << 7));
      memset_0(v11, 0, 0x80uLL);
      v27 = v74;
      ++*(_DWORD *)(v74 + 152);
      if ( *(_DWORD *)(v27 + 152) == 8 )
        *(_DWORD *)(v27 + 152) = 0;
      *v11 = KeGetPcr()->Prcb.Number;
      *((_BYTE *)v11 + 5) = v6;
      *((_BYTE *)v11 + 4) = 0;
      *((_QWORD *)v11 + 1) = RtlGetInterruptTimePrecise(&v81);
      *((_BYTE *)v11 + 6) = v58;
      *((_QWORD *)v11 + 2) = v23;
      *((_QWORD *)v11 + 3) = *(_QWORD *)(a1 + 35008);
      *((_QWORD *)v11 + 13) = v63;
      *((_QWORD *)v11 + 14) = v14;
    }
    v28 = *(_QWORD *)(a1 + 34984);
    if ( !v28 )
    {
LABEL_26:
      v29 = *(_QWORD *)(a1 + 34992);
      if ( !v29 )
      {
LABEL_27:
        if ( v11 && (unsigned int)dword_140E076B8 > 5 )
        {
          v84 = 4LL;
          v86 = 4LL;
          v88 = 8LL;
          v66 = *(_DWORD *)(v74 + 152);
          v83 = &v66;
          v67 = *(_DWORD *)(a1 + 36);
          v85 = &v67;
          v76 = *((_QWORD *)v11 + 1);
          v87 = &v76;
          v68 = *v11;
          v89 = &v68;
          v58 = *((_BYTE *)v11 + 5);
          v91 = &v58;
          v57 = *((_BYTE *)v11 + 6);
          v93 = &v57;
          v77 = *((_QWORD *)v11 + 2);
          v95 = &v77;
          v78 = *((_QWORD *)v11 + 3);
          v97 = &v78;
          v79 = *((_QWORD *)v11 + 13);
          v99 = &v79;
          v80 = *((_QWORD *)v11 + 14);
          v101 = &v80;
          v69 = v62;
          v103 = &v69;
          v105 = v11 + 8;
          v107 = v11 + 10;
          v109 = v11 + 14;
          v111 = v11 + 18;
          v113 = v11 + 22;
          v115 = v11 + 30;
          v90 = 4LL;
          v92 = 1LL;
          v94 = 1LL;
          v96 = 8LL;
          v98 = 8LL;
          v100 = 8LL;
          v102 = 8LL;
          v104 = 4LL;
          v106 = 8LL;
          v108 = 16LL;
          v110 = 16LL;
          v112 = 16LL;
          v114 = 16LL;
          v116 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E076B8,
            (unsigned __int8 *)&word_1400485A6,
            0LL,
            0LL,
            0x13u,
            &v82);
        }
        if ( *(_BYTE *)(a1 + 35096) == 2 )
          *(_QWORD *)(a1 + 35040) += 100 * v23;
        v30 = *(_DWORD *)(a1 + 34376);
        v31 = *(_DWORD *)(a1 + 34372);
        v32 = v31 - *(_DWORD *)(a1 + 35060);
        v33 = v32 + v30 - *(_DWORD *)(a1 + 35056);
        if ( v33 )
        {
          v51 = *(_QWORD *)(a1 + 35040);
          *(_QWORD *)(a1 + 35040) = 0LL;
          *(_DWORD *)(a1 + 35056) = v30;
          *(_DWORD *)(a1 + 35060) = v31;
          if ( v32 )
          {
            v61 = v32 / v33;
            *(_QWORD *)(a1 + 35048) += v51 * (v32 / v33);
          }
        }
        *(_QWORD *)(a1 + 35064) = v75;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 34960), retaddr);
        if ( v60 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v55 = *SchedulerAssist;
            do
            {
              v56 = v55;
              v55 = _InterlockedCompareExchange(SchedulerAssist, v55 & 0xFFDFFFFF, v55);
            }
            while ( v56 != v55 );
            if ( (v55 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        ReferenceTime = v63;
        v13 = v72;
        goto LABEL_35;
      }
      v44 = *(_QWORD *)(v29 + 40);
      v5 = *(_BYTE *)(v29 + 33) == 0;
      v64 = 0LL;
      v65 = 0LL;
      if ( v5 )
      {
        guard_dispatch_icall_no_overrides(v44, &v61, v20, v21);
        v47 = v61;
        v45 = v70;
        goto LABEL_73;
      }
      guard_dispatch_icall_no_overrides(v44, v57, &v65, &v64);
      v45 = v64;
      v10 = v65;
      if ( !v57 )
      {
        v46 = *(_QWORD *)(v29 + 16);
        if ( v65 == v46 )
        {
LABEL_72:
          v47 = *(_DWORD *)(v29 + 24);
          v61 = v47;
LABEL_73:
          if ( *(_BYTE *)(v29 + 33) )
          {
            v48 = v23 * v47;
            if ( v48 )
            {
              v71 = (v48 * (unsigned __int128)0x64uLL) >> 64;
              if ( is_mul_ok(v48, 0x64uLL) )
                v49 = (100 * v48) >> 16;
              else
                v49 = ((100 * (v48 - (v48 >> 16 << 16))) >> 16) + 100 * (v48 >> 16);
            }
            else
            {
              v49 = 0LL;
            }
          }
          else
          {
            v49 = v23 * v47;
          }
          *(_QWORD *)(a1 + 35032) += v49;
          if ( v11 )
          {
            if ( *(_BYTE *)(v29 + 33) )
            {
              v11[9] = v47;
              *((_QWORD *)v11 + 6) = v10;
              *((_QWORD *)v11 + 8) = v45;
              *((_QWORD *)v11 + 10) = v49;
              *((_QWORD *)v11 + 12) = *(_QWORD *)(a1 + 35032);
              v62 = *(_DWORD *)(v29 + 36);
            }
            else
            {
              v11[31] = v47;
            }
          }
          if ( *(_BYTE *)(a1 + 35096) == 1 )
            *(_QWORD *)(a1 + 35040) += v49;
          goto LABEL_27;
        }
        *(_DWORD *)(v29 + 24) = (v64 - *(_QWORD *)(v29 + 8))
                              * (unsigned __int64)*(unsigned int *)(v29 + 36)
                              / (v65 - v46);
      }
      *(_QWORD *)(v29 + 16) = v10;
      *(_QWORD *)(v29 + 8) = v45;
      goto LABEL_72;
    }
    v39 = *(_QWORD *)(v28 + 40);
    v64 = 0LL;
    v65 = 0LL;
    if ( !*(_BYTE *)(v28 + 33) )
    {
      guard_dispatch_icall_no_overrides(v39, &v61, v20, v21);
      v21 = v61;
      goto LABEL_58;
    }
    guard_dispatch_icall_no_overrides(v39, v57, &v65, &v64);
    v40 = v64;
    v10 = v65;
    v70 = v64;
    if ( !v57 )
    {
      v41 = *(_QWORD *)(v28 + 16);
      if ( v65 == v41 )
      {
LABEL_57:
        v21 = *(unsigned int *)(v28 + 24);
        v61 = *(_DWORD *)(v28 + 24);
LABEL_58:
        if ( *(_BYTE *)(v28 + 33) )
        {
          v42 = v23 * (unsigned int)v21;
          if ( v42 )
          {
            v71 = (v42 * (unsigned __int128)0x64uLL) >> 64;
            if ( is_mul_ok(v42, 0x64uLL) )
              v20 = (100 * v42) >> 16;
            else
              v20 = ((100 * (v42 - (v42 >> 16 << 16))) >> 16) + 100 * (v42 >> 16);
          }
          else
          {
            v20 = 0LL;
          }
        }
        else
        {
          v20 = v23 * (unsigned int)v21;
        }
        *(_QWORD *)(a1 + 35024) += v20;
        if ( v11 )
        {
          if ( *(_BYTE *)(v28 + 33) )
          {
            v43 = v70;
            v11[8] = v21;
            *((_QWORD *)v11 + 7) = v43;
            *((_QWORD *)v11 + 5) = v10;
            *((_QWORD *)v11 + 9) = v20;
            *((_QWORD *)v11 + 11) = *(_QWORD *)(a1 + 35024);
            v62 = *(_DWORD *)(v28 + 36);
          }
          else
          {
            v11[30] = v21;
          }
        }
        if ( !*(_BYTE *)(a1 + 35096) )
          *(_QWORD *)(a1 + 35040) += v20;
        goto LABEL_26;
      }
      *(_DWORD *)(v28 + 24) = (v64 - *(_QWORD *)(v28 + 8)) * (unsigned __int64)*(unsigned int *)(v28 + 36) / (v65 - v41);
    }
    *(_QWORD *)(v28 + 8) = v40;
    *(_QWORD *)(v28 + 16) = v10;
    goto LABEL_57;
  }
LABEL_36:
  if ( v7 )
  {
    if ( !ReferenceTime )
    {
      if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3ECE0);
        v54 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3ECE0));
        do
        {
          v14 = *v54;
          ReferenceTime = HvlGetReferenceTime();
        }
        while ( v14 != *v54 );
      }
      else
      {
        if ( (HvlEnlightenments & 0x100) != 0 )
          v34 = HvlGetReferenceTimeUsingTscPage(0LL);
        else
          v34 = __readmsr(0x40000020u);
        ReferenceTime = v34;
        v14 = v34 - *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3ECD0));
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3ECE0);
      }
      v7 = (_QWORD *)v73;
    }
    *v7 = ReferenceTime;
    v7[1] = v14;
    v7[2] = v13;
  }
  return 1;
}
