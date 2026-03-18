/*
 * XREFs of ParseAcquire @ 0x140002BC0
 * Callers:
 *     <none>
 * Callees:
 *     QueueContext @ 0x140001C48 (QueueContext.c)
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     AcquireGL @ 0x1400057E4 (AcquireGL.c)
 *     ReleaseASLMutex @ 0x140005C88 (ReleaseASLMutex.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     ReleaseGL @ 0x14003B438 (ReleaseGL.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned int v8; // edi
  unsigned int *v10; // rbx
  int v11; // ecx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // bx
  KSPIN_LOCK *v16; // r14
  int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // rbx
  KIRQL v20; // al
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  int v26; // eax
  KSPIN_LOCK v27; // rax
  _QWORD *v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdx
  unsigned int *v44; // rbp
  int v45; // ebx
  char v46; // al
  __int64 v47; // rcx
  KIRQL v48; // [rsp+78h] [rbp+10h]
  __int64 v49; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 16);
  v6 = 0LL;
  v7 = v4 & 0xF;
  v8 = a3;
  v10 = (unsigned int *)(a2 + 16);
  if ( (_DWORD)v7 == 3 )
  {
    v11 = 3;
    goto LABEL_48;
  }
  v11 = 5;
  if ( !(_DWORD)a3 )
    v11 = v4 & 0xF;
  if ( v11 )
  {
    if ( v11 == 1 )
      goto LABEL_6;
LABEL_48:
    v34 = v11 - 2;
    if ( !v34 )
      goto LABEL_7;
    v35 = v34 - 1;
    if ( !v35 )
      goto LABEL_34;
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        if ( v37 != 1 )
          return v8;
        goto LABEL_41;
      }
    }
    else
    {
LABEL_37:
      if ( v8 )
      {
        if ( (v4 & 0x80000) != 0 )
        {
          v43 = *(_QWORD *)(a2 + 32);
          *v10 = v4 & 0xFFF7FFFF;
          ReleaseASLMutex(a1, v43, 0LL);
          v44 = (unsigned int *)(a2 + 16);
        }
        else
        {
          v44 = v10;
        }
        if ( (*v10 & 0x20000) != 0 )
        {
          *v10 &= ~0x20000u;
          v45 = ReleaseGL(a1);
          if ( v45 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a1, 3222536195LL);
            PrintDebugMessage(172, v45, 0, 0, 0LL);
            v8 = -1072431101;
          }
        }
        v10 = v44;
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) == 3 )
        {
          if ( *(_WORD *)(a2 + 40) == 0xFFFF )
          {
            *(_DWORD *)(a2 + 16) = 1;
            return v8;
          }
          v8 = 32773;
        }
      }
      v4 = ++*v10;
    }
    if ( (v4 & 0x40000) != 0 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
      if ( v8 )
      {
        v46 = IsCompatableDSDTRevision();
        v47 = -1LL;
        if ( !v46 )
          v47 = 0xFFFFFFFFLL;
        v8 = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = v47;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
      }
    }
    ++*v10;
LABEL_41:
    v32 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v32 + 8);
    HeapFree(v32);
    return v8;
  }
  a4 = *(_QWORD *)(a2 + 56);
  v12 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 16) = v4 + 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 32), 0, 0) == 2
    && (int)PerformMutexDriverCallbacks(4, v12, a1, a4, 0) >= 0 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 32), 3, 2);
  }
LABEL_6:
  if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
  {
    v8 = AcquireGL(a1, v7, a3, a4);
    if ( v8 )
      return v8;
  }
LABEL_7:
  v13 = *(_DWORD *)(a2 + 16);
  if ( (v13 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v13 | 0x20000;
  v14 = *(_DWORD *)(a1 + 64);
  v8 = 0;
  v15 = *(_WORD *)(a2 + 40);
  v16 = *(KSPIN_LOCK **)(a2 + 32);
  if ( (v14 & 4) != 0 )
  {
    v8 = 32773;
    *(_DWORD *)(a1 + 64) = v14 & 0xFFFFFFFB;
    goto LABEL_33;
  }
  v48 = KeAcquireSpinLockRaiseToDpc(v16 + 23);
  if ( *(_DWORD *)v16 < *(_DWORD *)(a1 + 112) )
  {
    v8 = -1072431083;
    LogError(3222536213LL);
    AcpiDiagTraceAmlError(a1, 3222536213LL);
    PrintDebugMessage(5, 0, 0, 0, 0LL);
    goto LABEL_30;
  }
  v17 = *((_DWORD *)v16 + 1);
  if ( v17 )
  {
    if ( *(_QWORD *)(v16[1] + 8) == a1 )
    {
      *((_DWORD *)v16 + 1) = v17 + 1;
    }
    else
    {
      QueueContext(a1, v15, (__int64)(v16 + 2));
      v8 = 32772;
    }
    goto LABEL_30;
  }
  v18 = *(_QWORD *)(a1 + 320);
  v19 = 0LL;
  v20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v21 = v18;
  v49 = v18;
  byte_140088EC8 = v20;
  v22 = v18;
  v23 = v18;
  v24 = v18;
LABEL_13:
  if ( !v23 )
  {
    if ( v18 == gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x70 )
      {
        v24 = 0x38 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x38 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 56;
      }
      v26 = NewGlobalHeap(&v49, v24);
    }
    else
    {
      v26 = NewLocalHeap(&v49, v24);
    }
    if ( v26 )
      goto LABEL_25;
    v21 = v49;
    *(_QWORD *)(v49 + 16) = v18;
    *(_QWORD *)(v6 + 24) = v21;
LABEL_23:
    v19 = *(_QWORD *)(v21 + 32);
    *(_QWORD *)(v21 + 32) = v19 + 56;
    *(_DWORD *)(v19 + 4) = 56;
    goto LABEL_24;
  }
  v25 = *(_QWORD *)(v24 + 40);
  v6 = v22;
  while ( 1 )
  {
    v19 = v25 - 16;
    if ( v24 + 40 == v19 + 16 )
    {
      v19 = 0LL;
LABEL_17:
      if ( (unsigned int)(*(_DWORD *)(v21 + 8) - *(_DWORD *)(v21 + 32)) >= 0x38 )
        goto LABEL_23;
      v21 = *(_QWORD *)(v21 + 24);
      v23 = v21;
      v49 = v21;
      v22 = v21;
      v24 = v21;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(v19 + 4) >= 0x38u )
      break;
    v25 = *(_QWORD *)(v19 + 16);
  }
  if ( !v19 )
    goto LABEL_17;
  v40 = *(_QWORD *)(v19 + 16);
  if ( *(_QWORD *)(v40 + 8) != v19 + 16 )
    goto LABEL_73;
  v41 = *(_QWORD **)(v19 + 24);
  if ( *v41 != v19 + 16 )
    goto LABEL_73;
  *v41 = v40;
  *(_QWORD *)(v40 + 8) = v41;
  v42 = *(_DWORD *)(v19 + 4);
  if ( v42 >= 0x58 )
  {
    *(_DWORD *)(v19 + 56) = 0;
    *(_DWORD *)(v19 + 60) = v42 - 56;
    *(_QWORD *)(v19 + 64) = v21;
    *(_DWORD *)(v19 + 4) = 56;
    HeapInsertFreeList(v21, (unsigned int *)(v19 + 56));
  }
LABEL_24:
  *(_DWORD *)v19 = 1380865871;
  *(_QWORD *)(v19 + 8) = v21;
  *(_OWORD *)(v19 + 16) = 0LL;
  *(_OWORD *)(v19 + 32) = 0LL;
  *(_QWORD *)(v19 + 48) = 0LL;
LABEL_25:
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v27 = v19 + 16;
  if ( !v19 )
    v27 = 0LL;
  if ( v27 )
  {
    v28 = (_QWORD *)(a1 + 48);
    *(_QWORD *)(v27 + 8) = a1;
    *(_QWORD *)(v27 + 16) = v16;
    v29 = (_QWORD *)(v27 + 24);
    *(_DWORD *)v27 = 1;
    v30 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(v30 + 8) == a1 + 48 )
    {
      *v29 = v30;
      *(_QWORD *)(v27 + 32) = v28;
      *(_QWORD *)(v30 + 8) = v29;
      *v28 = v29;
      v16[1] = v27;
      v31 = *(_DWORD *)v16;
      *((_DWORD *)v16 + 1) = 1;
      *(_DWORD *)(a1 + 112) = v31;
      goto LABEL_30;
    }
LABEL_73:
    __fastfail(3u);
  }
  v8 = -1073741670;
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(a1, 3221225626LL);
  PrintDebugMessage(4, 0, 0, 0, 0LL);
LABEL_30:
  KeReleaseSpinLock(v16 + 23, v48);
  if ( v8 == 32772 )
  {
    v38 = *(_DWORD *)(a2 + 16);
    if ( (v38 & 0x20000) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v38 & 0xFFFDFFFF;
      v8 = ReleaseGL(a1);
      v39 = *(_DWORD *)(a2 + 16);
      if ( v8 )
      {
        *(_DWORD *)(a2 + 16) = v39 + 3;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(119, v8, 0, 0, 0LL);
        return (unsigned int)-1072431101;
      }
      else
      {
        *(_DWORD *)(a2 + 16) = v39 - 1;
      }
    }
  }
  else
  {
    if ( !v8 )
      *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_33:
    ++*(_DWORD *)(a2 + 16);
    v10 = (unsigned int *)(a2 + 16);
LABEL_34:
    if ( v8 == 32773
      || *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3
      || (v8 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40)),
          v8 != 32772) )
    {
      v4 = ++*v10;
      goto LABEL_37;
    }
  }
  return v8;
}
