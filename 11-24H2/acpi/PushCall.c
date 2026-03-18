/*
 * XREFs of PushCall @ 0x140013020
 * Callers:
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     ParseLoad @ 0x140053310 (ParseLoad.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall PushCall(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  KIRQL v9; // al
  _QWORD *v10; // r9
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 **v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // esi
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rdi
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rbx
  int v27; // r14d
  unsigned int v28; // r14d
  KIRQL v29; // al
  __int64 v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r15
  void *v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rcx
  unsigned int v40; // eax
  __int64 **v41; // r8
  __int64 *i; // rax
  __int64 **v43; // rcx
  __int64 *v44; // r10
  _QWORD *v45; // r11
  __int64 v46; // rcx
  __int64 **v47; // rax
  __int64 **v48; // r11
  _QWORD *v49; // r8
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rcx
  __int64 **v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // [rsp+40h] [rbp-148h] BYREF
  __int64 v63; // [rsp+48h] [rbp-140h]
  char pszDest[256]; // [rsp+50h] [rbp-138h] BYREF

  v3 = 0LL;
  v63 = a3;
  v5 = a1 + 60;
  v6 = 0LL;
  v7 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v10 = v5;
  byte_140088EC8 = v9;
  v11 = v5;
  v12 = v5;
  v62 = (__int64)v5;
  v13 = (unsigned __int64)v5;
  while ( v12 )
  {
    v14 = *(_QWORD *)(v13 + 40);
    v15 = (__int64 **)(v13 + 40);
    v7 = v11;
    while ( 1 )
    {
      v6 = v14 - 16;
      if ( v15 == (__int64 **)(v6 + 16) )
      {
        v6 = 0LL;
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v6 + 4) >= 0x1A0u )
        break;
      v14 = *(_QWORD *)(v6 + 16);
    }
    if ( v6 )
    {
      v38 = *(_QWORD *)(v6 + 16);
      if ( *(_QWORD *)(v38 + 8) != v6 + 16 )
        goto LABEL_72;
      v39 = *(_QWORD **)(v6 + 24);
      if ( *v39 != v6 + 16 )
        goto LABEL_72;
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
      v40 = *(_DWORD *)(v6 + 4);
      if ( v40 >= 0x1C0 )
      {
        v41 = (__int64 **)(v6 + 416);
        *(_DWORD *)(v6 + 416) = 0;
        *(_DWORD *)(v6 + 420) = v40 - 416;
        *(_QWORD *)(v6 + 424) = v10;
        *(_DWORD *)(v6 + 4) = 416;
        for ( i = *v15; i != (__int64 *)v15; i = (__int64 *)*i )
        {
          if ( v6 + 432 < (unsigned __int64)i )
            break;
        }
        v43 = (__int64 **)i[1];
        v44 = (__int64 *)(v6 + 432);
        if ( *v43 != i )
          goto LABEL_72;
        *(_QWORD *)(v6 + 440) = v43;
        *v44 = (__int64)i;
        *v43 = v44;
        i[1] = (__int64)v44;
        v45 = (_QWORD *)*v44;
        v46 = *v44 - 16;
        if ( (__int64 **)*v44 != v15 )
        {
          v52 = *(unsigned int *)(v6 + 420);
          if ( (__int64 **)v46 == (__int64 **)((char *)v41 + v52) )
          {
            *(_DWORD *)(v6 + 420) = v52 + *(_DWORD *)(v46 + 4);
            v53 = *v45;
            if ( *(_QWORD **)(*v45 + 8LL) != v45 )
              goto LABEL_72;
            v54 = (_QWORD *)v45[1];
            if ( (_QWORD *)*v54 != v45 )
              goto LABEL_72;
            *v54 = v53;
            *(_QWORD *)(v53 + 8) = v54;
          }
        }
        v47 = *(__int64 ***)(v6 + 440);
        v48 = v47 - 2;
        if ( v47 != v15 )
        {
          v55 = *((unsigned int *)v48 + 1);
          if ( v41 == (__int64 **)((char *)v48 + v55) )
          {
            *((_DWORD *)v48 + 1) = *(_DWORD *)(v6 + 420) + v55;
            v56 = (__int64 *)*v44;
            if ( *(__int64 **)(*v44 + 8) != v44 )
              goto LABEL_72;
            v57 = *(__int64 ***)(v6 + 440);
            if ( *v57 != v44 )
              goto LABEL_72;
            *v57 = v56;
            v41 = v48;
            v56[1] = (__int64)v57;
          }
        }
        if ( v10[4] <= (unsigned __int64)v41 + *((unsigned int *)v41 + 1) )
        {
          v10[4] = v41;
          v49 = v41 + 2;
          v50 = *v49;
          if ( *(_QWORD **)(*v49 + 8LL) != v49 )
            goto LABEL_72;
          v51 = (_QWORD *)v49[1];
          if ( (_QWORD *)*v51 != v49 )
            goto LABEL_72;
          *v51 = v50;
          *(_QWORD *)(v50 + 8) = v51;
        }
      }
      goto LABEL_13;
    }
LABEL_6:
    if ( (unsigned int)(*((_DWORD *)v10 + 2) - *((_DWORD *)v10 + 8)) >= 0x1A0 )
      goto LABEL_12;
    v10 = (_QWORD *)v10[3];
    v12 = v10;
    v62 = (__int64)v10;
    v11 = v10;
    v13 = (unsigned __int64)v10;
  }
  if ( v5 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x1D8 )
    {
      v13 = 0x1A0 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x1A0 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 416;
    }
    v16 = NewGlobalHeap(&v62, v13);
  }
  else
  {
    v16 = NewLocalHeap(&v62);
  }
  if ( !v16 )
  {
    v10 = (_QWORD *)v62;
    *(_QWORD *)(v62 + 16) = v5;
    v7[3] = v10;
LABEL_12:
    v6 = v10[4];
    v10[4] = v6 + 416;
    *(_DWORD *)(v6 + 4) = 416;
LABEL_13:
    *(_DWORD *)v6 = 1297237576;
    *(_QWORD *)(v6 + 8) = v10;
    memset((void *)(v6 + 16), 0, 0x190uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v17 = v6 + 16;
  if ( !v6 )
    v17 = 0LL;
  if ( v17 )
  {
    *(_QWORD *)(v17 + 8) = a1[52];
    a1[52] = v17;
    *(_QWORD *)(v17 + 24) = ParseCall;
    *(_DWORD *)v17 = 1280065859;
    if ( !a2 )
    {
      a1[12] = v17;
      v22 = v17;
      *(_DWORD *)(v17 + 16) = 5;
      v19 = 0;
LABEL_26:
      *(_QWORD *)(v22 + 392) = v63;
      return v19;
    }
    v18 = *(_QWORD *)(a2 + 96);
    *(_QWORD *)(v17 + 48) = a2;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
    if ( (*(_BYTE *)(v18 + 193) & 8) != 0 )
      *(_DWORD *)(v17 + 16) |= 0x10000u;
    if ( *(_WORD *)(a2 + 66) == 8 && _bittest16((const signed __int16 *)(a2 + 64), 9u) )
      *(_DWORD *)(v17 + 16) |= 0x80000u;
    v19 = 0;
    v20 = (*(_BYTE *)(v18 + 193) & 7) == 0;
    v21 = *(_BYTE *)(v18 + 193) & 7;
    v22 = v17;
    *(_DWORD *)(v17 + 60) = v21;
    if ( v20 )
      goto LABEL_26;
    v24 = a1[40];
    v25 = 40 * v21;
    v26 = 0LL;
    if ( v25 + 16 < v25 )
    {
LABEL_31:
      *(_QWORD *)(v17 + 64) = 0LL;
      goto LABEL_32;
    }
    if ( v25 + 16 < 0x20 )
    {
      v27 = 39;
    }
    else
    {
      v27 = v25 + 23;
      if ( v25 + 23 < v25 + 16 )
        goto LABEL_31;
    }
    v28 = v27 & 0xFFFFFFF8;
    v29 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v30 = v24;
    v62 = v24;
    byte_140088EC8 = v29;
    v31 = v24;
    v32 = v24;
    v33 = v24;
    while ( v32 )
    {
      v34 = *(_QWORD *)(v33 + 40);
      v3 = v31;
      while ( 1 )
      {
        v26 = v34 - 16;
        if ( v33 + 40 == v26 + 16 )
        {
          v26 = 0LL;
          goto LABEL_40;
        }
        if ( v28 <= *(_DWORD *)(v26 + 4) )
          break;
        v34 = *(_QWORD *)(v26 + 16);
      }
      if ( v26 )
      {
        v58 = *(_QWORD *)(v26 + 16);
        if ( *(_QWORD *)(v58 + 8) == v26 + 16 )
        {
          v59 = *(_QWORD **)(v26 + 24);
          if ( *v59 == v26 + 16 )
          {
            *v59 = v58;
            *(_QWORD *)(v58 + 8) = v59;
            v36 = v28;
            if ( *(unsigned int *)(v26 + 4) >= (unsigned __int64)v28 + 32 )
            {
              v60 = v26 + v28;
              *(_DWORD *)v60 = 0;
              v61 = *(_DWORD *)(v26 + 4) - v28;
              *(_QWORD *)(v60 + 8) = v30;
              *(_DWORD *)(v60 + 4) = v61;
              *(_DWORD *)(v26 + 4) = v28;
              HeapInsertFreeList(v30, (unsigned int *)v60);
            }
LABEL_47:
            *(_DWORD *)v26 = 1413563464;
            *(_QWORD *)(v26 + 8) = v30;
            memset((void *)(v26 + 16), 0, v36 - 16);
LABEL_48:
            KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
            v37 = (void *)(v26 + 16);
            if ( !v26 )
              v37 = 0LL;
            *(_QWORD *)(v22 + 64) = v37;
            if ( v37 )
            {
              memset(v37, 0, 40LL * *(unsigned int *)(v22 + 60));
              goto LABEL_26;
            }
LABEL_32:
            v19 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError((__int64)a1, -1073741670);
            PrintDebugMessage(0x98u, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_26;
          }
        }
LABEL_72:
        __fastfail(3u);
      }
LABEL_40:
      if ( v28 <= *(_DWORD *)(v30 + 8) - *(_DWORD *)(v30 + 32) )
        goto LABEL_46;
      v30 = *(_QWORD *)(v30 + 24);
      v32 = v30;
      v62 = v30;
      v31 = v30;
      v33 = v30;
    }
    if ( v24 == gpheapGlobal )
    {
      if ( v28 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v33 = v28 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v28 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v28 > 0x800000 )
            goto LABEL_48;
          LODWORD(gdwGlobalHeapBlkSize) = v28;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v28 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v35 = NewGlobalHeap(&v62, v33);
    }
    else
    {
      v35 = NewLocalHeap(&v62);
    }
    if ( v35 )
      goto LABEL_48;
    v30 = v62;
    *(_QWORD *)(v62 + 16) = v24;
    *(_QWORD *)(v3 + 24) = v30;
LABEL_46:
    v26 = *(_QWORD *)(v30 + 32);
    v36 = v28;
    *(_QWORD *)(v30 + 32) = v26 + v28;
    *(_DWORD *)(v26 + 4) = v28;
    goto LABEL_47;
  }
  v19 = -1072431102;
  LogError(-1072431102);
  AcpiDiagTraceAmlError((__int64)a1, -1072431102);
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_140087AB8, 0LL, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 153, 0LL, 0LL, 0LL, 0LL);
      DbgCommandString("ACPI", pszDest);
    }
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 153, 0LL, 0LL, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", pszDest);
  }
  return v19;
}
