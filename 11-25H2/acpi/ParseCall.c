/*
 * XREFs of ParseCall @ 0x140004010
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     FreeOwnedObjects @ 0x140005570 (FreeOwnedObjects.c)
 *     FreeObjOwner @ 0x140005670 (FreeObjOwner.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PerformNativeMethodCall @ 0x14002FD2C (PerformNativeMethodCall.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ParseCall(_QWORD *a1, __int64 a2, unsigned int a3)
{
  int *v3; // rsi
  unsigned int v4; // edi
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // ecx
  _BYTE *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // eax
  bool v19; // zf
  _QWORD *v20; // rsi
  __int64 v21; // rdi
  _QWORD *v22; // r13
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *i; // r8
  __int64 v27; // rdi
  int v28; // eax
  struct _EX_RUNDOWN_REF *v29; // rsi
  struct _EX_RUNDOWN_REF **v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdi
  _QWORD *v38; // r13
  _QWORD *v39; // r12
  KIRQL v40; // al
  __int64 v41; // rsi
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r8
  _QWORD *v55; // rcx
  unsigned int v56; // eax
  char *v57; // r8
  _QWORD *v58; // r9
  _QWORD *v59; // rax
  _QWORD *v60; // r10
  _QWORD *v61; // rcx
  _QWORD *v62; // r10
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // r10
  _QWORD *v66; // r8
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // r11
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  unsigned int v78; // eax
  __int128 v79; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v80[24]; // [rsp+50h] [rbp-49h]
  __int128 v81; // [rsp+68h] [rbp-31h]
  __int128 v82; // [rsp+78h] [rbp-21h] BYREF
  __int128 v83; // [rsp+88h] [rbp-11h]
  __int64 v84; // [rsp+98h] [rbp-1h]
  __int128 v85; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v86; // [rsp+B0h] [rbp+17h]
  __int64 v87; // [rsp+C0h] [rbp+27h]
  _QWORD *v88; // [rsp+108h] [rbp+6Fh] BYREF

  v3 = (int *)(a2 + 16);
  v4 = a3;
  if ( a3 )
    v7 = 5;
  else
    v7 = *v3 & 0xF;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 96);
  else
    v9 = 0LL;
  v10 = 0x140000000uLL;
  switch ( v7 )
  {
    case 0:
      ++*v3;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("(");
      goto LABEL_58;
    case 1:
      goto LABEL_58;
    case 2:
      goto LABEL_27;
    case 3:
      goto LABEL_29;
    case 4:
      goto LABEL_90;
    case 5:
      goto LABEL_6;
    case 6:
      goto LABEL_19;
    default:
      return v4;
  }
  do
  {
LABEL_58:
    while ( 1 )
    {
      v33 = *(_DWORD *)(a2 + 56);
      if ( v33 >= *(_DWORD *)(a2 + 60) )
        break;
      if ( (gDebugger & 0xD0) != 0 && v33 )
        ConPrintf(",");
      v34 = *(unsigned int *)(a2 + 56);
      v35 = *(_QWORD *)(a2 + 64) + 40 * v34;
      v36 = v34 + 1;
      LOBYTE(v34) = 67;
      *(_DWORD *)(a2 + 56) = v36;
      v4 = ParseArg(a1, v34, v35, 0LL);
      if ( v4 || a2 != a1[52] )
        return v4;
    }
    if ( v4 || a2 != a1[52] )
      return v4;
  }
  while ( v33 < *(_DWORD *)(a2 + 60) );
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf(")");
  ++*(_DWORD *)(a2 + 16);
  v3 = (int *)(a2 + 16);
LABEL_27:
  ++*v3;
  if ( !v9 )
  {
    v4 = -1072431101;
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(a1, 3222536195LL);
    PrintDebugMessage(123, 0, 0, 0, 0LL);
    return v4;
  }
  if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
  {
    v37 = 0LL;
    v38 = 0LL;
    v39 = a1 + 60;
    v40 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v41 = (__int64)(a1 + 60);
    v88 = a1 + 60;
    byte_140088F48 = v40;
    v42 = a1 + 60;
    v43 = a1 + 60;
    v44 = (__int64)(a1 + 60);
    while ( v43 )
    {
      v45 = *(_QWORD *)(v44 + 40);
      v38 = v42;
      while ( 1 )
      {
        v37 = v45 - 16;
        if ( v44 + 40 == v37 + 16 )
        {
          v37 = 0LL;
          goto LABEL_68;
        }
        if ( *(_DWORD *)(v37 + 4) >= 0x50u )
          break;
        v45 = *(_QWORD *)(v37 + 16);
      }
      if ( v37 )
      {
        v76 = *(_QWORD *)(v37 + 16);
        if ( *(_QWORD *)(v76 + 8) != v37 + 16 )
          goto LABEL_93;
        v77 = *(_QWORD **)(v37 + 24);
        if ( *v77 != v37 + 16 )
          goto LABEL_93;
        *v77 = v76;
        *(_QWORD *)(v76 + 8) = v77;
        v78 = *(_DWORD *)(v37 + 4);
        if ( v78 >= 0x70 )
        {
          *(_DWORD *)(v37 + 80) = 0;
          *(_DWORD *)(v37 + 84) = v78 - 80;
          *(_QWORD *)(v37 + 88) = v41;
          *(_DWORD *)(v37 + 4) = 80;
          HeapInsertFreeList(v41, (unsigned int *)(v37 + 80));
        }
        goto LABEL_82;
      }
LABEL_68:
      if ( (unsigned int)(*(_DWORD *)(v41 + 8) - *(_DWORD *)(v41 + 32)) >= 0x50 )
        goto LABEL_81;
      v41 = *(_QWORD *)(v41 + 24);
      v43 = (_QWORD *)v41;
      v88 = (_QWORD *)v41;
      v42 = (_QWORD *)v41;
      v44 = v41;
    }
    if ( v39 == (_QWORD *)gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
      {
        v44 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 80;
      }
      v49 = NewGlobalHeap(&v88, v44);
    }
    else
    {
      v49 = NewLocalHeap(&v88, v44);
    }
    if ( !v49 )
    {
      v41 = (__int64)v88;
      v88[2] = v39;
      v38[3] = v41;
LABEL_81:
      v37 = *(_QWORD *)(v41 + 32);
      *(_QWORD *)(v41 + 32) = v37 + 80;
      *(_DWORD *)(v37 + 4) = 80;
LABEL_82:
      *(_DWORD *)v37 = 1297237576;
      *(_QWORD *)(v37 + 8) = v41;
      memset((void *)(v37 + 16), 0, 0x40uLL);
    }
    KeReleaseSpinLock(&gmutHeap, byte_140088F48);
    v50 = v37 + 16;
    if ( !v37 )
      v50 = 0LL;
    if ( v50 )
    {
      v4 = 0;
      *(_QWORD *)(v50 + 8) = a1[52];
      a1[52] = v50;
      *(_QWORD *)(v50 + 24) = ParseAcquire;
      *(_DWORD *)v50 = 1179730753;
      *(_QWORD *)(v50 + 32) = v9;
      *(_WORD *)(v50 + 40) = -1;
      *(_QWORD *)(v50 + 48) = *(_QWORD *)(a2 + 392);
    }
    else
    {
      v4 = -1072431102;
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
    }
  }
  else
  {
LABEL_29:
    v18 = *v3 + 1;
    v19 = *(_DWORD *)a2 == 1280065859;
    *v3 = v18;
    if ( v19 && (v18 & 0x80000) != 0 )
    {
      *(_QWORD *)(a2 + 32) = a1[12];
      a1[12] = a2;
      *v3 |= 0x40000u;
      v4 = PerformNativeMethodCall(0LL, a1, a2);
      if ( v4 == 32772 )
        return v4;
LABEL_90:
      v3 = (int *)(a2 + 16);
      v51 = *(_DWORD *)(a2 + 16) + 1;
      v19 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v51;
      if ( v19 && (v51 & 0x80000) != 0 )
        v4 = PerformNativeMethodCall(1LL, a1, a2);
LABEL_6:
      v11 = 0;
      v12 = *v3 + 1;
      *v3 = v12;
      if ( v4 != 32770 )
        v11 = v4;
      v4 = v11;
      if ( *(_DWORD *)a2 == 1280065859 && (v12 & 0x80000) != 0 )
      {
        if ( (v12 & 0x40000) != 0 )
        {
          v46 = *(_QWORD *)(a2 + 392);
          v47 = a1[40];
          v82 = 0LL;
          v84 = 0LL;
          v83 = 0LL;
          v4 = DupObjData(v47, &v82, v46);
          if ( (v4 & 0x80000000) != 0 )
            return v4;
          if ( ghNativeMethodEvalObject )
          {
            *(_QWORD *)&v79 = 2LL;
            *((_QWORD *)&v79 + 1) = a2 + 72;
            *(_QWORD *)v80 = *(_QWORD *)(a2 + 392);
            *(_OWORD *)&v80[8] = 0LL;
            v81 = 0LL;
            ghNativeMethodEvalObject(&v79);
          }
          v48 = *(_QWORD *)(a2 + 392);
          if ( (__int128 *)v48 != &v82 )
          {
            *(_OWORD *)v48 = v82;
            *(_OWORD *)(v48 + 16) = v83;
            *(_QWORD *)(v48 + 32) = v84;
          }
          goto LABEL_12;
        }
LABEL_13:
        v14 = *(_QWORD *)(a2 + 48);
        if ( v14 )
        {
          DereferenceObjectEx(v14, v10);
          *(_QWORD *)(a2 + 48) = 0LL;
        }
        v15 = *(_QWORD *)(a2 + 64);
        if ( v15 )
        {
          FreeDataBuffs(v15, *(unsigned int *)(a2 + 60));
          HeapFree(*(_QWORD *)(a2 + 64));
        }
        if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
        {
          v79 = 0x464C4552uLL;
          *(_QWORD *)&v80[4] = 0LL;
          v81 = 0LL;
          *(_DWORD *)&v80[12] = 0;
          *(_QWORD *)&v80[16] = v9;
          *(_DWORD *)v80 = 393216;
          ParseRelease(a1, &v79, 0LL);
        }
LABEL_19:
        v16 = a1[52];
        a1[52] = *(_QWORD *)(v16 + 8);
        HeapFree(v16);
        return v4;
      }
      v13 = *(_BYTE **)(a2 + 392);
      if ( (*v13 & 1) != 0 )
      {
        v52 = a1[40];
        v85 = 0LL;
        v87 = 0LL;
        v86 = 0LL;
        v4 = DupObjData(v52, &v85, v13);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
        FreeDataBuffs(*(_QWORD *)(a2 + 392), 1LL);
        v53 = *(_QWORD *)(a2 + 392);
        if ( (__int128 *)v53 != &v85 )
        {
          *(_OWORD *)v53 = v85;
          *(_OWORD *)(v53 + 16) = v86;
          *(_QWORD *)(v53 + 32) = v87;
        }
      }
      FreeDataBuffs(a2 + 72, 8LL);
      if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
      {
        FreeOwnedObjects(a1[11]);
        FreeObjOwner(0LL, a1[11]);
      }
      else if ( *(_QWORD *)(a2 + 48) )
      {
        goto LABEL_13;
      }
LABEL_12:
      a1[11] = *(_QWORD *)(a2 + 40);
      a1[12] = *(_QWORD *)(a2 + 32);
      goto LABEL_13;
    }
    if ( (v18 & 0x10000) != 0 )
      *v3 = v18 | 0x20000;
    v20 = (_QWORD *)a1[40];
    v21 = 0LL;
    v22 = 0LL;
    byte_140088F48 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v23 = (unsigned __int64)v20;
    v24 = v20;
    v25 = v20;
    for ( i = v20; ; i = (_QWORD *)v23 )
    {
      v88 = (_QWORD *)v23;
      if ( !v24 )
        break;
      v27 = i[5];
      v22 = v25;
      while ( 1 )
      {
        v21 = v27 - 16;
        if ( i + 5 == (_QWORD *)(v21 + 16) )
        {
          v21 = 0LL;
          goto LABEL_37;
        }
        if ( *(_DWORD *)(v21 + 4) >= 0x50u )
          break;
        v27 = *(_QWORD *)(v21 + 16);
      }
      if ( v21 )
      {
        v54 = *(_QWORD *)(v21 + 16);
        if ( *(_QWORD *)(v54 + 8) != v21 + 16 )
          goto LABEL_93;
        v55 = *(_QWORD **)(v21 + 24);
        if ( *v55 != v21 + 16 )
          goto LABEL_93;
        *v55 = v54;
        *(_QWORD *)(v54 + 8) = v55;
        v56 = *(_DWORD *)(v21 + 4);
        if ( v56 >= 0x70 )
        {
          v57 = (char *)(v21 + 80);
          *(_DWORD *)(v21 + 80) = 0;
          v58 = (_QWORD *)(v23 + 40);
          *(_DWORD *)(v21 + 84) = v56 - 80;
          *(_QWORD *)(v21 + 88) = v23;
          *(_DWORD *)(v21 + 4) = 80;
          v59 = *(_QWORD **)(v23 + 40);
          if ( v59 != (_QWORD *)(v23 + 40) )
          {
            do
            {
              if ( v21 + 96 < (unsigned __int64)v59 )
                break;
              v59 = (_QWORD *)*v59;
            }
            while ( v59 != v58 );
          }
          v60 = (_QWORD *)v59[1];
          v61 = (_QWORD *)(v21 + 96);
          if ( (_QWORD *)*v60 != v59 )
            goto LABEL_93;
          *v61 = v59;
          *(_QWORD *)(v21 + 104) = v60;
          *v60 = v61;
          v59[1] = v61;
          v62 = (_QWORD *)*v61;
          v63 = *v61 - 16LL;
          if ( v62 != v58 )
          {
            v69 = *(unsigned int *)(v21 + 84);
            if ( (char *)v63 == &v57[v69] )
            {
              *(_DWORD *)(v21 + 84) = v69 + *(_DWORD *)(v63 + 4);
              v70 = *v62;
              if ( *(_QWORD **)(*v62 + 8LL) == v62 )
              {
                v71 = (_QWORD *)v62[1];
                if ( (_QWORD *)*v71 == v62 )
                {
                  *v71 = v70;
                  *(_QWORD *)(v70 + 8) = v71;
                  goto LABEL_108;
                }
              }
LABEL_93:
              __fastfail(3u);
            }
          }
LABEL_108:
          v64 = *(_QWORD **)(v21 + 104);
          v65 = v64 - 2;
          if ( v64 != v58 )
          {
            v72 = *((unsigned int *)v65 + 1);
            if ( v57 == (char *)v65 + v72 )
            {
              v73 = v21 + 96;
              *((_DWORD *)v65 + 1) = *(_DWORD *)(v21 + 84) + v72;
              v74 = *(_QWORD *)(v21 + 96);
              if ( *(_QWORD *)(*(_QWORD *)v73 + 8LL) != v73 )
                goto LABEL_93;
              v75 = *(_QWORD **)(v21 + 104);
              if ( *v75 != v73 )
                goto LABEL_93;
              *v75 = v74;
              v57 = (char *)v65;
              *(_QWORD *)(v74 + 8) = v75;
            }
          }
          if ( *(_QWORD *)(v23 + 32) <= (unsigned __int64)&v57[*((unsigned int *)v57 + 1)] )
          {
            *(_QWORD *)(v23 + 32) = v57;
            v66 = v57 + 16;
            v67 = *v66;
            if ( *(_QWORD **)(*v66 + 8LL) != v66 )
              goto LABEL_93;
            v68 = (_QWORD *)v66[1];
            if ( (_QWORD *)*v68 != v66 )
              goto LABEL_93;
            *v68 = v67;
            *(_QWORD *)(v67 + 8) = v68;
          }
        }
        goto LABEL_44;
      }
LABEL_37:
      if ( (unsigned int)(*(_DWORD *)(v23 + 8) - *(_DWORD *)(v23 + 32)) >= 0x50 )
        goto LABEL_43;
      v23 = *(_QWORD *)(v23 + 24);
      v24 = (_QWORD *)v23;
      v25 = (_QWORD *)v23;
    }
    if ( v20 == (_QWORD *)gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
      {
        v23 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 80;
      }
      v28 = NewGlobalHeap(&v88, v23);
    }
    else
    {
      v28 = NewLocalHeap(&v88, v23);
    }
    if ( !v28 )
    {
      v23 = (unsigned __int64)v88;
      v88[2] = v20;
      v22[3] = v23;
LABEL_43:
      v21 = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v23 + 32) = v21 + 80;
      *(_DWORD *)(v21 + 4) = 80;
LABEL_44:
      *(_QWORD *)(v21 + 8) = v23;
      *(_DWORD *)v21 = 1314344776;
      memset((void *)(v21 + 16), 0, 0x40uLL);
    }
    KeReleaseSpinLock(&gmutHeap, byte_140088F48);
    v29 = (struct _EX_RUNDOWN_REF *)(v21 + 16);
    if ( !v21 )
      v29 = 0LL;
    if ( !v29 )
    {
      v4 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(113, 0, 0, 0, 0LL);
      goto LABEL_90;
    }
    memset(v29, 0, 0x40uLL);
    LODWORD(v29[2].Count) = 1380865871;
    ExInitializeRundownProtection(v29 + 4);
    KeInitializeSpinLock(&v29[5].Count);
    byte_140088F38 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v30 = (struct _EX_RUNDOWN_REF **)off_1400870B8;
    if ( *off_1400870B8 != (_UNKNOWN *)&glistObjOwners )
      goto LABEL_93;
    v29->Count = (unsigned __int64)&glistObjOwners;
    v29[1].Count = (unsigned __int64)v30;
    *v30 = v29;
    off_1400870B8 = (_UNKNOWN **)v29;
    KeReleaseSpinLock(&gmutOwnerList, byte_140088F38);
    *(_QWORD *)(a2 + 40) = a1[11];
    v31 = a1[12];
    a1[11] = v29;
    *(_QWORD *)(a2 + 32) = v31;
    a1[12] = a2;
    v32 = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 16) |= 0x40000u;
    return (unsigned int)PushScope(
                           (_DWORD)a1,
                           (int)v9 + 194,
                           *(_DWORD *)(v32 + 96) + *(_DWORD *)(v32 + 88),
                           a1[15],
                           v32,
                           (__int64)v29,
                           a1[40],
                           *(_QWORD *)(a2 + 392));
  }
  return v4;
}
