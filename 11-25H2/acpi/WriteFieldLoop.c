/*
 * XREFs of WriteFieldLoop @ 0x140005880
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // r9
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // r8d
  _QWORD *v21; // rcx
  int v22; // ebp
  unsigned int v23; // ebp
  KIRQL v24; // al
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 i; // rbx
  __int64 v30; // r14
  int v31; // eax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-48h]
  _DWORD *v37; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+40h] [rbp-38h]
  __int64 v39; // [rsp+48h] [rbp-30h]
  __int64 v40; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 )
    goto LABEL_16;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
    goto LABEL_16;
  }
  v6 = *(_DWORD *)(a2 + 56);
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_16:
    v21 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v21[1];
    HeapFree(v21);
    return v3;
  }
  v7 = *(_DWORD *)(a2 + 60);
  v8 = 128;
  v9 = *(_DWORD **)(a2 + 40);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_QWORD *)(a2 + 32);
  if ( v7 <= v6 )
    v6 = v7;
  v38 = v10;
  v37 = v9;
  v39 = *(_QWORD *)(a2 + 32);
  if ( v9[5] )
    v8 = v9[7] + 128;
  v12 = a1 + 480;
  v36 = 0LL;
  v3 = 0;
  v13 = 0LL;
  if ( v8 + 16 < v8 )
    goto LABEL_9;
  if ( v8 + 16 < 0x20 )
  {
    v22 = 39;
    goto LABEL_19;
  }
  v22 = v8 + 23;
  if ( v8 + 23 >= v8 + 16 )
  {
LABEL_19:
    v23 = v22 & 0xFFFFFFF8;
    v24 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v25 = a1 + 480;
    v40 = a1 + 480;
    byte_140088F48 = v24;
    v26 = a1 + 480;
    v27 = a1 + 480;
    v28 = a1 + 480;
    while ( 2 )
    {
      if ( v27 )
      {
        v36 = v26;
        for ( i = *(_QWORD *)(v28 + 40); ; i = *(_QWORD *)(v13 + 16) )
        {
          v13 = i - 16;
          if ( v28 + 40 == v13 + 16 )
          {
            v13 = 0LL;
            goto LABEL_24;
          }
          if ( v23 <= *(_DWORD *)(v13 + 4) )
            break;
        }
        if ( v13 )
        {
          v32 = *(_QWORD *)(v13 + 16);
          if ( *(_QWORD *)(v32 + 8) != v13 + 16 || (v33 = *(_QWORD **)(v13 + 24), *v33 != v13 + 16) )
            __fastfail(3u);
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          v30 = v23;
          if ( *(unsigned int *)(v13 + 4) >= (unsigned __int64)v23 + 32 )
          {
            v34 = v13 + v23;
            *(_DWORD *)v34 = 0;
            v35 = *(_DWORD *)(v13 + 4) - v23;
            *(_QWORD *)(v34 + 8) = v25;
            *(_DWORD *)(v34 + 4) = v35;
            *(_DWORD *)(v13 + 4) = v23;
            HeapInsertFreeList(v25, (unsigned int *)v34);
          }
          goto LABEL_29;
        }
LABEL_24:
        if ( v23 > *(_DWORD *)(v25 + 8) - *(_DWORD *)(v25 + 32) )
        {
          v25 = *(_QWORD *)(v25 + 24);
          v27 = v25;
          v40 = v25;
          v26 = v25;
          v28 = v25;
          continue;
        }
        v13 = *(_QWORD *)(v25 + 32);
        v30 = v23;
        *(_QWORD *)(v25 + 32) = v13 + v23;
        *(_DWORD *)(v13 + 4) = v23;
LABEL_29:
        *(_DWORD *)v13 = 1297237576;
        *(_QWORD *)(v13 + 8) = v25;
        memset((void *)(v13 + 16), 0, v30 - 16);
LABEL_30:
        KeReleaseSpinLock(&gmutHeap, byte_140088F48);
        v9 = v37;
        v10 = v38;
        v11 = v39;
        goto LABEL_9;
      }
      break;
    }
    if ( v12 == gpheapGlobal )
    {
      if ( v23 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v28 = v23 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v23 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v23 > 0x800000 )
          {
            v25 = 0LL;
            v31 = -1073741670;
LABEL_38:
            if ( v31 )
            {
              v25 = 0LL;
            }
            else
            {
              *(_QWORD *)(v25 + 16) = v12;
              *(_QWORD *)(v36 + 24) = v25;
              v13 = *(_QWORD *)(v25 + 32);
              *(_QWORD *)(v25 + 32) = v13 + v23;
              *(_DWORD *)(v13 + 4) = v23;
            }
            v30 = v23;
            if ( !v13 )
              goto LABEL_30;
            goto LABEL_29;
          }
          LODWORD(gdwGlobalHeapBlkSize) = v23;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v23 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v31 = NewGlobalHeap(&v40, v28);
    }
    else
    {
      v31 = NewLocalHeap(&v40, v28);
    }
    v25 = v40;
    goto LABEL_38;
  }
LABEL_9:
  v14 = v13 + 16;
  v15 = -v13;
  v16 = (_DWORD *)(v14 & -(__int64)(v15 != 0));
  if ( v16 )
  {
    *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v16;
    *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x18) = WriteFieldObj;
    *v16 = 1330004801;
    *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x20) = v11;
    v17 = 1;
    *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x28) = v10;
    *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x30) = v10 + v6;
    v18 = v9[3] & 0xF;
    if ( (unsigned int)(v18 - 1) <= 3 )
      v17 = 1 << (v18 - 1);
    *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x38) = v17;
    v19 = 8 * v17;
    *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x3C) = (v19 + v9[2] - 1 + v9[1]) / v19;
    *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x40) = ((1LL << v19) & -(__int64)(v19 < 0x40)) - 1;
    *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x48) = v19 - v9[1];
    *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x4C) = v9[1];
    memmove(v16 + 24, v9, (unsigned int)(v9[7] + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
  }
  *(_DWORD *)(a2 + 56) -= v6;
  *(_QWORD *)(a2 + 48) += v6;
  return v3;
}
