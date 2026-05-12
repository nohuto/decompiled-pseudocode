/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x140043D90
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1400276F0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x140029420 (RaidAdapterAcquireStartIoLock.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  unsigned int v2; // r14d
  __int64 v3; // rsi
  struct _PROCESSOR_NUMBER v4; // edi
  __int64 *v5; // r15
  struct _SLIST_ENTRY *Pool; // r13
  void *v7; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r12
  unsigned int v13; // r15d
  unsigned int *v14; // rdi
  KIRQL v15; // r12
  USHORT ActiveGroupCount; // ax
  __int64 v17; // r15
  PVOID v18; // rax
  __int64 v19; // r14
  unsigned __int16 v20; // r14
  __int64 v21; // r12
  ULONG v22; // r13d
  ULONG ActiveProcessorCount; // edi
  unsigned __int64 v24; // r12
  int v25; // edi
  unsigned int v26; // eax
  size_t v27; // r15
  _WORD *v28; // r12
  int v29; // r13d
  char *v30; // rax
  USHORT v31; // r14
  unsigned __int16 v32; // r10
  unsigned __int16 v33; // r11
  __int64 v34; // rdi
  char *v35; // r9
  __int64 v36; // r8
  char v37; // dl
  unsigned __int16 v38; // cx
  unsigned int v39; // r13d
  __int64 v40; // r9
  unsigned int v41; // edi
  char *v42; // r15
  __int64 v43; // rax
  void *v44; // r14
  unsigned __int64 v45; // r10
  ULONG v46; // eax
  unsigned int v47; // r12d
  char v48; // di
  NTSTATUS ProcessorNumberFromIndex; // eax
  NTSTATUS v50; // eax
  unsigned int v51; // r14d
  char v52; // r15
  NTSTATUS v53; // eax
  int EfficiencyClass; // ebx
  char *v55; // rax
  __int64 v56; // rcx
  char *v57; // rcx
  __int64 v58; // rdx
  unsigned int v59; // r13d
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r11
  __int64 v63; // rcx
  char v64; // al
  char *v65; // r11
  char v66; // al
  unsigned __int64 v67; // rdi
  unsigned int v68; // r9d
  unsigned int v69; // ecx
  char v70; // dl
  unsigned int v71; // r11d
  __int64 v72; // rbx
  unsigned int v73; // r10d
  char v74; // r14
  __int64 v75; // r15
  char *v76; // rdx
  char v77; // cl
  unsigned int v78; // edx
  char v79; // al
  __int64 v80; // r8
  __int64 v81; // rcx
  _BYTE *v82; // r14
  unsigned int v83; // ecx
  unsigned int v84; // ebx
  char *v85; // r9
  __int64 v86; // rdx
  char v87; // r13
  unsigned int v88; // r11d
  __int64 v89; // rdi
  __int64 v90; // r15
  __int64 v91; // rax
  char v92; // r8
  size_t v93; // r13
  struct _GROUP_AFFINITY *v94; // r15
  unsigned __int64 Mask; // rdx
  unsigned __int16 v96; // r9
  int v97; // edi
  unsigned __int16 i; // r8
  __int64 v99; // rax
  unsigned int v100; // ecx
  unsigned int v101; // edx
  char v102; // cl
  __int64 v103; // r9
  int v104; // r10d
  __int64 v105; // r8
  char v106; // r10
  _BYTE *v107; // rax
  __int64 v108; // r9
  unsigned int v109; // r8d
  unsigned int v110; // r11d
  int v111; // r9d
  unsigned int v112; // eax
  unsigned int v113; // r8d
  __int64 v114; // r10
  USHORT v115; // r15
  ULONG v116; // r12d
  char *v117; // rbx
  char *v118; // rdi
  ULONG v119; // eax
  int v120; // r14d
  unsigned int v121; // r13d
  int v122; // r9d
  unsigned int j; // r8d
  __int64 v124; // r10
  unsigned int v125; // r13d
  ULONG v126; // eax
  char *v127; // r11
  char *v128; // r8
  unsigned int v129; // ebx
  unsigned __int16 v130; // r9
  int v131; // r10d
  __int64 v132; // r14
  __int64 v133; // rdi
  int v134; // ecx
  unsigned int v135; // edx
  signed __int32 v136[8]; // [rsp+0h] [rbp-100h] BYREF
  char *v137; // [rsp+20h] [rbp-E0h]
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v139; // [rsp+2Ch] [rbp-D4h]
  ULONG v140; // [rsp+30h] [rbp-D0h]
  unsigned int v141; // [rsp+34h] [rbp-CCh]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v143; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int64 v145; // [rsp+50h] [rbp-B0h]
  ULONG Length; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v147; // [rsp+60h] [rbp-A0h]
  __int64 v148; // [rsp+68h] [rbp-98h]
  int v149; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+78h] [rbp-88h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+90h] [rbp-70h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v152; // [rsp+E0h] [rbp-20h] BYREF
  char v154; // [rsp+180h] [rbp+80h]
  __int64 v155; // [rsp+180h] [rbp+80h]
  unsigned int v156; // [rsp+188h] [rbp+88h]
  KIRQL v157; // [rsp+188h] [rbp+88h]
  unsigned int v158; // [rsp+188h] [rbp+88h]
  USHORT v159; // [rsp+188h] [rbp+88h]
  unsigned __int16 v160; // [rsp+190h] [rbp+90h]
  __int64 *v161; // [rsp+198h] [rbp+98h]
  USHORT v162; // [rsp+198h] [rbp+98h]
  int v163; // [rsp+198h] [rbp+98h]
  unsigned int v164; // [rsp+198h] [rbp+98h]

  v1 = *(_WORD *)(a1 + 4660);
  v2 = *(_DWORD *)(a1 + 4664);
  ProcNumber = 0;
  v3 = a1;
  *(_QWORD *)&v150.OldIrql = 0LL;
  v143 = 0LL;
  ProcessorNumber = 0;
  v4 = 0;
  v160 = v1;
  *(_WORD *)(a1 + 4660) = 0;
  v150.LockQueue = 0LL;
  if ( (int)v2 < 1 )
    v2 = -v2;
  *(_DWORD *)(a1 + 4664) = 1;
  if ( v2 > 1 )
  {
    v5 = (__int64 *)(a1 + 4672);
    if ( *(char *)(a1 + 110) >= 0 || !*v5 )
    {
      Pool = (struct _SLIST_ENTRY *)RaidAllocatePool(64LL, 32LL * v2, 1413701970LL, *(_QWORD *)(a1 + 8));
      if ( !Pool )
        goto LABEL_7;
      v9 = KeQueryHighestNodeNumber() + 1;
      v156 = v9;
      v10 = RaidAllocatePool(72LL, (unsigned __int64)v9 << 6, 1413701970LL, *(_QWORD *)(v3 + 8));
      *v5 = v10;
      if ( !v10 )
        goto LABEL_7;
      if ( v9 )
      {
        v11 = v9;
        v12 = 0LL;
        do
        {
          InitializeSListHead((PSLIST_HEADER)(v12 + *v5));
          v12 += 64LL;
          --v11;
        }
        while ( v11 );
        v9 = v156;
        v161 = (__int64 *)(v3 + 4672);
        v13 = 0;
      }
      else
      {
        v161 = v5;
        v13 = 0;
      }
      v14 = (unsigned int *)&Pool[1].Next + 1;
      do
      {
        *v14 = v13;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(*v161 + ((unsigned __int64)(v13 % v9) << 6)), Pool);
        ++v13;
        v14 += 8;
        Pool += 2;
      }
      while ( v13 < v2 );
      v3 = a1;
      RaidAdapterAcquireStartIoLock(a1, &v150);
      *(_DWORD *)(a1 + 4664) = v2;
      RaidAdapterReleaseStartIoLock(a1, &v150);
      v4 = ProcessorNumber;
    }
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_8;
  v15 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v157 = v15;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v17 = ActiveGroupCount;
    v162 = ActiveGroupCount;
    if ( *(char *)(v3 + 110) < 0 && (v18 = g_RaidPerProcessorState) != 0LL )
    {
      v19 = (unsigned int)v17;
    }
    else
    {
      v19 = v17;
      v18 = (PVOID)RaidAllocatePool(64LL, v17 << 13, 1917083986LL, *(_QWORD *)(v3 + 8));
      g_RaidPerProcessorState = v18;
    }
    if ( !v18
      || (*(char *)(v3 + 110) >= 0 || !g_RaidDPCRedirectionProcessors)
      && (g_RaidDPCRedirectionProcessors = (PVOID)RaidAllocatePool(64LL, 4 * v19, 1917083986LL, *(_QWORD *)(v3 + 8))) == 0LL )
    {
      v4 = (struct _PROCESSOR_NUMBER)-1073741670;
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( g_RaidPerProcessorState )
        {
          ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
          g_RaidPerProcessorState = 0LL;
        }
        if ( g_RaidDPCRedirectionProcessors )
        {
          ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
          g_RaidDPCRedirectionProcessors = 0LL;
        }
        g_RaidPerfRedirectGroupCount = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v15);
      goto LABEL_8;
    }
    v20 = 0;
    if ( (_WORD)v17 )
    {
      v21 = 0LL;
      v145 = 0LL;
      do
      {
        ProcNumber.Group = v20;
        ProcNumber.Reserved = 0;
        v22 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v20);
        if ( ActiveProcessorCount )
        {
          do
          {
            v24 = (unsigned __int64)((v20 << 6) + v22) << 7;
            ProcNumber.Number = v22;
            KeInitializeDpc(
              (PRKDPC)((char *)g_RaidPerProcessorState + v24),
              (PKDEFERRED_ROUTINE)RaidpAdapterRedirectDpcRoutine,
              (char *)g_RaidPerProcessorState + v24);
            KeSetImportanceDpc((PRKDPC)((char *)g_RaidPerProcessorState + v24), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)g_RaidPerProcessorState + v24), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v24 + 64));
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v24 + 80));
            ++v22;
            *(_DWORD *)((char *)g_RaidPerProcessorState + v24 + 96) = 0;
          }
          while ( v22 < ActiveProcessorCount );
          LOWORD(v17) = v162;
          v21 = v145;
        }
        ++v20;
        *(_DWORD *)((char *)g_RaidDPCRedirectionProcessors + v21) = ActiveProcessorCount;
        v21 += 4LL;
        v145 = v21;
      }
      while ( v20 < (unsigned __int16)v17 );
      v4 = ProcessorNumber;
      v3 = a1;
      v15 = v157;
    }
    _InterlockedOr(v136, 0);
    g_RaidPerfRedirectGroupCount = (unsigned __int16)v17;
  }
  *(_WORD *)(v3 + 4660) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v15);
  if ( (v1 & 2) == 0 || (v1 & 0xFFFC) == 0 )
  {
LABEL_8:
    v7 = *(void **)(v3 + 4680);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x72446152u);
      *(_QWORD *)(v3 + 4680) = 0LL;
      *(_WORD *)(v3 + 4662) = 0;
    }
    return *(unsigned int *)&v4;
  }
  v25 = v1 >> 2;
  v26 = v25 + 281;
  if ( (((_BYTE)v25 + 24) & 1) == 0 )
    v26 = v25 + 280;
  v27 = v26;
  v147 = RaidAllocatePool(66LL, v26, 1917083986LL, *(_QWORD *)(v3 + 8));
  v28 = (_WORD *)v147;
  if ( !v147 )
  {
LABEL_7:
    v4 = (struct _PROCESSOR_NUMBER)-1073741670;
    goto LABEL_8;
  }
  v29 = v25 + 5;
  if ( (((_BYTE)v25 + 4) & 1) == 0 )
    v29 = v25 + 4;
  v163 = v29;
  v30 = (char *)RaidAllocatePool(
                  64LL,
                  v29 * (unsigned int)*(unsigned __int16 *)(v3 + 4662),
                  1917083986LL,
                  *(_QWORD *)(v3 + 8));
  v31 = 0;
  P = v30;
  if ( !v30 )
  {
    ExFreePoolWithTag(v28, 0x72446152u);
    v4 = (struct _PROCESSOR_NUMBER)-1073741670;
    goto LABEL_8;
  }
  v32 = 0;
  if ( *(_WORD *)(v3 + 4662) )
  {
    do
    {
      v33 = 0;
      v34 = 64LL;
      v35 = &v30[v32 * v29];
      v36 = v32 << 6;
      *(_WORD *)v35 = v32;
      do
      {
        v37 = *(_BYTE *)(v36 + *(_QWORD *)(v3 + 4680));
        if ( v37 != -1 )
        {
          v38 = 0;
          if ( v33 )
          {
            while ( v35[v38 + 4] != v37 )
            {
              if ( ++v38 >= v33 )
                goto LABEL_60;
            }
          }
          else
          {
LABEL_60:
            v35[v33 + 4] = *(_BYTE *)(v36 + *(_QWORD *)(v3 + 4680));
            ++*((_WORD *)v35 + 1);
            ++v33;
          }
        }
        v36 = (unsigned int)(v36 + 1);
        --v34;
      }
      while ( v34 );
      ++v32;
    }
    while ( v32 < *(_WORD *)(v3 + 4662) );
    v28 = (_WORD *)v147;
  }
  if ( !g_HeterogenousCPU || (*(_BYTE *)(v3 + 4371) & 0x10) == 0 )
  {
    if ( KeQueryHighestNodeNumber() != -1 )
    {
      v93 = v27;
      v94 = (struct _GROUP_AFFINITY *)(v28 + 132);
      do
      {
        memset_0(v28, 0, v93);
        KeQueryNodeActiveAffinity(v31, v94, v28);
        if ( *v28 )
        {
          Mask = v94->Mask;
          v96 = 0;
          v97 = 0;
          for ( i = 0; Mask; Mask >>= 1 )
          {
            if ( (Mask & 1) != 0 )
            {
              v99 = v96++;
              *(_DWORD *)&v28[2 * v99 + 2] = i;
            }
            ++i;
          }
          LOWORD(v100) = *v28;
          v101 = 0;
          if ( *v28 )
          {
            do
            {
              v102 = 0;
              v103 = *(_QWORD *)(v3 + 4680);
              v104 = (unsigned __int16)v28[136] << 6;
              if ( *(_BYTE *)((unsigned int)(v104 + *(_DWORD *)&v28[2 * v101 + 2]) + v103) == 0xFF )
              {
                ++v97;
              }
              else
              {
                v105 = *((unsigned int *)v28 + 65);
                if ( !(_DWORD)v105 )
                  goto LABEL_176;
                v106 = *(_BYTE *)((unsigned int)(v104 + *(_DWORD *)&v28[2 * v101 + 2]) + v103);
                v107 = v28 + 140;
                v108 = (unsigned int)v105;
                do
                {
                  if ( v106 == *v107 )
                    v102 = 1;
                  ++v107;
                  --v108;
                }
                while ( v108 );
                v103 = *(_QWORD *)(v3 + 4680);
                if ( !v102 )
                {
LABEL_176:
                  *((_BYTE *)v28 + v105 + 280) = *(_BYTE *)(((unsigned __int16)v28[136] << 6)
                                                          + *(_DWORD *)&v28[2 * v101 + 2]
                                                          + v103);
                  ++*((_DWORD *)v28 + 65);
                }
              }
              v100 = (unsigned __int16)*v28;
              ++v101;
            }
            while ( v101 < v100 );
          }
          v109 = *((_DWORD *)v28 + 65);
          LOWORD(v110) = 0;
          if ( v109 )
          {
            if ( v97 )
            {
              v111 = 0;
              v112 = (v109 + v97 - 1) / v109;
              v113 = 0;
              if ( (_WORD)v100 )
              {
                do
                {
                  v114 = *(_QWORD *)(v3 + 4680);
                  if ( *(_BYTE *)(((unsigned __int16)v28[136] << 6) + *(_DWORD *)&v28[2 * v113 + 2] + v114) == 0xFF )
                  {
                    ++v111;
                    *(_BYTE *)(((unsigned __int16)v28[136] << 6) + *(_DWORD *)&v28[2 * v113 + 2] + v114) = *((_BYTE *)v28 + (unsigned __int16)v110 + 280);
                    if ( v111 == v112 )
                    {
                      v111 = 0;
                      v110 = ((unsigned int)(unsigned __int16)v110 + 1) % *((_DWORD *)v28 + 65);
                    }
                  }
                  ++v113;
                }
                while ( v113 < (unsigned __int16)*v28 );
                v94 = (struct _GROUP_AFFINITY *)(v28 + 132);
              }
            }
          }
        }
        ++v31;
      }
      while ( v31 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
      v29 = v163;
    }
    ExFreePoolWithTag(v28, 0x72446152u);
    LODWORD(v45) = 0;
    v28 = 0LL;
    v115 = 0;
    v159 = 0;
    if ( !*(_WORD *)(v3 + 4662) )
    {
LABEL_212:
      v42 = 0LL;
      goto LABEL_213;
    }
    v116 = v1;
    v117 = (char *)P;
    v140 = v116;
    while ( 1 )
    {
      v118 = &v117[v115 * v29];
      if ( !*((_WORD *)v118 + 1) )
        break;
      v119 = (*((unsigned __int16 *)v118 + 1) + KeQueryActiveProcessorCountEx(v115) - 1)
           / *((unsigned __int16 *)v118 + 1);
      if ( v119 != 1 )
      {
        v120 = v115 << 6;
        LOWORD(v121) = 0;
        v122 = 0;
        for ( j = 0; j < 0x40; ++j )
        {
          v124 = *(_QWORD *)(v3 + 4680);
          if ( *(_BYTE *)(j + v120 + v124) == 0xFF )
          {
            ++v122;
            *(_BYTE *)(j + v120 + v124) = v118[(unsigned __int16)v121 + 4];
            if ( v122 == v119 - 1 )
            {
              v122 = 0;
              v121 = ((unsigned int)(unsigned __int16)v121 + 1) % *((unsigned __int16 *)v118 + 1);
            }
          }
        }
LABEL_209:
        v29 = v163;
        v116 = v140;
        v115 = v159;
      }
      ++v115;
      LODWORD(v45) = 0;
      v159 = v115;
      if ( v115 >= *(_WORD *)(v3 + 4662) )
      {
        v1 = v160;
        v28 = 0LL;
        goto LABEL_212;
      }
    }
    LOWORD(v125) = 0;
    v126 = KeQueryActiveProcessorCountEx(v115);
    v127 = (char *)P;
    v128 = (char *)P;
    v141 = ((v116 >> 2) + v126 - 1) / (v116 >> 2);
    v129 = v141;
    v130 = 0;
    v131 = 0;
    v132 = v115 << 6;
    v133 = 64LL;
    do
    {
      if ( *(_BYTE *)(v132 + *(_QWORD *)(v3 + 4680)) == 0xFF )
      {
        if ( !*((_WORD *)v128 + 1) )
        {
          v134 = (unsigned __int16)v125;
          do
          {
            v135 = (v134 + 1) % (unsigned int)*(unsigned __int16 *)(v3 + 4662);
            v134 = (unsigned __int16)v135;
            LOWORD(v125) = v135;
            v128 = (char *)P + v163 * (unsigned int)(unsigned __int16)v135;
          }
          while ( !*((_WORD *)v128 + 1) );
          v3 = a1;
          v129 = v141;
          v127 = (char *)P;
        }
        ++v131;
        *(_BYTE *)(v132 + *(_QWORD *)(v3 + 4680)) = v128[v130 + 4];
        if ( v131 == v129 )
        {
          ++v130;
          v131 = 0;
          if ( v130 == *((_WORD *)v128 + 1) )
          {
            v125 = ((unsigned int)(unsigned __int16)v125 + 1) % *(unsigned __int16 *)(v3 + 4662);
            v128 = &v127[v163 * v125];
            v130 = 0;
          }
        }
      }
      v132 = (unsigned int)(v132 + 1);
      --v133;
    }
    while ( v133 );
    v117 = (char *)P;
    goto LABEL_209;
  }
  v141 = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( v1 >> 2 >= v141 )
  {
    v42 = 0LL;
    LODWORD(v45) = 0;
    goto LABEL_213;
  }
  ProcessorNumber = 0;
  memset_0(&Information, 0, sizeof(Information));
  memset_0(&v152, 0, sizeof(v152));
  v39 = 0;
  v40 = *(_QWORD *)(v3 + 8);
  Length = 80;
  v41 = 1024;
  v139 = 0;
  if ( g_MaximumProcessorCount )
    v41 = g_MaximumProcessorCount;
  v164 = 0;
  v158 = 0;
  v154 = 0;
  v42 = (char *)RaidAllocatePool(64LL, 56LL * v41, 1917083986LL, v40);
  v137 = v42;
  v43 = 0LL;
  if ( !v42
    || (v43 = RaidAllocatePool(64LL, 2 * v41, 1917083986LL, *(_QWORD *)(v3 + 8)),
        LODWORD(v45) = 0,
        (v143 = (_BYTE *)v43) == 0LL) )
  {
    v4 = (struct _PROCESSOR_NUMBER)-1073741670;
    v44 = (void *)v43;
    goto LABEL_214;
  }
  v148 = v41 + v43;
  v46 = 0;
  v140 = 0;
  if ( !v141 )
    goto LABEL_213;
  v47 = 0;
  do
  {
    v48 = v45;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v46, &ProcessorNumber);
    LODWORD(v45) = 0;
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_134;
    v50 = KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationProcessorModule, &Information, &Length);
    LODWORD(v45) = 0;
    if ( v50 < 0 )
      goto LABEL_134;
    v51 = 0;
    v52 = 0;
    v53 = KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationProcessorCore, &v152, &Length);
    LODWORD(v45) = 0;
    EfficiencyClass = 0;
    if ( v53 >= 0 )
      EfficiencyClass = v152.Processor.EfficiencyClass;
    v149 = EfficiencyClass;
    if ( v39 )
    {
      v55 = v137 + 40;
      v56 = v39;
      do
      {
        if ( *((_WORD *)v55 + 4) == Information.Processor.GroupMask[0].Group
          && *(_QWORD *)v55 == Information.Processor.GroupMask[0].Mask )
        {
          v48 = 1;
        }
        v55 += 56;
        --v56;
      }
      while ( v56 );
      if ( v48 )
      {
        v42 = v137;
        goto LABEL_134;
      }
    }
    v57 = v137;
    v58 = 56LL * v39;
    v137[v58 + 33] = -1;
    v45 = Information.Processor.GroupMask[0].Mask;
    if ( !Information.Processor.GroupMask[0].Mask )
    {
      v42 = v57;
      LODWORD(v45) = 0;
      goto LABEL_132;
    }
    v59 = v158;
    do
    {
      while ( 1 )
      {
        v60 = v59;
        v61 = v47;
        if ( _bittest64((const __int64 *)&v45, v51) )
          break;
        ++v51;
      }
      v62 = *(_QWORD *)(v3 + 4680);
      v45 &= ~(1LL << v51);
      if ( *(_BYTE *)(v51 + (Information.Processor.GroupMask[0].Group << 6) + v62) == 0xFF )
      {
        if ( !v52 )
        {
          v52 = 1;
          if ( v57[v58 + 33] == -1 )
            v57[v58 + 33] = EfficiencyClass;
        }
      }
      else
      {
        if ( v57[v58 + 33] == -1 )
        {
          v57[v58 + 33] = EfficiencyClass;
          v62 = *(_QWORD *)(v3 + 4680);
        }
        v63 = (unsigned __int8)v57[v58 + 32];
        if ( (unsigned __int8)v63 < 0x20u )
        {
          v64 = *(_BYTE *)(v51 + (Information.Processor.GroupMask[0].Group << 6) + v62);
          v65 = v137;
          v137[v58 + v63] = v64;
          ++v65[v58 + 32];
          v66 = *(_BYTE *)(v51 + (Information.Processor.GroupMask[0].Group << 6) + *(_QWORD *)(v3 + 4680));
          if ( (_BYTE)EfficiencyClass )
          {
            ++v59;
            *(_BYTE *)(v60 + v148) = v66;
          }
          else
          {
            ++v47;
            v143[v61] = v66;
          }
        }
        v57 = v137;
      }
      ++v51;
    }
    while ( v45 );
    v158 = v59;
    v39 = v139;
    v164 = v47;
    if ( !v52 )
    {
      v42 = v137;
      goto LABEL_132;
    }
    v67 = Information.Processor.GroupMask[0].Mask;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    if ( !Information.Processor.GroupMask[0].Mask )
      goto LABEL_127;
    v72 = 56LL * v139;
    do
    {
      while ( 1 )
      {
        v73 = v69;
        v74 = v70;
        if ( _bittest64((const __int64 *)&v67, v71) )
          break;
        ++v71;
      }
      v67 &= ~(1LL << v71);
      v75 = v71 + (Information.Processor.GroupMask[0].Group << 6);
      v145 = *(_QWORD *)(v3 + 4680);
      if ( *(_BYTE *)(v75 + v145) != 0xFF )
        goto LABEL_122;
      v76 = v137;
      if ( !v137[v72 + 32] )
      {
        if ( (_BYTE)v149 )
        {
          if ( v158 )
          {
            *(_BYTE *)(v75 + v145) = *(_BYTE *)(v68 + v148);
            if ( v69 <= v68 )
              v69 = v68;
            v78 = (v68 + 1) % v158;
            goto LABEL_120;
          }
        }
        else if ( v47 )
        {
          *(_BYTE *)(v75 + v145) = v143[v68];
          if ( v69 <= v68 )
            v69 = v68;
          v78 = (v68 + 1) % v47;
LABEL_120:
          v68 = v78;
          v70 = v74;
          goto LABEL_122;
        }
        v70 = 1;
        goto LABEL_122;
      }
      v77 = v137[v72 + v68];
      if ( v77 != -1 )
      {
        *(_BYTE *)(v75 + v145) = v77;
        v68 = (v68 + 1) % (unsigned __int8)v76[v72 + 32];
      }
      v70 = v74;
      v69 = v73;
LABEL_122:
      ++v71;
      LODWORD(v45) = 0;
    }
    while ( v67 );
    v39 = v139;
    if ( v70 )
    {
      v79 = v154;
      if ( !v154 )
        v79 = 1;
      v154 = v79;
    }
