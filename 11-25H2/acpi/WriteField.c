/*
 * XREFs of WriteField @ 0x14000229C
 * Callers:
 *     Store @ 0x140006870 (Store.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 * Callees:
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     SupportsOnlyRawAccess @ 0x140011EA8 (SupportsOnlyRawAccess.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall WriteField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 i; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int ObjectTypeName; // edx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]

  v4 = a4;
  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  v8 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) != 5 )
    {
      v19 = -1072431087;
      LogError(3222536209LL);
      AcpiDiagTraceAmlError(v8, 3222536209LL);
      ObjectTypeName = *(_DWORD *)(a3 + 12);
      v22 = 213;
      goto LABEL_21;
    }
    return (unsigned int)RawFieldAccess(a1, 1u, a2, a4);
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v9 = 8;
    v10 = a4 + 16;
    if ( v5 < 8 )
      v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  }
  else
  {
    if ( *(_WORD *)(a4 + 2) == 2 )
    {
      v9 = *(_DWORD *)(a4 + 24) - 1;
    }
    else
    {
      if ( *(_WORD *)(a4 + 2) != 3 )
      {
        v19 = -1072431095;
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(v8, 3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
        v22 = 214;
        goto LABEL_21;
      }
      v9 = *(_DWORD *)(a4 + 24);
    }
    v10 = *(_QWORD *)(a4 + 32);
  }
  if ( (unsigned __int8)SupportsOnlyRawAccess(a2) )
  {
    a4 = v4;
    a1 = v8;
    return (unsigned int)RawFieldAccess(a1, 1u, a2, a4);
  }
  v11 = 0LL;
  v29 = 0LL;
  v12 = v8 + 480;
  v13 = v8 + 480;
  v28 = v8 + 480;
  byte_140088F48 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v14 = v8 + 480;
  v15 = v8 + 480;
  v16 = v8 + 480;
  while ( 2 )
  {
    if ( v14 )
    {
      v29 = v15;
      for ( i = *(_QWORD *)(v16 + 40); ; i = *(_QWORD *)(v11 + 16) )
      {
        v11 = i - 16;
        if ( v16 + 40 == v11 + 16 )
        {
          v11 = 0LL;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(v11 + 4) >= 0x50u )
          break;
      }
      if ( v11 )
      {
        v25 = *(_QWORD *)(v11 + 16);
        if ( *(_QWORD *)(v25 + 8) != v11 + 16 || (v26 = *(_QWORD **)(v11 + 24), *v26 != v11 + 16) )
          __fastfail(3u);
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        v27 = *(_DWORD *)(v11 + 4);
        if ( v27 >= 0x70 )
        {
          *(_DWORD *)(v11 + 80) = 0;
          *(_DWORD *)(v11 + 84) = v27 - 80;
          *(_QWORD *)(v11 + 88) = v13;
          *(_DWORD *)(v11 + 4) = 80;
          HeapInsertFreeList(v13);
        }
        goto LABEL_16;
      }
LABEL_11:
      if ( (unsigned int)(*(_DWORD *)(v13 + 8) - *(_DWORD *)(v13 + 32)) < 0x50 )
      {
        v13 = *(_QWORD *)(v13 + 24);
        v14 = v13;
        v28 = v13;
        v15 = v13;
        v16 = v13;
        continue;
      }
      v11 = *(_QWORD *)(v13 + 32);
      *(_QWORD *)(v13 + 32) = v11 + 80;
      *(_DWORD *)(v11 + 4) = 80;
      goto LABEL_16;
    }
    break;
  }
  if ( v12 == gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
    {
      v16 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 80;
    }
    v23 = NewGlobalHeap(&v28, v16);
  }
  else
  {
    v23 = NewLocalHeap(&v28, v16);
  }
  if ( v23 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v28;
    v24 = v29;
    *(_QWORD *)(v28 + 16) = v12;
    *(_QWORD *)(v24 + 24) = v13;
    v11 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v11 + 80;
    *(_DWORD *)(v11 + 4) = 80;
  }
  if ( v11 )
  {
LABEL_16:
    *(_DWORD *)v11 = 1297237576;
    *(_QWORD *)(v11 + 8) = v13;
    memset((void *)(v11 + 16), 0, 0x40uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088F48);
  v18 = (v11 + 16) & -(__int64)(v11 != 0);
  if ( !v18 )
  {
    v19 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(v8, 3222536194LL);
    ObjectTypeName = 0;
    v22 = 153;
LABEL_21:
    PrintDebugMessage(v22, ObjectTypeName, 0, 0, 0LL);
    return v19;
  }
  v19 = 0;
  *(_QWORD *)(v18 + 8) = *(_QWORD *)(v8 + 416);
  *(_QWORD *)(v8 + 416) = v18;
  *(_QWORD *)(v18 + 24) = WriteFieldLoop;
  *(_DWORD *)v18 = 1279677015;
  *(_QWORD *)(v18 + 32) = a2;
  *(_QWORD *)(v18 + 40) = a3;
  *(_QWORD *)(v18 + 48) = v10;
  *(_DWORD *)(v18 + 56) = v9;
  *(_DWORD *)(v18 + 60) = v5;
  return v19;
}
