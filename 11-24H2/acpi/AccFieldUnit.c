/*
 * XREFs of AccFieldUnit @ 0x140003430
 * Callers:
 *     <none>
 * Callees:
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     AcquireGL @ 0x1400057E4 (AcquireGL.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     SupportsOnlyRawAccess @ 0x140011EA8 (SupportsOnlyRawAccess.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _DWORD *v4; // r14
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int16 v11; // ax
  bool v12; // zf
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // r12
  __int64 v17; // rbp
  bool v18; // cf
  int v19; // eax
  __int64 v20; // rsi
  BOOL v21; // ecx
  int v22; // ebx
  int v23; // ecx
  __int64 v24; // rbp
  __int64 v25; // r14
  unsigned int v26; // ecx
  int v27; // r13d
  int ObjectTypeName; // edx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rdi
  _DWORD *v37; // r12
  unsigned int v38; // ecx
  int v39; // r13d
  unsigned int v40; // r13d
  KIRQL v41; // al
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // r9
  int v50; // ecx
  int v51; // eax
  __int64 v52; // r8
  void *v53; // rax
  unsigned int v54; // r14d
  int v55; // ecx
  int v56; // esi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  unsigned int v60; // r13d
  KIRQL v61; // al
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r14
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // ecx
  int v71; // eax
  unsigned int v72; // ecx
  __int64 v73; // rax
  int v74; // ecx
  int v75; // ecx
  int v76; // ebx
  int v77; // ecx
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  __int64 v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rdx
  _QWORD *v83; // rcx
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // [rsp+30h] [rbp-58h]
  __int64 v88; // [rsp+38h] [rbp-50h]
  __int64 v89; // [rsp+40h] [rbp-48h]
  __int64 v90; // [rsp+40h] [rbp-48h]
  __int64 v91; // [rsp+48h] [rbp-40h]
  __int64 v92; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v93; // [rsp+A0h] [rbp+18h]
  __int64 v94; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (_DWORD *)(a2 + 16);
  v5 = a3;
  if ( a3 )
    goto LABEL_34;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  v9 = *v4 & 0xF;
  if ( (*v4 & 0xF) == 0 )
  {
    ++*v4;
    if ( *(_WORD *)(*(_QWORD *)v8 + 66LL) != 130 )
      goto LABEL_4;
    v32 = *(_QWORD *)(*(_QWORD *)v8 + 96LL);
    v33 = a1 + 480;
    v34 = 0LL;
    v35 = a1 + 480;
    v5 = 0;
    v94 = 0LL;
    v36 = 0LL;
    v90 = v32 + 16;
    v91 = *(_QWORD *)(v32 + 8) + 64LL;
    v37 = *(_DWORD **)(*(_QWORD *)(v32 + 8) + 96LL);
    if ( v37[7] )
    {
      v38 = v37[9] + 144;
      if ( v38 < v37[9] + 128 )
        goto LABEL_67;
    }
    else
    {
      v38 = 144;
    }
    if ( v38 < 0x20 )
    {
      v39 = 39;
    }
    else
    {
      v39 = v38 + 7;
      if ( v38 + 7 < v38 )
        goto LABEL_67;
    }
    v40 = v39 & 0xFFFFFFF8;
    v41 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v42 = a1 + 480;
    byte_140088EC8 = v41;
    v43 = a1 + 480;
    v44 = a1 + 480;
    while ( 1 )
    {
      v92 = v33;
      if ( !v43 )
        break;
      v45 = *(_QWORD *)(v35 + 40);
      v94 = v44;
      while ( 1 )
      {
        v36 = v45 - 16;
        if ( v35 + 40 == v36 + 16 )
        {
          v36 = 0LL;
          goto LABEL_49;
        }
        if ( v40 <= *(_DWORD *)(v36 + 4) )
          break;
        v45 = *(_QWORD *)(v36 + 16);
      }
      if ( v36 )
      {
        v78 = *(_QWORD *)(v36 + 16);
        if ( *(_QWORD *)(v78 + 8) != v36 + 16 )
          goto LABEL_128;
        v79 = *(_QWORD **)(v36 + 24);
        if ( *v79 != v36 + 16 )
          goto LABEL_128;
        *v79 = v78;
        *(_QWORD *)(v78 + 8) = v79;
        v48 = v40;
        if ( *(unsigned int *)(v36 + 4) >= (unsigned __int64)v40 + 32 )
        {
          v80 = v36 + v40;
          *(_DWORD *)v80 = 0;
          v81 = *(_DWORD *)(v36 + 4) - v40;
          *(_QWORD *)(v80 + 8) = v33;
          *(_DWORD *)(v80 + 4) = v81;
          *(_DWORD *)(v36 + 4) = v40;
          HeapInsertFreeList(v33, (unsigned int *)v80);
        }
        goto LABEL_56;
      }
LABEL_49:
      if ( v40 <= *(_DWORD *)(v33 + 8) - *(_DWORD *)(v33 + 32) )
        goto LABEL_55;
      v33 = *(_QWORD *)(v33 + 24);
      v43 = v33;
      v44 = v33;
      v35 = v33;
    }
    if ( v42 == gpheapGlobal )
    {
      if ( v40 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v42 = v40 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v40 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v40 > 0x800000 )
            goto LABEL_57;
          LODWORD(gdwGlobalHeapBlkSize) = v40;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v40 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v46 = NewGlobalHeap(&v92, v42);
    }
    else
    {
      v46 = NewLocalHeap(&v92, v42);
    }
    if ( !v46 )
    {
      v33 = v92;
      v47 = v94;
      *(_QWORD *)(v92 + 16) = a1 + 480;
      *(_QWORD *)(v47 + 24) = v33;
LABEL_55:
      v36 = *(_QWORD *)(v33 + 32);
      v48 = v40;
      *(_QWORD *)(v33 + 32) = v36 + v40;
      *(_DWORD *)(v36 + 4) = v40;
LABEL_56:
      *(_DWORD *)v36 = 1297237576;
      *(_QWORD *)(v36 + 8) = v33;
      memset((void *)(v36 + 16), 0, v48 - 16);
    }
LABEL_57:
    KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
    v49 = v36 + 16;
    if ( !v36 )
      v49 = 0LL;
    if ( v49 )
    {
      *(_QWORD *)(v49 + 8) = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v49;
      *(_QWORD *)(v49 + 24) = WriteFieldObj;
      *(_DWORD *)v49 = 1330004801;
      *(_QWORD *)(v49 + 32) = v91;
      *(_QWORD *)(v49 + 40) = v90;
      *(_QWORD *)(v49 + 48) = v90 + 8;
      v50 = v37[5] & 0xF;
      v51 = 1;
      if ( (unsigned int)(v50 - 1) <= 3 )
        v51 = 1 << (v50 - 1);
      *(_DWORD *)(v49 + 56) = v51;
      *(_DWORD *)(v49 + 60) = (8 * v51 + v37[3] + v37[4] - 1) / (unsigned int)(8 * v51);
      if ( (unsigned int)(8 * v51) < 0x40 )
        v34 = 1LL << (8 * (unsigned __int8)v51);
      *(_QWORD *)(v49 + 64) = v34 - 1;
      *(_DWORD *)(v49 + 72) = 8 * v51 - v37[3];
      *(_DWORD *)(v49 + 76) = v37[3];
      memmove((void *)(v49 + 96), v37 + 2, (unsigned int)(v37[9] + 32));
      return v5;
    }
LABEL_67:
    v5 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return v5;
  }
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
  {
LABEL_4:
    ++*v4;
    v10 = (unsigned int)v8[5];
    if ( (v10 & 0x80000010) == 0 )
    {
      v9 = *(_QWORD *)v8;
      v11 = *(_WORD *)(*(_QWORD *)v8 + 66LL);
      if ( v11 == 130 )
      {
        v12 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0;
LABEL_9:
        if ( v12 )
          goto LABEL_14;
        goto LABEL_10;
      }
      if ( v11 != 132 )
        goto LABEL_14;
      a4 = *(_QWORD **)(v9 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*a4 + 96LL) + 20LL) & 0x10) == 0 )
      {
        v12 = (*(_DWORD *)(*(_QWORD *)(a4[1] + 96LL) + 20LL) & 0x10) == 0;
        goto LABEL_9;
      }
    }
LABEL_10:
    LODWORD(v10) = v10 | 0x80000000;
    v8[5] = v10;
    v5 = AcquireGL(a1, v10, v9, a4);
    if ( v5 )
      return v5;
    goto LABEL_14;
  }
  v13 = v9 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v5;
    goto LABEL_34;
  }
LABEL_14:
  v14 = *(_DWORD *)(a2 + 16) + 1;
  *(_DWORD *)(a2 + 16) = v14;
  if ( (int)v8[5] < 0 )
  {
    v14 |= 0x20000u;
    *(_DWORD *)(a2 + 16) = v14;
  }
  v15 = *(_QWORD *)(a2 + 32);
  v16 = v8 + 2;
  v17 = *(_QWORD *)(a2 + 40);
  v18 = (v14 & 0x10000) != 0;
  v19 = v8[5];
  v87 = v15;
  if ( v18 )
  {
    if ( (v19 & 0xFu) <= 4 )
    {
      v20 = 0LL;
      LODWORD(v92) = 0;
      v21 = 0;
      if ( ghGetAcpiTableVersion )
      {
        ghGetAcpiTableVersion(1413763908LL, &v92);
        v15 = v87;
        v21 = (unsigned int)v92 >= 2;
      }
      v22 = 4 * v21 + 4;
      v23 = *(unsigned __int16 *)(v17 + 2);
      v93 = v22;
      if ( v23 )
      {
        v74 = v23 - 1;
        if ( !v74 )
        {
          v93 = 8;
          v88 = v17 + 16;
          goto LABEL_24;
        }
        v75 = v74 - 1;
        if ( !v75 )
        {
          v88 = *(_QWORD *)(v17 + 32);
          v76 = *(_DWORD *)(v17 + 24) - 1;
          goto LABEL_110;
        }
        if ( v75 != 1 )
        {
          v5 = -1072431095;
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v17 + 2));
          v29 = 163;
          goto LABEL_30;
        }
        v88 = *(_QWORD *)(v17 + 32);
      }
      else
      {
        if ( (v16[3] & 0x10000) == 0 && v16[2] <= (unsigned int)(8 * v22) )
        {
          *(_WORD *)(v17 + 2) = 1;
          v88 = v17 + 16;
LABEL_24:
          if ( (unsigned __int8)SupportsOnlyRawAccess(v15) )
          {
            v5 = RawFieldAccess(a1, 0, v87, v17);
            goto LABEL_31;
          }
          v24 = a1 + 480;
          v5 = 0;
          v25 = 0LL;
          v89 = 0LL;
          if ( v16[5] )
          {
            v26 = v16[7] + 144;
            if ( v26 < v16[7] + 128 )
              goto LABEL_29;
          }
          else
          {
            v26 = 144;
          }
          if ( v26 < 0x20 )
          {
            v27 = 39;
          }
          else
          {
            v27 = v26 + 7;
            if ( v26 + 7 < v26 )
              goto LABEL_29;
          }
          v60 = v27 & 0xFFFFFFF8;
          v61 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v62 = a1 + 480;
          byte_140088EC8 = v61;
          v63 = a1 + 480;
          v64 = a1 + 480;
          while ( 1 )
          {
            v94 = v24;
            if ( !v64 )
              break;
            v65 = *(_QWORD *)(v62 + 40);
            v89 = v63;
            while ( 1 )
            {
              v25 = v65 - 16;
              if ( v62 + 40 == v25 + 16 )
              {
                v25 = 0LL;
                goto LABEL_84;
              }
              if ( v60 <= *(_DWORD *)(v25 + 4) )
                break;
              v65 = *(_QWORD *)(v25 + 16);
            }
            if ( v25 )
            {
              v82 = *(_QWORD *)(v25 + 16);
              if ( *(_QWORD *)(v82 + 8) == v25 + 16 )
              {
                v83 = *(_QWORD **)(v25 + 24);
                if ( *v83 == v25 + 16 )
                {
                  *v83 = v82;
                  *(_QWORD *)(v82 + 8) = v83;
                  v84 = *(unsigned int *)(v25 + 4);
                  v67 = v60;
                  v94 = v60;
                  if ( v84 >= (unsigned __int64)v60 + 32 )
                  {
                    v85 = v25 + v60;
                    *(_DWORD *)v85 = 0;
                    v86 = *(_DWORD *)(v25 + 4) - v60;
                    *(_QWORD *)(v85 + 8) = v24;
                    *(_DWORD *)(v85 + 4) = v86;
                    *(_DWORD *)(v25 + 4) = v60;
                    HeapInsertFreeList(v24, (unsigned int *)v85);
                    v67 = v94;
                  }
LABEL_91:
                  *(_DWORD *)v25 = 1297237576;
                  *(_QWORD *)(v25 + 8) = v24;
                  memset((void *)(v25 + 16), 0, v67 - 16);
LABEL_92:
                  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
                  v68 = v25 + 16;
                  if ( !v25 )
                    v68 = 0LL;
                  if ( v68 )
                  {
                    *(_QWORD *)(v68 + 8) = *(_QWORD *)(a1 + 416);
                    *(_QWORD *)(a1 + 416) = v68;
                    *(_QWORD *)(v68 + 24) = ReadFieldObj;
                    v69 = v93;
                    *(_DWORD *)v68 = 1330004801;
                    *(_QWORD *)(v68 + 32) = v87;
                    *(_QWORD *)(v68 + 40) = v88;
                    *(_QWORD *)(v68 + 48) = v88 + v69;
                    v70 = v16[3] & 0xF;
                    v71 = 1;
                    if ( (unsigned int)(v70 - 1) <= 3 )
                      v71 = 1 << (v70 - 1);
                    *(_DWORD *)(v68 + 56) = v71;
                    v72 = 8 * v71;
                    *(_DWORD *)(v68 + 60) = (8 * v71 + v16[1] + v16[2] - 1) / (unsigned int)(8 * v71);
                    v73 = 1LL << (8 * (unsigned __int8)v71);
                    if ( v72 < 0x40 )
                      v20 = v73;
                    *(_QWORD *)(v68 + 64) = v20 - 1;
                    *(_DWORD *)(v68 + 72) = v72 - v16[1];
                    *(_DWORD *)(v68 + 76) = v16[1];
                    memmove((void *)(v68 + 96), v16, (unsigned int)(v16[7] + 32));
                    goto LABEL_31;
                  }
LABEL_29:
                  v5 = -1072431102;
                  LogError(3222536194LL);
                  AcpiDiagTraceAmlError(a1, 3222536194LL);
                  ObjectTypeName = 0;
                  v29 = 153;
LABEL_30:
                  PrintDebugMessage(v29, ObjectTypeName, 0, 0, 0LL);
                  goto LABEL_31;
                }
              }
LABEL_128:
              __fastfail(3u);
            }
LABEL_84:
            if ( v60 <= *(_DWORD *)(v24 + 8) - *(_DWORD *)(v24 + 32) )
              goto LABEL_90;
            v24 = *(_QWORD *)(v24 + 24);
            v64 = v24;
            v63 = v24;
            v62 = v24;
          }
          if ( a1 + 480 == gpheapGlobal )
          {
            if ( v60 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
            {
              v63 = v60 % (unsigned int)gdwGlobalHeapBlkSize;
              if ( (unsigned int)gdwGlobalHeapBlkSize * (v60 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
              {
                if ( v60 > 0x800000 )
                  goto LABEL_92;
                LODWORD(gdwGlobalHeapBlkSize) = v60;
              }
              else
              {
                LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v60 / (unsigned int)gdwGlobalHeapBlkSize + 1);
              }
            }
            v66 = NewGlobalHeap(&v94, v63);
          }
          else
          {
            v66 = NewLocalHeap(&v94, v63);
          }
          if ( v66 )
            goto LABEL_92;
          v24 = v94;
          *(_QWORD *)(v94 + 16) = a1 + 480;
          *(_QWORD *)(v89 + 24) = v24;
LABEL_90:
          v25 = *(_QWORD *)(v24 + 32);
          v67 = v60;
          *(_QWORD *)(v24 + 32) = v25 + v60;
          *(_DWORD *)(v25 + 4) = v60;
          goto LABEL_91;
        }
        *(_WORD *)(v17 + 2) = 3;
        v52 = (unsigned int)(v16[2] + 7) >> 3;
        *(_DWORD *)(v17 + 24) = v52;
        v53 = (void *)HeapAlloc(gpheapGlobal, 1179992648LL, v52);
        *(_QWORD *)(v17 + 32) = v53;
        if ( !v53 )
        {
          v5 = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          ObjectTypeName = *(_DWORD *)(v17 + 24);
          v29 = 161;
          goto LABEL_30;
        }
        memset(v53, 0, *(unsigned int *)(v17 + 24));
        v15 = v87;
        v88 = *(_QWORD *)(v17 + 32);
      }
      v76 = *(_DWORD *)(v17 + 24);
LABEL_110:
      v93 = v76;
      goto LABEL_24;
    }
    if ( *(_WORD *)(v15 + 2) == 5 )
    {
      v5 = RawFieldAccess(a1, 0, v15, v17);
      goto LABEL_31;
    }
    v5 = -1072431087;
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(a1, 3222536209LL);
    v29 = 162;
LABEL_114:
    ObjectTypeName = v8[5];
    goto LABEL_30;
  }
  v54 = (unsigned int)(v8[4] + 7) >> 3;
  if ( (v19 & 0xFu) > 4 )
  {
    if ( *(_WORD *)(v15 + 2) == 5 )
    {
      v5 = RawFieldAccess(a1, 1u, v15, v17);
      goto LABEL_31;
    }
    v5 = -1072431087;
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(a1, 3222536209LL);
    v29 = 213;
    goto LABEL_114;
  }
  v55 = *(unsigned __int16 *)(v17 + 2);
  v94 = 0LL;
  if ( v55 == 1 )
  {
    v56 = 8;
    v57 = v17 + 16;
    if ( v54 < 8 )
      v56 = v54;
LABEL_74:
    v92 = v57;
    goto LABEL_75;
  }
  v77 = v55 - 2;
  if ( v77 )
  {
    if ( v77 != 1 )
    {
      v5 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v17 + 2));
      v29 = 214;
      goto LABEL_30;
    }
    v56 = *(_DWORD *)(v17 + 24);
    v57 = *(_QWORD *)(v17 + 32);
    goto LABEL_74;
  }
  v56 = *(_DWORD *)(v17 + 24) - 1;
  v92 = *(_QWORD *)(v17 + 32);
LABEL_75:
  if ( (unsigned __int8)SupportsOnlyRawAccess(v15) )
  {
    v5 = RawFieldAccess(a1, 1u, v87, v17);
  }
  else
  {
    v5 = PushFrame(a1, 1279677015, 64, (unsigned int)WriteFieldLoop, (__int64)&v94);
    if ( !v5 )
    {
      v58 = v94;
      *(_QWORD *)(v94 + 32) = v87;
      v59 = v92;
      *(_QWORD *)(v58 + 40) = v16;
      *(_QWORD *)(v58 + 48) = v59;
      *(_DWORD *)(v58 + 56) = v56;
      *(_DWORD *)(v58 + 60) = v54;
    }
  }
LABEL_31:
  if ( v5 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
    v4 = (_DWORD *)(a2 + 16);
LABEL_34:
    if ( (*v4 & 0x20000) != 0 && ghGlobalLock )
      ghGlobalLock(5LL, 1LL, qword_140088E58);
    if ( (gDebugger & 0xD0) != 0 && (*v4 & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(a2 + 40));
    }
    v30 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v30 + 8);
    HeapFree(v30);
  }
  return v5;
}
