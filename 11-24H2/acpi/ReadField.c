/*
 * XREFs of ReadField @ 0x140011880
 * Callers:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 * Callees:
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     SupportsOnlyRawAccess @ 0x140011EA8 (SupportsOnlyRawAccess.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned __int8 v5; // al
  __int64 v9; // rdi
  BOOL v10; // ecx
  int v11; // edx
  __int64 v12; // r12
  unsigned int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // ecx
  int v17; // r14d
  unsigned int v19; // r14d
  KIRQL v20; // al
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // r8d
  void *v37; // rax
  int v38; // edx
  int v39; // edx
  int v40; // esi
  __int64 v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  unsigned int v46; // eax
  const void *ObjectTypeName; // rax
  unsigned int v48; // [rsp+40h] [rbp-188h] BYREF
  __int64 v49; // [rsp+48h] [rbp-180h] BYREF
  __int64 v50; // [rsp+50h] [rbp-178h]
  __int64 v51; // [rsp+58h] [rbp-170h]
  __int64 v52; // [rsp+60h] [rbp-168h]
  __int64 v53; // [rsp+68h] [rbp-160h]
  char pszDest[256]; // [rsp+70h] [rbp-158h] BYREF

  v5 = a3[3] & 0xF;
  v53 = a2;
  v52 = a1;
  if ( v5 > 4u )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
    {
      return (unsigned int)RawFieldAccess(a1, 0, a2, a4);
    }
    else
    {
      v13 = -1072431087;
      LogError(-1072431087);
      AcpiDiagTraceAmlError(a1, -1072431087);
      v42 = (unsigned int)a3[3];
      if ( (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x19u, 0, off_140087B48, v42, 0LL, 0LL, 0LL);
        if ( (gDebugger & 0x40000) != 0 )
        {
          RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 162, (const void *)v42, 0LL, 0LL, 0LL);
          DbgCommandString("ACPI", pszDest);
        }
      }
      else
      {
        RtlStringCbPrintfA(
          pszDest,
          0x100uLL,
          "AMLIDBG: !amli err 0x%x %p %p %p %p",
          162,
          (const void *)v42,
          0LL,
          0LL,
          0LL);
        DbgPrintEx(0x19u, 0, "%s\n", pszDest);
      }
    }
    return v13;
  }
  v9 = 0LL;
  v48 = 0;
  v10 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v48);
    v10 = v48 >= 2;
  }
  v11 = *(unsigned __int16 *)(a4 + 2);
  v48 = 4 * v10 + 4;
  if ( v11 )
  {
    v38 = v11 - 1;
    if ( !v38 )
    {
      v41 = a4 + 16;
      v48 = 8;
      goto LABEL_46;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      v40 = *(_DWORD *)(a4 + 24) - 1;
      goto LABEL_45;
    }
    if ( v39 != 1 )
    {
      v13 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
      PrintDebugMessage(0xA3u, ObjectTypeName, 0LL, 0LL, 0LL);
      return v13;
    }
  }
  else
  {
    if ( (a3[3] & 0x10000) == 0 && a3[2] <= (unsigned int)(8 * (4 * v10 + 4)) )
    {
      *(_WORD *)(a4 + 2) = 1;
      v50 = a4 + 16;
      goto LABEL_8;
    }
    *(_WORD *)(a4 + 2) = 3;
    v36 = (unsigned int)(a3[2] + 7) >> 3;
    *(_DWORD *)(a4 + 24) = v36;
    v37 = (void *)HeapAlloc(gpheapGlobal, 1179992648, v36);
    *(_QWORD *)(a4 + 32) = v37;
    if ( !v37 )
    {
      v13 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0xA1u, (const void *)*(unsigned int *)(a4 + 24), 0LL, 0LL, 0LL);
      return v13;
    }
    memset(v37, 0, *(unsigned int *)(a4 + 24));
  }
  v40 = *(_DWORD *)(a4 + 24);
LABEL_45:
  v41 = *(_QWORD *)(a4 + 32);
  v48 = v40;
LABEL_46:
  v50 = v41;
LABEL_8:
  if ( (unsigned __int8)SupportsOnlyRawAccess(a2) )
    return (unsigned int)RawFieldAccess(a1, 0, a2, a4);
  v12 = a1 + 480;
  v13 = 0;
  v14 = a1 + 480;
  v15 = 0LL;
  v51 = 0LL;
  if ( a3[5] )
  {
    v16 = a3[7] + 144;
    if ( v16 < a3[7] + 128 )
      goto LABEL_13;
  }
  else
  {
    v16 = 144;
  }
  if ( v16 < 0x20 )
  {
    v17 = 39;
  }
  else
  {
    v17 = v16 + 7;
    if ( v16 + 7 < v16 )
    {
LABEL_13:
      v13 = -1072431102;
      LogError(-1072431102);
      AcpiDiagTraceAmlError(v52, -1072431102);
      PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
      return v13;
    }
  }
  v19 = v17 & 0xFFFFFFF8;
  v20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v22 = v12;
  v49 = v12;
  byte_140088EC8 = v20;
  v23 = v12;
  v24 = v12;
  while ( v24 )
  {
    v25 = *(_QWORD *)(v14 + 40);
    v51 = v23;
    while ( 1 )
    {
      v15 = v25 - 16;
      if ( v14 + 40 == v15 + 16 )
      {
        v15 = 0LL;
        goto LABEL_21;
      }
      if ( v19 <= *(_DWORD *)(v15 + 4) )
        break;
      v25 = *(_QWORD *)(v15 + 16);
    }
    if ( v15 )
    {
      v43 = *(_QWORD *)(v15 + 16);
      if ( *(_QWORD *)(v43 + 8) != v15 + 16 || (v44 = *(_QWORD **)(v15 + 24), *v44 != v15 + 16) )
        __fastfail(3u);
      *v44 = v43;
      *(_QWORD *)(v43 + 8) = v44;
      v28 = v19;
      if ( *(unsigned int *)(v15 + 4) >= (unsigned __int64)v19 + 32 )
      {
        v45 = v19 + v15;
        *(_DWORD *)v45 = 0;
        v46 = *(_DWORD *)(v15 + 4) - v19;
        *(_QWORD *)(v45 + 8) = v22;
        *(_DWORD *)(v45 + 4) = v46;
        *(_DWORD *)(v15 + 4) = v19;
        HeapInsertFreeList(v22, (unsigned int *)v45);
      }
      goto LABEL_28;
    }
LABEL_21:
    if ( v19 <= *(_DWORD *)(v22 + 8) - *(_DWORD *)(v22 + 32) )
      goto LABEL_27;
    v22 = *(_QWORD *)(v22 + 24);
    v24 = v22;
    v49 = v22;
    v23 = v22;
    v14 = v22;
  }
  if ( v12 != gpheapGlobal )
  {
    v26 = NewLocalHeap(&v49);
    goto LABEL_25;
  }
  if ( v19 + 56 <= (unsigned int)gdwGlobalHeapBlkSize )
  {
LABEL_71:
    v26 = NewGlobalHeap(&v49, v21);
LABEL_25:
    if ( !v26 )
    {
      v22 = v49;
      v27 = v51;
      *(_QWORD *)(v49 + 16) = v12;
      *(_QWORD *)(v27 + 24) = v22;
LABEL_27:
      v15 = *(_QWORD *)(v22 + 32);
      v28 = v19;
      *(_QWORD *)(v22 + 32) = v15 + v19;
      *(_DWORD *)(v15 + 4) = v19;
LABEL_28:
      *(_DWORD *)v15 = 1297237576;
      *(_QWORD *)(v15 + 8) = v22;
      memset((void *)(v15 + 16), 0, v28 - 16);
    }
    goto LABEL_29;
  }
  v21 = v19 % (unsigned int)gdwGlobalHeapBlkSize;
  if ( (unsigned int)gdwGlobalHeapBlkSize * (v19 / (unsigned int)gdwGlobalHeapBlkSize + 1) <= 0x800000 )
  {
    LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v19 / (unsigned int)gdwGlobalHeapBlkSize + 1);
    goto LABEL_71;
  }
  if ( v19 <= 0x800000 )
  {
    LODWORD(gdwGlobalHeapBlkSize) = v19;
    goto LABEL_71;
  }
LABEL_29:
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v29 = v15 + 16;
  if ( !v15 )
    v29 = 0LL;
  if ( !v29 )
    goto LABEL_13;
  v30 = v52;
  *(_QWORD *)(v29 + 8) = *(_QWORD *)(v52 + 416);
  *(_QWORD *)(v30 + 416) = v29;
  v31 = v50;
  *(_QWORD *)(v29 + 24) = ReadFieldObj;
  v32 = v53;
  *(_DWORD *)v29 = 1330004801;
  *(_QWORD *)(v29 + 32) = v32;
  v33 = v31 + v48;
  *(_QWORD *)(v29 + 40) = v31;
  *(_QWORD *)(v29 + 48) = v33;
  v34 = a3[3] & 0xF;
  v35 = 1;
  if ( (unsigned int)(v34 - 1) <= 3 )
    v35 = 1 << (v34 - 1);
  *(_DWORD *)(v29 + 56) = v35;
  *(_DWORD *)(v29 + 60) = (8 * v35 + a3[1] + a3[2] - 1) / (unsigned int)(8 * v35);
  if ( (unsigned int)(8 * v35) < 0x40 )
    v9 = 1LL << (8 * (unsigned __int8)v35);
  *(_QWORD *)(v29 + 64) = v9 - 1;
  *(_DWORD *)(v29 + 72) = 8 * v35 - a3[1];
  *(_DWORD *)(v29 + 76) = a3[1];
  memmove((void *)(v29 + 96), a3, (unsigned int)(a3[7] + 32));
  return v13;
}
