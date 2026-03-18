/*
 * XREFs of LinkWindow @ 0x1C00B5F60
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C00A6D38 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x1C00AD874 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C0021130 (DwmAsyncChildLink.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C0082ED4 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     TrackLayeredZorder @ 0x1C00B2F78 (TrackLayeredZorder.c)
 *     GetBandOrdinal @ 0x1C00B518C (GetBandOrdinal.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00B6C70 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     GetLastTopMostWindow @ 0x1C00EA300 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HWInsertAfter @ 0x1C01A5BE8 (HWInsertAfter.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND *a2, __int64 *a3)
{
  char v3; // si
  struct tagWND **v4; // rdi
  struct tagWND *LastTopMostWindow; // r15
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r10d
  _DWORD *v20; // rax
  __int64 v21; // r9
  unsigned int v22; // edx
  int v23; // ecx
  _DWORD *v24; // rax
  struct tagWND *v25; // r8
  _DWORD *v26; // r11
  unsigned int v27; // edx
  int v28; // ecx
  _DWORD *v29; // rax
  unsigned int v30; // edx
  int v31; // ecx
  _DWORD *v32; // rax
  __int64 v33; // r8
  unsigned int v34; // edx
  int v35; // ecx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  struct tagWND **v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct tagWND *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  struct tagWND ***v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct tagWND *v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // ecx
  struct tagWND *v53; // rax
  bool v54; // zf
  unsigned int v55; // edx
  __int64 v56; // rax
  struct tagWND *v57; // rdx
  __int64 v58; // rcx
  struct tagWND *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 *v62; // rax
  struct tagWND *v63; // rbx
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  CVisRgnTrackerProp *Prop; // rax
  __int128 *v72; // rbx
  __int64 BufferChainingDpc_low; // r14
  __int64 v74; // xmm1_8
  PERESOURCE *v75; // rax
  int v76; // edi
  tagObjLock **v77; // rbx
  CVisRgnTrackerProp *v78; // rbx
  struct tagWND *i; // rbx
  struct tagWND *j; // rbx
  int v81; // edi
  __int64 v82; // rsi
  __int64 v83; // r14
  void *v84; // rbx
  __int64 v85; // rcx
  __int64 k; // r15
  int v87; // eax
  int v88; // r14d
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rbx
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rcx
  void *v95; // rax
  struct tagWND **v96; // [rsp+40h] [rbp-99h] BYREF
  struct tagWND *v97; // [rsp+48h] [rbp-91h]
  char *v98; // [rsp+50h] [rbp-89h] BYREF
  struct tagWND *v99; // [rsp+58h] [rbp-81h]
  _QWORD *v100; // [rsp+60h] [rbp-79h] BYREF
  struct tagWND *v101; // [rsp+68h] [rbp-71h]
  _QWORD v102[2]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v103; // [rsp+80h] [rbp-59h]
  __int64 v104; // [rsp+90h] [rbp-49h]
  _BYTE v105[38]; // [rsp+A0h] [rbp-39h] BYREF
  __int16 v106; // [rsp+C6h] [rbp-13h]
  int v107; // [rsp+C8h] [rbp-11h]
  __int64 v108; // [rsp+CCh] [rbp-Dh]
  __int64 v109; // [rsp+D4h] [rbp-5h]
  struct tagWND *v110; // [rsp+DCh] [rbp+3h]
  int v111; // [rsp+E4h] [rbp+Bh]

  v3 = 0;
  v4 = (struct tagWND **)(a3 + 14);
  LastTopMostWindow = a2;
  v8 = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v9 = *((_QWORD *)a2 + 3);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      if ( v11 )
        v10 = *(_QWORD *)(v11 + 24);
    }
    v12 = *((_QWORD *)a1 + 3);
    v13 = 0LL;
    if ( v12 )
    {
      a2 = *(struct tagWND **)(v12 + 8);
      if ( a2 )
        v13 = *((_QWORD *)a2 + 3);
    }
    if ( v10 != v13 )
    {
      if ( a3 == (__int64 *)GetDesktopWindow(a1, a2) )
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3093LL);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3094LL);
  v14 = *((_QWORD *)a1 + 5);
  if ( *(__int16 *)(v14 + 42) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3095LL);
    v14 = *((_QWORD *)a1 + 5);
  }
  v15 = a3[3];
  v16 = 0LL;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v15 + 8);
    if ( v17 )
      v16 = *(__int64 **)(v17 + 24);
  }
  if ( a3 == v16 )
  {
    v18 = *(_DWORD *)(v14 + 236);
    v19 = 1;
    v20 = &gazbidOrder;
    while ( *v20 != v18 )
    {
      if ( v20[1] == v18 )
      {
        ++v8;
        break;
      }
      if ( v20[2] == v18 )
      {
        v8 += 2;
        break;
      }
      if ( v20[3] == v18 )
      {
        v8 += 3;
        break;
      }
      if ( v20[4] == v18 )
      {
        v8 += 4;
        break;
      }
      if ( v20[5] == v18 )
      {
        v8 += 5;
        break;
      }
      v20 += 6;
      v8 += 6;
      if ( v8 >= 0x12 )
        break;
    }
  }
  else
  {
    v19 = 0;
  }
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (struct tagWND *)1 )
    {
      LastTopMostWindow = *v4;
      if ( *v4 && (*(_BYTE *)(*((_QWORD *)LastTopMostWindow + 5) + 20LL) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v21 = *((_QWORD *)LastTopMostWindow + 11);
          if ( !v21 )
            break;
          if ( v19 )
          {
            v22 = 0;
            v23 = *(_DWORD *)(*(_QWORD *)(v21 + 40) + 236LL);
            v24 = &gazbidOrder;
            while ( *v24 != v23 )
            {
              if ( v24[1] == v23 )
              {
                ++v22;
                break;
              }
              if ( v24[2] == v23 )
              {
                v22 += 2;
                break;
              }
              if ( v24[3] == v23 )
              {
                v22 += 3;
                break;
              }
              if ( v24[4] == v23 )
              {
                v22 += 4;
                break;
              }
              if ( v24[5] == v23 )
              {
                v22 += 5;
                break;
              }
              v24 += 6;
              v22 += 6;
              if ( v22 >= 0x12 )
                break;
            }
            if ( v22 < v8 )
              goto LABEL_62;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 20LL) & 0x20) != 0 )
            break;
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        }
        if ( !v19 )
          goto LABEL_118;
LABEL_62:
        if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) >= v8 )
          goto LABEL_118;
      }
    }
    else
    {
      if ( !v19 )
      {
LABEL_118:
        if ( *(char *)(*((_QWORD *)LastTopMostWindow + 5) + 19LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3293LL);
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3294LL);
        v37 = *((_QWORD *)LastTopMostWindow + 11);
        v38 = (struct tagWND **)((char *)LastTopMostWindow + 88);
        if ( v37 )
        {
          v39 = *(_QWORD *)(v37 + 40);
          v40 = *((_QWORD *)a1 + 6);
          v102[0] = v37 + 96;
          v102[1] = a1;
          *(_QWORD *)(v39 + 80) = v40;
          HMAssignmentLock(v102, 0LL);
          v41 = *v38;
          if ( *v38 )
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v41 + 6);
          else
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
          v96 = (struct tagWND **)((char *)a1 + 88);
          v97 = v41;
          HMAssignmentLock(&v96, 0LL);
        }
        v42 = *((_QWORD *)a1 + 5);
        v43 = *((_QWORD *)LastTopMostWindow + 6);
        v98 = (char *)a1 + 96;
        v99 = LastTopMostWindow;
        *(_QWORD *)(v42 + 80) = v43;
        HMAssignmentLock(&v98, 0LL);
        v44 = *((_QWORD *)LastTopMostWindow + 5);
        v45 = *((_QWORD *)a1 + 6);
        v100 = (_QWORD *)((char *)LastTopMostWindow + 88);
        v101 = a1;
        *(_QWORD *)(v44 + 72) = v45;
        v46 = (struct tagWND ***)&v100;
        goto LABEL_134;
      }
      v30 = 0;
      v31 = *(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL);
      v32 = &gazbidOrder;
      while ( *v32 != v31 )
      {
        if ( v32[1] == v31 )
        {
          ++v30;
          break;
        }
        if ( v32[2] == v31 )
        {
          v30 += 2;
          break;
        }
        if ( v32[3] == v31 )
        {
          v30 += 3;
          break;
        }
        if ( v32[4] == v31 )
        {
          v30 += 4;
          break;
        }
        if ( v32[5] == v31 )
        {
          v30 += 5;
          break;
        }
        v32 += 6;
        v30 += 6;
        if ( v30 >= 0x12 )
          break;
      }
      if ( v8 <= v30 )
      {
        while ( 1 )
        {
          v33 = *((_QWORD *)LastTopMostWindow + 11);
          if ( !v33 )
            goto LABEL_118;
          v34 = 0;
          v35 = *(_DWORD *)(*(_QWORD *)(v33 + 40) + 236LL);
          v36 = &gazbidOrder;
          while ( *v36 != v35 )
          {
            if ( v36[1] == v35 )
            {
              ++v34;
              break;
            }
            if ( v36[2] == v35 )
            {
              v34 += 2;
              break;
            }
            if ( v36[3] == v35 )
            {
              v34 += 3;
              break;
            }
            if ( v36[4] == v35 )
            {
              v34 += 4;
              break;
            }
            if ( v36[5] == v35 )
            {
              v34 += 5;
              break;
            }
            v36 += 6;
            v34 += 6;
            if ( v34 >= 0x12 )
              break;
          }
          if ( v34 <= v8 )
            goto LABEL_118;
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        }
      }
      while ( 1 )
      {
        LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 12);
        if ( !LastTopMostWindow )
          break;
        if ( v8 <= (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
          goto LABEL_118;
      }
    }
  }
  v25 = *v4;
  if ( *v4 )
  {
    if ( v19 )
    {
      if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)v25 + 5) + 236LL)) > v8 )
      {
        do
        {
          LastTopMostWindow = v25;
          v25 = (struct tagWND *)*((_QWORD *)v25 + 11);
          if ( !v25 )
            break;
          v27 = 0;
          v28 = *(_DWORD *)(*((_QWORD *)v25 + 5) + 236LL);
          v29 = v26;
          while ( *v29 != v28 )
          {
            if ( v29[1] == v28 )
            {
              ++v27;
              break;
            }
            if ( v29[2] == v28 )
            {
              v27 += 2;
              break;
            }
            if ( v29[3] == v28 )
            {
              v27 += 3;
              break;
            }
            if ( v29[4] == v28 )
            {
              v27 += 4;
              break;
            }
            if ( v29[5] == v28 )
            {
              v27 += 5;
              break;
            }
            v29 += 6;
            v27 += 6;
            if ( v27 >= 0x12 )
              break;
          }
        }
        while ( v27 > v8 );
        goto LABEL_118;
      }
      LastTopMostWindow = 0LL;
    }
    v47 = *((_QWORD *)v25 + 5);
    v48 = *((_QWORD *)a1 + 6);
    v100 = (_QWORD *)((char *)v25 + 96);
    v101 = a1;
    *(_QWORD *)(v47 + 80) = v48;
    HMAssignmentLock(&v100, 0LL);
    v49 = *v4;
    if ( *v4 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v49 + 6);
    else
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    v98 = (char *)a1 + 88;
    v99 = v49;
    HMAssignmentLock(&v98, 0LL);
  }
  v50 = (__int64)*(v4 - 9);
  v51 = *((_QWORD *)a1 + 6);
  v96 = v4;
  v97 = a1;
  *(_QWORD *)(v50 + 56) = v51;
  v46 = &v96;
LABEL_134:
  HMAssignmentLock(v46, 0LL);
  *((_DWORD *)a1 + 80) |= 0x1000000u;
  v52 = 0;
  v53 = *v4;
  while ( v53 )
  {
    v54 = v53 == a1;
    v53 = (struct tagWND *)*((_QWORD *)v53 + 11);
    if ( v54 )
      v52 = 1;
  }
  v55 = *((_DWORD *)a1 + 80) | 0x2000000;
  if ( !v52 )
    v55 = *((_DWORD *)a1 + 80) & 0xFDFFFFFF;
  *((_DWORD *)a1 + 80) = v55;
  if ( (v55 & 0x2000000) != 0 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v56 = *((_QWORD *)a1 + 3);
    v57 = 0LL;
    if ( v56 )
    {
      v58 = *(_QWORD *)(v56 + 8);
      if ( v58 )
        v57 = *(struct tagWND **)(v58 + 24);
    }
    if ( a1 != v57 )
    {
      v59 = 0LL;
      if ( v56 )
        v59 = *(struct tagWND **)(v56 + 104);
      if ( a1 != v59 && a3 != (__int64 *)gTermIO[1] )
      {
        v60 = gptiCurrent;
        v61 = *(_QWORD *)(gptiCurrent + 456LL);
        if ( v61 )
        {
          v62 = *(__int64 **)(v61 + 8);
          v60 = *v62;
          if ( (*(_DWORD *)(*v62 + 64) & 1) != 0 && (*((_DWORD *)a1 + 80) & 0x2000000) != 0 )
          {
            v63 = (struct tagWND *)*((_QWORD *)a1 + 13);
            v57 = v63;
            if ( v63 )
            {
              while ( 1 )
              {
                v60 = *((_QWORD *)v57 + 5);
                v64 = *(_BYTE *)(v60 + 31);
                if ( (v64 & 0x10) == 0 || (v64 & 0x20) != 0 && v57 != v63 )
                  break;
                if ( (*(_WORD *)(v60 + 42) & 0x2FFF) != 0x29D )
                {
                  v57 = (struct tagWND *)*((_QWORD *)v57 + 13);
                  if ( v57 )
                    continue;
                }
                goto LABEL_159;
              }
            }
            else
            {
LABEL_159:
              EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, *(_QWORD *)v63);
              v68 = *((_QWORD *)a1 + 13);
              if ( v68
                && (v69 = *((_QWORD *)a1 + 3)) != 0
                && (v70 = *(_QWORD *)(v69 + 8)) != 0
                && v68 == *(_QWORD *)(v70 + 24) )
              {
                v3 = 1;
              }
              else if ( a1 != (struct tagWND *)GetDesktopWindow(a1, v65)
                     && (*(_BYTE *)(*((_QWORD *)v63 + 5) + 31LL) & 2) != 0 )
              {
                Prop = (CVisRgnTrackerProp *)GetProp(v63, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
                if ( Prop )
                  CVisRgnTrackerProp::MarkDirty(Prop);
              }
              v72 = (__int128 *)*((_QWORD *)a1 + 18);
              BufferChainingDpc_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
              *(_QWORD *)v105 = gDomainDummyLock;
              v105[8] = 0;
              memset(&v105[16], 0, 17);
              v74 = *((_QWORD *)v72 + 2);
              v103 = *v72;
              LOBYTE(v107) = 0;
              v104 = v74;
              v75 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v68, v65, v66, v67);
              if ( ExIsResourceAcquiredExclusiveLite(*v75) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
              {
                LOBYTE(v107) = 1;
                if ( v72 == (__int128 *)gObjDummyLock )
                  v72 = 0LL;
                *(_QWORD *)&v105[16] = v72;
                if ( !v105[32] )
                {
                  v76 = 0;
                  v77 = (tagObjLock **)&v105[16];
                  do
                  {
                    if ( *v77 )
                      tagObjLock::LockExclusive(*v77);
                    ++v76;
                    ++v77;
                  }
                  while ( !v76 );
                  v105[32] = 1;
                }
              }
              v78 = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), BufferChainingDpc_low, 1LL);
              if ( (_BYTE)v107 && v105[32] )
              {
                v60 = *(_QWORD *)&v105[16];
                if ( *(_QWORD *)&v105[16] )
                  tagObjLock::UnLockExclusive(*(tagObjLock **)&v105[16]);
                v105[32] = 0;
              }
              if ( v78 )
                CVisRgnTrackerProp::MarkDirty(v78);
              for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
                MarkDirtyWorker(i);
              if ( !v3 )
              {
                for ( j = (struct tagWND *)*((_QWORD *)a1 + 11); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
                {
                  v60 = *(unsigned __int8 *)(*((_QWORD *)j + 5) + 31LL);
                  LOBYTE(v60) = v60 & 0x14;
                  if ( (_BYTE)v60 == 20 )
                    MarkDirtyWorker(j);
                }
              }
            }
          }
        }
        v81 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
        if ( (unsigned __int64)LastTopMostWindow - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
          LastTopMostWindow = *(struct tagWND **)LastTopMostWindow;
        v82 = *a3;
        v83 = *(_QWORD *)a1;
        v84 = (void *)ReferenceDwmApiPort(v60, v57);
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v85) + 32) + 13248LL));
        if ( v84 )
        {
          *(_DWORD *)v105 = 4718624;
          memset(&v105[6], 0, 32);
          v106 = 0;
          *(_WORD *)&v105[4] = 0x8000;
          v107 = 1073741842;
          v108 = v83;
          v109 = v82;
          v110 = LastTopMostWindow;
          v111 = v81;
          LpcRequestPort(v84, v105);
          ObfDereferenceObject(v84);
        }
        for ( k = *((_QWORD *)a1 + 11); k; k = *(_QWORD *)(k + 88) )
        {
          v87 = *(_DWORD *)(k + 320);
          if ( (v87 & 0x2000000) == 0 )
          {
            *(_DWORD *)(k + 320) = v87 | 0x2000000;
            DirtyVisRgnTrackers(k);
            v88 = *(_DWORD *)(*(_QWORD *)(k + 40) + 236LL);
            v89 = HWInsertAfter(*(_QWORD *)(k + 96));
            v90 = *a3;
            v91 = v89;
            v92 = *(_QWORD *)k;
            v95 = (void *)ReferenceDwmApiPort(v94, v93);
            DwmAsyncChildLink(v95, v92, v90, v91, v88);
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
}