LABEL_127:
    v42 = v137;
    v80 = 56LL * v39;
    if ( !v137[v80 + 32] && !v70 )
      v137[v80 + 32] = v69 + 1;
LABEL_132:
    *(_WORD *)&v42[56 * v39 + 48] = Information.Processor.GroupMask[0].Group;
    v81 = 56LL * v39++;
    v139 = v39;
    *(_QWORD *)&v42[v81 + 40] = Information.Processor.GroupMask[0].Mask;
LABEL_134:
    v46 = v140 + 1;
    v140 = v46;
  }
  while ( v46 < v141 );
  v1 = v160;
  v28 = (_WORD *)v147;
  if ( v154 )
  {
    v82 = 0LL;
    v83 = 0;
    if ( v39 )
    {
      v84 = v164;
      v85 = v42 + 40;
      v86 = v39;
      v155 = v39;
      while ( *(v85 - 8) != (_BYTE)v45 )
      {
LABEL_158:
        v85 += 56;
        v155 = --v86;
        if ( !v86 )
        {
          v1 = v160;
          v28 = (_WORD *)v147;
          v42 = v137;
          goto LABEL_213;
        }
      }
      v87 = -1;
      if ( *(v85 - 7) != 1 || !v158 )
      {
        if ( v84 )
        {
          v82 = v143;
          v88 = v84;
LABEL_146:
          v89 = *(_QWORD *)v85;
          if ( *(_QWORD *)v85 )
          {
            do
            {
              while ( !_bittest64(&v89, (unsigned int)v45) )
                LODWORD(v45) = v45 + 1;
              v90 = *(_QWORD *)(v3 + 4680);
              v89 &= ~(1LL << v45);
              v91 = (unsigned int)v45 + (*((unsigned __int16 *)v85 + 4) << 6);
              if ( *(_BYTE *)(v91 + v90) == 0xFF )
              {
                if ( v87 == -1 )
                {
                  *(_BYTE *)(v91 + v90) = v82[v83];
                  v92 = v83 + 1;
                  if ( v83 + 1 <= (unsigned __int8)*(v85 - 8) )
                    v92 = *(v85 - 8);
                  *(v85 - 8) = v92;
                  v83 = (v83 + 1) % v88;
                }
                else
                {
                  *(_BYTE *)(v91 + v90) = v87;
                  *(v85 - 8) = 1;
                }
              }
              LODWORD(v45) = v45 + 1;
            }
            while ( v89 );
            v86 = v155;
            v84 = v164;
          }
          LODWORD(v45) = 0;
          goto LABEL_158;
        }
        if ( !v158 )
        {
          v87 = v45;
          v88 = 1;
          goto LABEL_146;
        }
      }
      v82 = (_BYTE *)v148;
      v88 = v158;
      goto LABEL_146;
    }
  }
LABEL_213:
  v44 = v143;
  *(_WORD *)(v3 + 4660) = v1 & 0xFFFC ^ (*(_WORD *)(v3 + 4660) & 1 | 2);
  v4 = (struct _PROCESSOR_NUMBER)v45;
  if ( v28 )
LABEL_214:
    ExFreePoolWithTag(v28, 0x72446152u);
  ExFreePoolWithTag(P, 0x72446152u);
  if ( v42 )
    ExFreePoolWithTag(v42, 0x72446152u);
  if ( v44 )
    ExFreePoolWithTag(v44, 0x72446152u);
  return *(unsigned int *)&v4;
}
