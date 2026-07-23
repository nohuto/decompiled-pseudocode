/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x14031C3F0
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x14031BF40 (PpmSnapPerformanceAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x1403B2950 (PopGetIdleTimesCallback.c)
 *     PpmContinueTimeAccumulation @ 0x1403E8B08 (PpmContinueTimeAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1403E99A0 (PpmContinueActiveTimeAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403E9BF4 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     HvlGetReferenceTime @ 0x1403ED194 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403ED1D0 (HvlGetReferenceTimeUsingTscPage.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, _QWORD *a5)
{
  bool v5; // zf
  unsigned __int8 v6; // di
  _QWORD *v7; // rdx
  LARGE_INTEGER v11; // r13
  LARGE_INTEGER *v12; // r15
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rbx
  char v19; // r8
  __int64 i; // rcx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 ReferenceTimeUsingTscPage; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdi
  int v33; // edx
  int v34; // r8d
  unsigned int v35; // eax
  unsigned int v36; // r9d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 *v39; // rbx
  __int64 ReferenceTime; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  LARGE_INTEGER v44; // r9
  __int64 v45; // rax
  unsigned int v46; // r9d
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r8
  LARGE_INTEGER v49; // rax
  __int64 v50; // rcx
  LARGE_INTEGER v51; // r10
  __int64 v52; // rax
  unsigned int v53; // r9d
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // r10
  signed __int32 v57; // eax
  signed __int32 v58; // ett
  unsigned __int8 v59; // [rsp+30h] [rbp-D0h] BYREF
  char v60; // [rsp+31h] [rbp-CFh] BYREF
  char v61; // [rsp+32h] [rbp-CEh]
  bool v62; // [rsp+33h] [rbp-CDh]
  int v63; // [rsp+34h] [rbp-CCh] BYREF
  int v64; // [rsp+38h] [rbp-C8h]
  LARGE_INTEGER v65; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v66; // [rsp+48h] [rbp-B8h]
  __int64 v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG LowPart; // [rsp+60h] [rbp-A0h] BYREF
  int v71; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+70h] [rbp-90h]
  __int64 v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER v78; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER v79; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER v80; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v81; // [rsp+B0h] [rbp-50h] BYREF
  LARGE_INTEGER v82; // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+C0h] [rbp-40h] BYREF
  char v84[32]; // [rsp+D0h] [rbp-30h] BYREF
  int *v85; // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  int *v87; // [rsp+100h] [rbp+0h]
  __int64 v88; // [rsp+108h] [rbp+8h]
  LARGE_INTEGER *v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  ULONG *p_LowPart; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  char *v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER *v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]
  LARGE_INTEGER *v99; // [rsp+160h] [rbp+60h]
  __int64 v100; // [rsp+168h] [rbp+68h]
  LARGE_INTEGER *v101; // [rsp+170h] [rbp+70h]
  __int64 v102; // [rsp+178h] [rbp+78h]
  LARGE_INTEGER *v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]
  int *v105; // [rsp+190h] [rbp+90h]
  __int64 v106; // [rsp+198h] [rbp+98h]
  LARGE_INTEGER *v107; // [rsp+1A0h] [rbp+A0h]
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  LARGE_INTEGER *v109; // [rsp+1B0h] [rbp+B0h]
  __int64 v110; // [rsp+1B8h] [rbp+B8h]
  LARGE_INTEGER *v111; // [rsp+1C0h] [rbp+C0h]
  __int64 v112; // [rsp+1C8h] [rbp+C8h]
  LARGE_INTEGER *v113; // [rsp+1D0h] [rbp+D0h]
  __int64 v114; // [rsp+1D8h] [rbp+D8h]
  LARGE_INTEGER *v115; // [rsp+1E0h] [rbp+E0h]
  __int64 v116; // [rsp+1E8h] [rbp+E8h]
  LARGE_INTEGER *v117; // [rsp+1F0h] [rbp+F0h]
  __int64 v118; // [rsp+1F8h] [rbp+F8h]
  __int64 retaddr; // [rsp+248h] [rbp+148h]

  v59 = a2;
  v5 = *(_DWORD *)(a1 + 35104) == 3;
  v6 = a2;
  v7 = a5;
  v75 = (__int64)a5;
  v60 = a3;
  v63 = 0;
  v11.QuadPart = 0LL;
  v72.QuadPart = 0LL;
  v12 = 0LL;
  v64 = 0;
  v13 = 0LL;
  v67 = 0LL;
  v14 = 0LL;
  v74 = 0LL;
  v15 = 0LL;
  if ( v5 )
  {
    v16 = *(_QWORD *)(a1 + 35792);
    v61 = 1;
    v17 = *(_QWORD *)(v16 + 8LL * DWORD2(xmmword_140E3EA90)) >> 1;
  }
  else
  {
    v61 = 0;
    v17 = 0LL;
  }
  v77 = v17;
  v18 = (volatile signed __int32 *)(a1 + 34960);
  if ( v6
    || (*(_QWORD *)(a1 + 35016)
     || *(_QWORD *)(a1 + 35040)
     && (*(_DWORD *)(a1 + 34376) != *(_DWORD *)(a1 + 35056) || *(_DWORD *)(a1 + 34372) != *(_DWORD *)(a1 + 35060))
     || a3 && v17 != *(_QWORD *)(a1 + 35064))
    && (!a4 || !*(_BYTE *)(a1 + 35098)) )
  {
    v19 = 0;
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      v21 = *(_QWORD *)&v18[2 * i + 6];
      if ( v21 && *(_BYTE *)(v21 + 32) )
      {
        if ( a3 )
          return 0;
        v19 = 1;
      }
    }
    if ( !v19 && !v6 && a4 )
    {
LABEL_41:
      v7 = (_QWORD *)v75;
      goto LABEL_42;
    }
    v62 = KeDisableInterrupts();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v18, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 34960));
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 34960));
    }
    v22 = _InterlockedExchange64((volatile __int64 *)(a1 + 35016), 0LL);
    if ( v61 )
    {
      if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        v23 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * HIDWORD(xmmword_140E3EA90));
        do
        {
          v24 = *v23;
          v25 = *v23;
          v74 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EAA0);
        }
        while ( v24 != v25 );
        v26 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EAA0));
        do
        {
          v15 = *v26;
          if ( (HvlEnlightenments & 0x100) != 0 )
            ReferenceTimeUsingTscPage = HvlGetReferenceTimeUsingTscPage(0LL);
          else
            ReferenceTimeUsingTscPage = __readmsr(0x40000020u);
          v28 = ReferenceTimeUsingTscPage;
          v67 = ReferenceTimeUsingTscPage;
        }
        while ( v15 != *v26 );
        v6 = v59;
      }
      else
      {
        ReferenceTime = HvlGetReferenceTime();
        v42 = *(_QWORD *)(a1 + 35792);
        v28 = ReferenceTime;
        v67 = ReferenceTime;
        v15 = ReferenceTime - *(_QWORD *)(v42 + 8LL * DWORD1(xmmword_140E3EA90));
        v74 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EAA0);
      }
      v22 = v28 - v15 - *(_QWORD *)(a1 + 35072);
      *(_QWORD *)(a1 + 35072) = v28 - v15;
    }
    *(_QWORD *)(a1 + 35008) += v22;
    v29 = *(_QWORD *)(a1 + 35256);
    v76 = v29;
    if ( v29 )
    {
      v12 = (LARGE_INTEGER *)(v29 + 160 + ((unsigned __int64)*(unsigned int *)(v29 + 152) << 7));
      memset_0(v12, 0, 0x80uLL);
      v30 = v76;
      ++*(_DWORD *)(v76 + 152);
      if ( *(_DWORD *)(v30 + 152) == 8 )
        *(_DWORD *)(v30 + 152) = 0;
      v12->LowPart = KeGetPcr()->Prcb.Number;
      BYTE5(v12->QuadPart) = v6;
      BYTE4(v12->QuadPart) = 0;
      v12[1] = RtlGetInterruptTimePrecise(&PerformanceCounter);
      BYTE6(v12->QuadPart) = v60;
      v12[2].QuadPart = v22;
      v12[3] = *(LARGE_INTEGER *)(a1 + 35008);
      v12[13].QuadPart = v67;
      v12[14].QuadPart = v15;
    }
    v31 = *(_QWORD *)(a1 + 34984);
    if ( !v31 )
    {
LABEL_30:
      v32 = *(_QWORD *)(a1 + 34992);
      if ( !v32 )
      {
LABEL_31:
        if ( v12 && (unsigned int)dword_140E07728 > 5 )
        {
          v86 = 4LL;
          v88 = 4LL;
          v90 = 8LL;
          v68 = *(_DWORD *)(v76 + 152);
          v85 = &v68;
          v69 = *(_DWORD *)(a1 + 36);
          v87 = &v69;
          v78 = v12[1];
          v89 = &v78;
          LowPart = v12->LowPart;
          p_LowPart = &LowPart;
          v60 = BYTE5(v12->QuadPart);
          v93 = &v60;
          v59 = BYTE6(v12->QuadPart);
          v95 = &v59;
          v79 = v12[2];
          v97 = &v79;
          v80 = v12[3];
          v99 = &v80;
          v81 = v12[13];
          v101 = &v81;
          v82 = v12[14];
          v103 = &v82;
          v71 = v64;
          v105 = &v71;
          v107 = v12 + 4;
          v109 = v12 + 5;
          v111 = v12 + 7;
          v113 = v12 + 9;
          v115 = v12 + 11;
          v117 = v12 + 15;
          v92 = 4LL;
          v94 = 1LL;
          v96 = 1LL;
          v98 = 8LL;
          v100 = 8LL;
          v102 = 8LL;
          v104 = 8LL;
          v106 = 4LL;
          v108 = 8LL;
          v110 = 16LL;
          v112 = 16LL;
          v114 = 16LL;
          v116 = 16LL;
          v118 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_140E07728, byte_140047FB0, 0LL, 0LL, 19, v84);
        }
        if ( *(_BYTE *)(a1 + 35096) == 2 )
          *(_QWORD *)(a1 + 35040) += 100 * v22;
        v33 = *(_DWORD *)(a1 + 34376);
        v34 = *(_DWORD *)(a1 + 34372);
        v35 = v34 - *(_DWORD *)(a1 + 35060);
        v36 = v35 + v33 - *(_DWORD *)(a1 + 35056);
        if ( v36 )
        {
          v56 = *(_QWORD *)(a1 + 35040);
          *(_QWORD *)(a1 + 35040) = 0LL;
          *(_DWORD *)(a1 + 35056) = v33;
          *(_DWORD *)(a1 + 35060) = v34;
          if ( v35 )
          {
            v63 = v35 / v36;
            *(_QWORD *)(a1 + 35048) += v56 * (v35 / v36);
          }
        }
        *(_QWORD *)(a1 + 35064) = v77;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 34960), retaddr);
        if ( v62 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v57 = *SchedulerAssist;
            do
            {
              v58 = v57;
              v57 = _InterlockedCompareExchange(SchedulerAssist, v57 & 0xFFDFFFFF, v57);
            }
            while ( v58 != v57 );
            if ( (v57 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        v13 = v67;
        v14 = v74;
        goto LABEL_41;
      }
      v50 = *(_QWORD *)(v32 + 40);
      v5 = *(_BYTE *)(v32 + 33) == 0;
      v65.QuadPart = 0LL;
      v66.QuadPart = 0LL;
      if ( v5 )
      {
        guard_dispatch_icall_no_overrides(v50, &v63);
        v53 = v63;
        v51 = v72;
        goto LABEL_72;
      }
      guard_dispatch_icall_no_overrides(v50, v59);
      v51 = v65;
      v11 = v66;
      if ( !v59 )
      {
        v52 = *(_QWORD *)(v32 + 16);
        if ( v66.QuadPart == v52 )
        {
LABEL_71:
          v53 = *(_DWORD *)(v32 + 24);
          v63 = v53;
LABEL_72:
          if ( *(_BYTE *)(v32 + 33) )
          {
            v54 = v22 * v53;
            if ( v54 )
            {
              v73 = (v54 * (unsigned __int128)0x64uLL) >> 64;
              if ( is_mul_ok(v54, 0x64uLL) )
                v55 = (100 * v54) >> 16;
              else
                v55 = ((100 * (v54 - (v54 >> 16 << 16))) >> 16) + 100 * (v54 >> 16);
            }
            else
            {
              v55 = 0LL;
            }
          }
          else
          {
            v55 = v22 * v53;
          }
          *(_QWORD *)(a1 + 35032) += v55;
          if ( v12 )
          {
            if ( *(_BYTE *)(v32 + 33) )
            {
              v12[4].HighPart = v53;
              v12[6] = v11;
              v12[8] = v51;
              v12[10].QuadPart = v55;
              v12[12] = *(LARGE_INTEGER *)(a1 + 35032);
              v64 = *(_DWORD *)(v32 + 36);
            }
            else
            {
              v12[15].HighPart = v53;
            }
          }
          if ( *(_BYTE *)(a1 + 35096) == 1 )
            *(_QWORD *)(a1 + 35040) += v55;
          goto LABEL_31;
        }
        *(_DWORD *)(v32 + 24) = (v65.QuadPart - *(_QWORD *)(v32 + 8))
                              * (unsigned __int64)*(unsigned int *)(v32 + 36)
                              / (v66.QuadPart - v52);
      }
      *(LARGE_INTEGER *)(v32 + 16) = v11;
      *(LARGE_INTEGER *)(v32 + 8) = v51;
      goto LABEL_71;
    }
    v43 = *(_QWORD *)(v31 + 40);
    v65.QuadPart = 0LL;
    v66.QuadPart = 0LL;
    if ( !*(_BYTE *)(v31 + 33) )
    {
      guard_dispatch_icall_no_overrides(v43, &v63);
      v46 = v63;
      goto LABEL_57;
    }
    guard_dispatch_icall_no_overrides(v43, v59);
    v44 = v65;
    v11 = v66;
    v72 = v65;
    if ( !v59 )
    {
      v45 = *(_QWORD *)(v31 + 16);
      if ( v66.QuadPart == v45 )
      {
LABEL_56:
        v46 = *(_DWORD *)(v31 + 24);
        v63 = v46;
LABEL_57:
        if ( *(_BYTE *)(v31 + 33) )
        {
          v47 = v22 * v46;
          if ( v47 )
          {
            v73 = (v47 * (unsigned __int128)0x64uLL) >> 64;
            if ( is_mul_ok(v47, 0x64uLL) )
              v48 = (100 * v47) >> 16;
            else
              v48 = ((100 * (v47 - (v47 >> 16 << 16))) >> 16) + 100 * (v47 >> 16);
          }
          else
          {
            v48 = 0LL;
          }
        }
        else
        {
          v48 = v22 * v46;
        }
        *(_QWORD *)(a1 + 35024) += v48;
        if ( v12 )
        {
          if ( *(_BYTE *)(v31 + 33) )
          {
            v49 = v72;
            v12[4].LowPart = v46;
            v12[7] = v49;
            v12[5] = v11;
            v12[9].QuadPart = v48;
            v12[11] = *(LARGE_INTEGER *)(a1 + 35024);
            v64 = *(_DWORD *)(v31 + 36);
          }
          else
          {
            v12[15].LowPart = v46;
          }
        }
        if ( !*(_BYTE *)(a1 + 35096) )
          *(_QWORD *)(a1 + 35040) += v48;
        goto LABEL_30;
      }
      *(_DWORD *)(v31 + 24) = (v65.QuadPart - *(_QWORD *)(v31 + 8))
                            * (unsigned __int64)*(unsigned int *)(v31 + 36)
                            / (v66.QuadPart - v45);
    }
    *(LARGE_INTEGER *)(v31 + 8) = v44;
    *(LARGE_INTEGER *)(v31 + 16) = v11;
    goto LABEL_56;
  }
LABEL_42:
  if ( v7 )
  {
    if ( !v13 )
    {
      if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EAA0);
        v39 = (__int64 *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EAA0));
        do
        {
          v15 = *v39;
          v13 = HvlGetReferenceTime();
        }
        while ( v15 != *v39 );
      }
      else
      {
        v13 = HvlGetReferenceTime();
        v15 = v13 - *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD1(xmmword_140E3EA90));
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * (unsigned int)xmmword_140E3EAA0);
      }
      v7 = (_QWORD *)v75;
    }
    *v7 = v13;
    v7[1] = v15;
    v7[2] = v14;
  }
  return 1;
}
