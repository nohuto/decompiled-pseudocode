/*
 * XREFs of PushAccFieldObj @ 0x140011520
 * Callers:
 *     WriteFieldObj @ 0x14000B3B0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x14000B7E0 (ReadFieldObj.c)
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     PreserveWriteObj @ 0x140042070 (PreserveWriteObj.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall PushAccFieldObj(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rdi
  __int64 v7; // r15
  unsigned int v10; // r14d
  __int64 v11; // rbx
  unsigned int v12; // ecx
  int v13; // ebp
  unsigned int v15; // ebp
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 i; // rbx
  int v22; // eax
  __int64 v23; // r15
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // r8d
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+90h] [rbp+8h] BYREF
  __int64 v38; // [rsp+98h] [rbp+10h]
  __int64 v39; // [rsp+A0h] [rbp+18h]
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v39 = a3;
  v38 = a2;
  v6 = 0LL;
  v7 = a1 + 480;
  v10 = 0;
  v11 = 0LL;
  v36 = 0LL;
  v40 = a1 + 480;
  if ( a4[5] )
  {
    v12 = a4[7] + 144;
    if ( v12 < a4[7] + 128 )
      goto LABEL_5;
  }
  else
  {
    v12 = 144;
  }
  if ( v12 < 0x20 )
  {
    v13 = 39;
  }
  else
  {
    v13 = v12 + 7;
    if ( v12 + 7 < v12 )
    {
LABEL_5:
      v10 = -1072431102;
      LogError(-1072431102);
      AcpiDiagTraceAmlError(a1, -1072431102);
      PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
      return v10;
    }
  }
  v15 = v13 & 0xFFFFFFF8;
  v16 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v18 = v7;
  v37 = v7;
  byte_140088EC8 = v16;
  v19 = v7;
  v20 = v7;
  while ( v20 )
  {
    v36 = v19;
    for ( i = *(_QWORD *)(v40 + 40); ; i = *(_QWORD *)(v11 + 16) )
    {
      v11 = i - 16;
      if ( v40 + 40 == v11 + 16 )
      {
        v11 = 0LL;
        goto LABEL_13;
      }
      if ( v15 <= *(_DWORD *)(v11 + 4) )
        break;
    }
    if ( v11 )
    {
      v32 = *(_QWORD *)(v11 + 16);
      if ( *(_QWORD *)(v32 + 8) != v11 + 16 || (v33 = *(_QWORD **)(v11 + 24), *v33 != v11 + 16) )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      v23 = v15;
      if ( *(unsigned int *)(v11 + 4) >= (unsigned __int64)v15 + 32 )
      {
        v34 = v11 + v15;
        *(_DWORD *)v34 = 0;
        v35 = *(_DWORD *)(v11 + 4) - v15;
        *(_QWORD *)(v34 + 8) = v18;
        *(_DWORD *)(v34 + 4) = v35;
        *(_DWORD *)(v11 + 4) = v15;
        HeapInsertFreeList(v18, (unsigned int *)v34);
      }
      goto LABEL_20;
    }
LABEL_13:
    if ( v15 <= *(_DWORD *)(v18 + 8) - *(_DWORD *)(v18 + 32) )
      goto LABEL_19;
    v18 = *(_QWORD *)(v18 + 24);
    v20 = v18;
    v37 = v18;
    v19 = v18;
    v40 = v18;
  }
  if ( v7 == gpheapGlobal )
  {
    if ( v15 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
    {
      v17 = v15 % (unsigned int)gdwGlobalHeapBlkSize;
      if ( (unsigned int)gdwGlobalHeapBlkSize * (v15 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
      {
        if ( v15 > 0x800000 )
          goto LABEL_21;
        LODWORD(gdwGlobalHeapBlkSize) = v15;
      }
      else
      {
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v15 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      }
    }
    v22 = NewGlobalHeap(&v37, v17);
  }
  else
  {
    v22 = NewLocalHeap(&v37);
  }
  if ( !v22 )
  {
    v18 = v37;
    *(_QWORD *)(v37 + 16) = v7;
    *(_QWORD *)(v36 + 24) = v18;
LABEL_19:
    v11 = *(_QWORD *)(v18 + 32);
    v23 = v15;
    *(_QWORD *)(v18 + 32) = v11 + v15;
    *(_DWORD *)(v11 + 4) = v15;
LABEL_20:
    *(_DWORD *)v11 = 1297237576;
    *(_QWORD *)(v11 + 8) = v18;
    memset((void *)(v11 + 16), 0, v23 - 16);
  }
LABEL_21:
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v24 = v11 + 16;
  if ( !v11 )
    v24 = 0LL;
  if ( !v24 )
    goto LABEL_5;
  v25 = a5;
  v26 = 1;
  *(_QWORD *)(v24 + 8) = *(_QWORD *)(a1 + 416);
  v27 = v38;
  *(_QWORD *)(a1 + 416) = v24;
  *(_QWORD *)(v24 + 24) = v27;
  v28 = v39;
  *(_DWORD *)v24 = 1330004801;
  *(_QWORD *)(v24 + 32) = v28;
  v29 = v25 + a6;
  *(_QWORD *)(v24 + 40) = v25;
  *(_QWORD *)(v24 + 48) = v29;
  v30 = a4[3] & 0xF;
  if ( (unsigned int)(v30 - 1) <= 3 )
    v26 = 1 << (v30 - 1);
  *(_DWORD *)(v24 + 56) = v26;
  v31 = 8 * v26;
  *(_DWORD *)(v24 + 60) = (v31 + a4[2] + a4[1] - 1) / v31;
  if ( v31 < 0x40 )
    v6 = 1LL << v31;
  *(_QWORD *)(v24 + 64) = v6 - 1;
  *(_DWORD *)(v24 + 72) = v31 - a4[1];
  *(_DWORD *)(v24 + 76) = a4[1];
  memmove((void *)(v24 + 96), a4, (unsigned int)(a4[7] + 32));
  return v10;
}
