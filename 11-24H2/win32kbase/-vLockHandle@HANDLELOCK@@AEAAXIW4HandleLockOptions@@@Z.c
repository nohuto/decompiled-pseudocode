/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0
 * Callers:
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x14000EB7C (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     HmgLockAndModifyHandleType @ 0x140016090 (HmgLockAndModifyHandleType.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x14002E480 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002F070 (-HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     HmgLock @ 0x14002FF60 (HmgLock.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140030720 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x140030770 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 *     ?HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z @ 0x140031290 (-HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z.c)
 *     HmgShareLock @ 0x140031760 (HmgShareLock.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x140035CEC (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     EngLockSurface @ 0x140036810 (EngLockSurface.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x140086050 (GreSetSolidBrushLight.c)
 *     HmgMarkLazyDelete @ 0x1400B6D00 (HmgMarkLazyDelete.c)
 *     HmgReplaceObject @ 0x1400BB8D0 (HmgReplaceObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1400C6A40 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400D0C38 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ??0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z @ 0x1400E6750 (--0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1400F6340 (HmgShareUnlockRemoveObject.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x1401C195C (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 */

void __fastcall HANDLELOCK::vLockHandle(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v6; // r12d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v8; // rbp
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned int v18; // edx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r10
  unsigned int v25; // r11d
  __int64 v26; // r10
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // r9
  unsigned int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 i; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned int v37; // r9d
  __int64 v38; // r10
  unsigned int v39; // r11d
  __int64 v40; // r10
  __int64 v41; // rax
  __int64 v42; // r10
  unsigned int v43; // r9d
  __int64 v44; // r11
  _DWORD *v45; // rax
  unsigned int v46; // edx
  __int64 v47; // r9
  unsigned int v48; // r11d
  __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // r9
  unsigned int v52; // r8d
  __int64 v53; // r10
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // r9
  unsigned int v59; // r8d
  __int64 v60; // r10
  unsigned int v61; // r11d
  __int64 v62; // r10
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // r8
  unsigned int v66; // r9d
  __int64 v67; // r10
  __int64 v68; // rcx
  __int64 v69; // [rsp+50h] [rbp-58h]
  unsigned __int64 v70; // [rsp+58h] [rbp-50h]
  __int64 v71; // [rsp+60h] [rbp-48h]
  __int64 v72; // [rsp+B0h] [rbp+8h]
  __int64 v74; // [rsp+C8h] [rbp+20h] BYREF

  v74 = 0LL;
  v4 = 0LL;
  v6 = a2;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v74);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v4 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
    v8 = 0LL;
    if ( v4 )
      v8 = v4 + 8;
    if ( v8 )
    {
      v69 = *(_QWORD *)(v8 + 64);
      goto LABEL_8;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v69 = 0LL;
LABEL_8:
  v9 = (_DWORD *)a1[2];
  *((_DWORD *)a1 + 2) = 1;
  v10 = v6;
  v11 = *((_QWORD *)v9 + 709);
  if ( v6 >= 0x10000 )
  {
    v12 = (unsigned __int16)v6;
    if ( *(_DWORD *)v11 <= 0x10000u )
    {
      v10 = (unsigned __int16)v6;
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_DWORD *)(v13 + 2056);
      if ( (unsigned __int16)v6 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
      {
        v16 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v14 )
        {
          v15 = *(_QWORD *)(v13 + 8LL * ((((unsigned __int16)v6 - v14) >> 16) + 1) + 8);
          v12 = -65536 * (((unsigned __int16)v6 - v14) >> 16) - v14 + (unsigned __int16)v6;
        }
        else
        {
          v15 = *(_QWORD *)(v13 + 8);
        }
        v16 = 0LL;
        if ( (unsigned int)v12 < *(_DWORD *)(v15 + 20) )
          v16 = *(_QWORD *)v15 + 24 * v12;
        LODWORD(v12) = (unsigned __int16)v6;
      }
      if ( *(unsigned __int8 *)(v16 + 13) == HIWORD(v6) )
        v10 = v12;
    }
  }
  v17 = *(_QWORD *)(v11 + 16);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v10 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    *a1 = 0LL;
LABEL_66:
    if ( (a3 & 8) != 0 )
      GrepCaptureLiveMemoryDump(0x190u, 56LL, 0LL, 0LL, 0LL, 0);
    *((_DWORD *)a1 + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  if ( v10 >= v18 )
  {
    v19 = *(_QWORD *)(v17 + 8LL * (((v10 - v18) >> 16) + 1) + 8);
    v10 += -65536 * ((v10 - v18) >> 16) - v18;
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 8);
  }
  v20 = 0LL;
  if ( v10 < *(_DWORD *)(v19 + 20) )
  {
    v71 = 16LL * (unsigned __int8)v10;
    v70 = 8 * ((unsigned __int64)v10 >> 8);
    v72 = v71 + *(_QWORD *)(**(_QWORD **)(v19 + 24) + v70);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v72, 0LL);
    if ( v10 < *(_DWORD *)(v19 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + v70) + v71 + 8) )
    {
      *(_BYTE *)(24LL * v10 + *(_QWORD *)v19 + 6) = 1;
      v20 = 24LL * v10 + *(_QWORD *)v19;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v72, 0LL);
      KeLeaveCriticalRegion();
    }
    v6 = a2;
  }
  *a1 = v20;
  if ( !v20 )
    goto LABEL_66;
  _m_prefetchw((const void *)(v20 + 8));
  if ( (a3 & 1) == 0 )
  {
    v28 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
    if ( v28 != (v74 & 0xFFFFFFFC) && v28 && (!v69 || v28 != (unsigned int)UMPDGetThreadClientPID(v8)) )
    {
      if ( (a3 & 8) != 0 )
        GrepCaptureLiveMemoryDump(0x190u, 56LL, 1LL, 0LL, 0LL, 0);
      goto LABEL_44;
    }
  }
  if ( (a3 & 2) == 0 && (*(_BYTE *)(*a1 + 15) & 0x20) != 0 )
  {
    if ( (a3 & 8) != 0 )
      GrepCaptureLiveMemoryDump(0x190u, 56LL, 2LL, 0LL, 0LL, 0);
    v35 = *(_QWORD *)(a1[2] + 5672);
    v36 = *(unsigned int *)*a1;
    if ( (unsigned int)v36 >= 0x10000 )
    {
      v37 = (unsigned __int16)v36;
      if ( *(_DWORD *)v35 <= 0x10000u )
      {
        v36 = (unsigned __int16)v36;
      }
      else
      {
        v38 = *(_QWORD *)(v35 + 16);
        v39 = *(_DWORD *)(v38 + 2056);
        if ( (unsigned __int16)v36 >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
        {
          v41 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v36 >= v39 )
          {
            v40 = *(_QWORD *)(v38 + 8LL * ((((unsigned __int16)v36 - v39) >> 16) + 1) + 8);
            v37 = -65536 * (((unsigned __int16)v36 - v39) >> 16) - v39 + (unsigned __int16)v36;
          }
          else
          {
            v40 = *(_QWORD *)(v38 + 8);
          }
          v41 = 0LL;
          if ( v37 < *(_DWORD *)(v40 + 20) )
            v41 = *(_QWORD *)v40 + 24LL * v37;
        }
        if ( *(unsigned __int8 *)(v41 + 13) == WORD1(v36) )
          v36 = (unsigned __int16)v36;
      }
    }
    v42 = *(_QWORD *)(v35 + 16);
    v43 = *(_DWORD *)(v42 + 2056);
    if ( (unsigned int)v36 >= v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16)
      || ((unsigned int)v36 >= v43
        ? (v44 = *(_QWORD *)(v42 + 8LL * ((((unsigned int)v36 - v43) >> 16) + 1) + 8),
           v36 = -65536 * (((unsigned int)v36 - v43) >> 16) - v43 + (unsigned int)v36)
        : (v44 = *(_QWORD *)(v42 + 8)),
          (unsigned int)v36 >= *(_DWORD *)(v44 + 20)) )
    {
      v45 = 0LL;
    }
    else
    {
      v45 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v36 >> 8)) + 16LL * (unsigned __int8)v36 + 8);
    }
    v46 = (unsigned __int16)*v45 | (*v45 >> 8) & 0xFF0000;
    if ( v46 >= 0x10000 )
    {
      v47 = (unsigned __int16)*v45;
      if ( *(_DWORD *)v35 <= 0x10000u )
      {
        v46 = (unsigned __int16)*v45;
      }
      else
      {
        v48 = *(_DWORD *)(v42 + 2056);
        if ( (unsigned __int16)*v45 >= v48 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
        {
          v50 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*v45 >= v48 )
          {
            v49 = *(_QWORD *)(v42 + 8LL * ((((unsigned __int16)*v45 - v48) >> 16) + 1) + 8);
            v47 = -65536 * (((unsigned __int16)v46 - v48) >> 16) - v48 + (unsigned __int16)v46;
          }
          else
          {
            v49 = *(_QWORD *)(v42 + 8);
          }
          v50 = 0LL;
          if ( (unsigned int)v47 < *(_DWORD *)(v49 + 20) )
            v50 = *(_QWORD *)v49 + 24 * v47;
        }
        if ( *(unsigned __int8 *)(v50 + 13) == HIWORD(v46) )
          v46 = (unsigned __int16)v46;
      }
    }
    v51 = *(_QWORD *)(v35 + 16);
    v52 = *(_DWORD *)(v51 + 2056);
    if ( v46 < v52 + ((*(unsigned __int16 *)(v51 + 2) + 0xFFFF) << 16) )
    {
      if ( v46 >= v52 )
      {
        v53 = *(_QWORD *)(v51 + 8LL * (((v46 - v52) >> 16) + 1) + 8);
        v46 += -65536 * ((v46 - v52) >> 16) - v52;
      }
      else
      {
        v53 = *(_QWORD *)(v51 + 8);
      }
      *(_BYTE *)(*(_QWORD *)v53 + 24LL * v46 + 6) = 0;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v53 + 24) + 8 * ((unsigned __int64)v46 >> 8)) + 16LL * (unsigned __int8)v46,
        0LL);
      KeLeaveCriticalRegion();
    }
    *((_DWORD *)a1 + 2) = 0;
    *a1 = 0LL;
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( (a3 & 4) == 0 && (*(_BYTE *)(*a1 + 15) & 0x40) != 0 )
    {
      v57 = *(unsigned int *)*a1;
      v58 = *(_QWORD *)(a1[2] + 5672);
      if ( (unsigned int)v57 >= 0x10000 )
      {
        v59 = (unsigned __int16)v57;
        if ( *(_DWORD *)v58 <= 0x10000u )
        {
          v57 = (unsigned __int16)v57;
        }
        else
        {
          v60 = *(_QWORD *)(v58 + 16);
          v61 = *(_DWORD *)(v60 + 2056);
          if ( (unsigned __int16)v57 >= v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16) )
          {
            v63 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v57 >= v61 )
            {
              v62 = *(_QWORD *)(v60 + 8LL * ((((unsigned __int16)v57 - v61) >> 16) + 1) + 8);
              v59 = -65536 * (((unsigned __int16)v57 - v61) >> 16) - v61 + (unsigned __int16)v57;
            }
            else
            {
              v62 = *(_QWORD *)(v60 + 8);
            }
            v63 = 0LL;
            if ( v59 < *(_DWORD *)(v62 + 20) )
              v63 = *(_QWORD *)v62 + 24LL * v59;
          }
          if ( *(unsigned __int8 *)(v63 + 13) == WORD1(v57) )
            v57 = (unsigned __int16)v57;
        }
      }
      v65 = *(_QWORD *)(v58 + 16);
      v66 = *(_DWORD *)(v65 + 2056);
      if ( (unsigned int)v57 >= v66 + ((*(unsigned __int16 *)(v65 + 2) + 0xFFFF) << 16)
        || ((unsigned int)v57 >= v66
          ? (v67 = *(_QWORD *)(v65 + 8LL * ((((unsigned int)v57 - v66) >> 16) + 1) + 8),
             v57 = -65536 * (((unsigned int)v57 - v66) >> 16) - v66 + (unsigned int)v57)
          : (v67 = *(_QWORD *)(v65 + 8)),
            (unsigned int)v57 >= *(_DWORD *)(v67 + 20)) )
      {
        v68 = 0LL;
      }
      else
      {
        v68 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v67 + 24) + 8 * (v57 >> 8)) + 16LL * (unsigned __int8)v57 + 8);
      }
      if ( !*(_WORD *)(v68 + 12) || *(struct _KTHREAD **)(v68 + 16) != KeGetCurrentThread() )
      {
        if ( (a3 & 8) == 0 )
          goto LABEL_44;
        v64 = 5LL;
LABEL_125:
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 56LL, v64, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_44:
        HANDLELOCK::vUnlock((HANDLELOCK *)a1);
        return;
      }
    }
    v21 = *(_QWORD *)(a1[2] + 5672);
    v22 = *(_DWORD *)*a1;
    if ( v22 >= 0x10000 )
    {
      v23 = (unsigned __int16)v22;
      if ( *(_DWORD *)v21 <= 0x10000u )
      {
        v22 = (unsigned __int16)v22;
      }
      else
      {
        v24 = *(_QWORD *)(v21 + 16);
        v25 = *(_DWORD *)(v24 + 2056);
        if ( (unsigned __int16)v22 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
        {
          v27 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v22 >= v25 )
          {
            v26 = *(_QWORD *)(v24 + 8LL * ((((unsigned __int16)v22 - v25) >> 16) + 1) + 8);
            v23 = -65536 * (((unsigned __int16)v22 - v25) >> 16) - v25 + (unsigned __int16)v22;
          }
          else
          {
            v26 = *(_QWORD *)(v24 + 8);
          }
          v27 = 0LL;
          if ( (unsigned int)v23 < *(_DWORD *)(v26 + 20) )
            v27 = *(_QWORD *)v26 + 24 * v23;
        }
        if ( *(unsigned __int8 *)(v27 + 13) == HIWORD(v22) )
          v22 = (unsigned __int16)v22;
      }
    }
    v29 = *(_QWORD *)(v21 + 16);
    v30 = *(_DWORD *)(v29 + 2056);
    if ( v22 >= v30 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16)
      || (v22 >= v30
        ? (v31 = *(_QWORD *)(v29 + 8LL * (((v22 - v30) >> 16) + 1) + 8), v22 += -65536 * ((v22 - v30) >> 16) - v30)
        : (v31 = *(_QWORD *)(v29 + 8)),
          v22 >= *(_DWORD *)(v31 + 20)) )
    {
      v32 = 0LL;
    }
    else
    {
      v32 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v22 >> 8))
                      + 16LL * (unsigned __int8)v22
                      + 8);
    }
    if ( (*(_BYTE *)(v32 + 14) & 0x20) != 0 )
    {
      if ( v8 )
      {
        v33 = *(_QWORD *)(v8 + 336);
        if ( v33 )
        {
          if ( *(_BYTE *)(v33 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v33 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v33 + 40) + 4 * i) == v6 )
                return;
            }
          }
        }
      }
      *((_BYTE *)a1 + 12) = 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_44;
      v64 = 6LL;
      goto LABEL_125;
    }
  }
}
