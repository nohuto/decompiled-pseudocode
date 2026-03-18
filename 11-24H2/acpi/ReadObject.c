/*
 * XREFs of ReadObject @ 0x1400026A0
 * Callers:
 *     IncDec @ 0x140002610 (IncDec.c)
 *     DerefOf @ 0x140008B10 (DerefOf.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     LoadFieldUnitDDB @ 0x14006B76C (LoadFieldUnitDDB.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006CA3C (AMLIReadNamespaceOverrideObject.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  __int16 v7; // ax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r15
  KIRQL v12; // al
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_WORD *)(a2 + 2);
      if ( v7 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v7 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( v7 == 5 )
  {
    v9 = 0LL;
    v10 = a1 + 480;
    v11 = 0LL;
    v12 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v13 = a1 + 480;
    v23 = a1 + 480;
    byte_140088EC8 = v12;
    v14 = a1 + 480;
    v15 = a1 + 480;
    v16 = a1 + 480;
    while ( v15 )
    {
      v17 = *(_QWORD *)(v16 + 40);
      v11 = v14;
      while ( 1 )
      {
        v9 = v17 - 16;
        if ( v16 + 40 == v9 + 16 )
        {
          v9 = 0LL;
          goto LABEL_19;
        }
        if ( *(_DWORD *)(v9 + 4) >= 0x40u )
          break;
        v17 = *(_QWORD *)(v9 + 16);
      }
      if ( v9 )
      {
        v20 = *(_QWORD *)(v9 + 16);
        if ( *(_QWORD *)(v20 + 8) != v9 + 16 || (v21 = *(_QWORD **)(v9 + 24), *v21 != v9 + 16) )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = *(_DWORD *)(v9 + 4);
        if ( v22 >= 0x60 )
        {
          *(_DWORD *)(v9 + 64) = 0;
          *(_DWORD *)(v9 + 68) = v22 - 64;
          *(_QWORD *)(v9 + 72) = v13;
          *(_DWORD *)(v9 + 4) = 64;
          HeapInsertFreeList(v13);
        }
        goto LABEL_26;
      }
LABEL_19:
      if ( (unsigned int)(*(_DWORD *)(v13 + 8) - *(_DWORD *)(v13 + 32)) >= 0x40 )
        goto LABEL_25;
      v13 = *(_QWORD *)(v13 + 24);
      v15 = v13;
      v23 = v13;
      v14 = v13;
      v16 = v13;
    }
    if ( v10 == gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x78 )
      {
        v16 = 0x40 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x40 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 64;
      }
      v18 = NewGlobalHeap(&v23, v16);
    }
    else
    {
      v18 = NewLocalHeap(&v23, v16);
    }
    if ( !v18 )
    {
      v13 = v23;
      *(_QWORD *)(v23 + 16) = v10;
      *(_QWORD *)(v11 + 24) = v13;
LABEL_25:
      v9 = *(_QWORD *)(v13 + 32);
      *(_QWORD *)(v13 + 32) = v9 + 64;
      *(_DWORD *)(v9 + 4) = 64;
LABEL_26:
      *(_DWORD *)v9 = 1297237576;
      *(_QWORD *)(v9 + 8) = v13;
      *(_OWORD *)(v9 + 16) = 0LL;
      *(_OWORD *)(v9 + 32) = 0LL;
      *(_OWORD *)(v9 + 48) = 0LL;
    }
    KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
    v19 = v9 + 16;
    if ( !v9 )
      v19 = 0LL;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v19;
      *(_QWORD *)(v19 + 24) = AccFieldUnit;
      *(_DWORD *)v19 = 1430668097;
      *(_QWORD *)(v19 + 32) = a2;
      *(_DWORD *)(v19 + 16) = 0x10000;
      *(_QWORD *)(v19 + 40) = a3;
    }
    else
    {
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
  }
  else if ( v7 == 14 )
  {
    return (unsigned int)ReadField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
  }
  else
  {
    if ( a3 != a2 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a2;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 8LL));
      }
      else if ( *(_QWORD *)(a2 + 32) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
        *(_WORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = a2;
      }
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v6;
}
