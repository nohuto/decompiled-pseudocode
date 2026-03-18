/*
 * XREFs of ParseObjName @ 0x140001F40
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     ParseName @ 0x14000E040 (ParseName.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ParseObjName(__int64 a1, unsigned __int8 **a2, __int64 a3, char a4)
{
  unsigned __int8 *v4; // rax
  __int64 v5; // rdi
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r14
  void *v15; // rcx
  int v17; // esi
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 i; // rbx
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  _BYTE Src[256]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = *a2;
  v5 = a1;
  v31 = a1;
  v8 = (__int64)*(&OpcodeTable + *v4);
  if ( v8 && (*(_DWORD *)(v8 + 28) & 0x20) != 0 )
  {
    v9 = ParseName(a1, a2, Src);
    if ( v9 )
      return v9;
    *(_WORD *)(a3 + 2) = 2;
    v10 = -1LL;
    do
      ++v10;
    while ( Src[v10] );
    v11 = v10 + 1;
    v12 = 0LL;
    v13 = 0LL;
    *(_DWORD *)(a3 + 24) = v11;
    v14 = gpheapGlobal;
    if ( v11 + 16 < v11 )
      goto LABEL_7;
    if ( v11 + 16 < 0x20 )
    {
      v17 = 39;
    }
    else
    {
      v17 = v11 + 23;
      if ( v11 + 23 < v11 + 16 )
        goto LABEL_7;
    }
    v18 = v17 & 0xFFFFFFF8;
    v19 = gpheapGlobal;
    v30 = gpheapGlobal;
    byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v20 = v14;
    v21 = v14;
    v22 = v14;
    while ( 2 )
    {
      if ( v21 )
      {
        v13 = v20;
        for ( i = *(_QWORD *)(v22 + 40); ; i = *(_QWORD *)(v12 + 16) )
        {
          v12 = i - 16;
          if ( v22 + 40 == v12 + 16 )
          {
            v12 = 0LL;
            goto LABEL_17;
          }
          if ( v18 <= *(_DWORD *)(v12 + 4) )
            break;
        }
        if ( v12 )
        {
          v26 = *(_QWORD *)(v12 + 16);
          if ( *(_QWORD *)(v26 + 8) != v12 + 16 || (v27 = *(_QWORD **)(v12 + 24), *v27 != v12 + 16) )
            __fastfail(3u);
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          v24 = v18;
          if ( *(unsigned int *)(v12 + 4) >= (unsigned __int64)v18 + 32 )
          {
            v28 = v18 + v12;
            *(_DWORD *)v28 = 0;
            v29 = *(_DWORD *)(v12 + 4) - v18;
            *(_QWORD *)(v28 + 8) = v19;
            *(_DWORD *)(v28 + 4) = v29;
            *(_DWORD *)(v12 + 4) = v18;
            HeapInsertFreeList(v19);
          }
          goto LABEL_22;
        }
LABEL_17:
        if ( v18 > *(_DWORD *)(v19 + 8) - *(_DWORD *)(v19 + 32) )
        {
          v19 = *(_QWORD *)(v19 + 24);
          v21 = v19;
          v30 = v19;
          v20 = v19;
          v22 = v19;
          continue;
        }
        v12 = *(_QWORD *)(v19 + 32);
        v24 = v18;
        *(_QWORD *)(v19 + 32) = v12 + v18;
        *(_DWORD *)(v12 + 4) = v18;
LABEL_22:
        *(_DWORD *)v12 = 1381258056;
        *(_QWORD *)(v12 + 8) = v19;
        memset((void *)(v12 + 16), 0, v24 - 16);
LABEL_23:
        KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
        v5 = v31;
LABEL_7:
        v15 = (void *)((v12 + 16) & -(__int64)(v12 != 0));
        *(_QWORD *)(a3 + 32) = v15;
        if ( v15 )
        {
          memmove(v15, Src, *(unsigned int *)(a3 + 24));
        }
        else
        {
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(v5, 3221225626LL);
          PrintDebugMessage(131, (unsigned int)Src, 0, 0, 0LL);
          return (unsigned int)-1073741670;
        }
        return v9;
      }
      break;
    }
    if ( v14 == gpheapGlobal )
    {
      if ( v18 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v22 = v18 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v18 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v18 > 0x800000 )
          {
            v19 = 0LL;
            v25 = -1073741670;
LABEL_28:
            if ( v25 )
            {
              v19 = 0LL;
            }
            else
            {
              *(_QWORD *)(v19 + 16) = v14;
              *(_QWORD *)(v13 + 24) = v19;
              v12 = *(_QWORD *)(v19 + 32);
              *(_QWORD *)(v19 + 32) = v12 + v18;
              *(_DWORD *)(v12 + 4) = v18;
            }
            v24 = v18;
            if ( !v12 )
              goto LABEL_23;
            goto LABEL_22;
          }
          LODWORD(gdwGlobalHeapBlkSize) = v18;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v18 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v25 = NewGlobalHeap(&v30, v22);
    }
    else
    {
      v25 = NewLocalHeap(&v30, v22);
    }
    v19 = v30;
    goto LABEL_28;
  }
  v9 = -1072431103;
  if ( !a4 )
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(v5, 3222536193LL);
    PrintDebugMessage(132, **a2, (unsigned int)*a2, 0, 0LL);
  }
  return v9;
}
