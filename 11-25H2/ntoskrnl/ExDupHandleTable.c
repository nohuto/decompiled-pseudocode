/*
 * XREFs of ExDupHandleTable @ 0x140971B80
 * Callers:
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExLockHandleTableEntry @ 0x1404018A0 (ExLockHandleTableEntry.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExCreateHandleTable @ 0x1409718A8 (ExCreateHandleTable.c)
 *     ExpAllocateHandleTable @ 0x1409719B0 (ExpAllocateHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x1409721A4 (ExpDuplicateSingleHandle.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1409729AC (ExpFreeHandleTable.c)
 */

__int64 __fastcall ExDupHandleTable(ULONG_PTR a1, unsigned int *a2, unsigned int a3, _BYTE *a4, PVOID *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __int64 *v7; // rbp
  _BYTE *v8; // r15
  unsigned int v9; // r14d
  unsigned int *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rcx
  unsigned int v15; // r10d
  int v16; // r12d
  _QWORD *v17; // r13
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned int j; // esi
  _QWORD *v27; // rcx
  _BYTE *v28; // rcx
  __int64 *v29; // rax
  __int64 *v30; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _DWORD *v33; // r15
  int v34; // eax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r9
  int v38; // edx
  _DWORD *v39; // rcx
  unsigned int i; // edx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 HandleTable; // rax
  unsigned int v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+48h] [rbp-70h]
  unsigned __int64 v46; // [rsp+50h] [rbp-68h]
  _QWORD *v47; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  ULONG_PTR v49; // [rsp+C0h] [rbp+8h]

  v49 = a1;
  v5 = *a2;
  v6 = 0LL;
  v7 = (__int64 *)a5;
  v8 = a4;
  v46 = v5;
  v9 = a3;
  v10 = a2;
  v11 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) != 0 )
      return 3221225485LL;
    for ( i = 1; i < v9; ++i )
    {
      v41 = *(_QWORD *)&a4[8 * i];
      if ( (v41 & 3) != 0 || v41 <= *(_QWORD *)&a4[8 * i - 8] )
        return 3221225485LL;
    }
    v42 = *(_QWORD *)&a4[8 * v9 - 8];
    if ( v42 >= v11 )
      return 3221225485LL;
    v11 = v42 + 4;
    v46 = v42 + 4;
  }
  else if ( (_DWORD)v5 )
  {
LABEL_57:
    v36 = ExpLookupHandleTableEntry(v10, v11 - 1024);
    v38 = 255;
    v39 = (_DWORD *)(v36 + 4080);
    while ( (*v39 & 0x40000) == 0 )
    {
      if ( (*(v39 - 4) & 0x40000) != 0 )
      {
        --v38;
LABEL_77:
        if ( !v38 )
        {
          v11 = v37;
          if ( v37 )
            goto LABEL_57;
        }
        break;
      }
      if ( (*(v39 - 8) & 0x40000) != 0 )
      {
        v38 -= 2;
        goto LABEL_77;
      }
      if ( (*(v39 - 12) & 0x40000) != 0 )
      {
        v38 -= 3;
        goto LABEL_77;
      }
      if ( (*(v39 - 16) & 0x40000) != 0 )
      {
        v38 -= 4;
        goto LABEL_77;
      }
      v39 -= 20;
      v38 -= 5;
      if ( !v38 )
        goto LABEL_77;
    }
    a1 = v49;
    v46 = v11;
  }
  if ( !v11 )
  {
    HandleTable = ExCreateHandleTable(a1, 1);
    *a5 = (PVOID)HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v12 = ExpAllocateHandleTable(a1, 0);
  *a5 = (PVOID)v12;
  if ( !v12 )
    return 3221225626LL;
  while ( 1 )
  {
    v13 = *a5;
    if ( *(unsigned int *)*a5 >= v11 )
      break;
    if ( !(unsigned __int8)ExpAllocateHandleTableEntrySlow(v13, 0LL) )
    {
      ExpFreeHandleTable(*a5);
      *a5 = 0LL;
      return 3221225626LL;
    }
  }
  v13[44] |= 8u;
  v15 = 0;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v47 = *a5;
  v44 = 0;
  v17 = (char *)*a5 + 72;
  do
  {
    v18 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v6 & 0xFFFFFFFFFFFFFFFCuLL) >= *v10 )
    {
      v21 = 0LL;
    }
    else
    {
      v19 = *((_QWORD *)v10 + 1);
      if ( (v19 & 3) == 1 )
      {
        v20 = *(_QWORD *)(v19 + 8 * (v18 >> 10) - 1);
LABEL_13:
        v21 = v20 + 4 * (v6 & 0x3FC);
        goto LABEL_14;
      }
      if ( (v19 & 3) != 0 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8 * (v18 >> 19) - 2) + 8 * ((v18 >> 10) & 0x1FF));
        goto LABEL_13;
      }
      v21 = v19 + 4 * v18;
    }
LABEL_14:
    v22 = *v7;
    v45 = v21;
    if ( v18 >= *(unsigned int *)*v7 )
    {
      v25 = 0LL;
      goto LABEL_19;
    }
    v23 = *(_QWORD *)(v22 + 8);
    if ( (v23 & 3) == 1 )
    {
      v24 = *(_QWORD *)(v23 + 8 * (v18 >> 10) - 1);
    }
    else
    {
      if ( (v23 & 3) == 0 )
      {
        v25 = v23 + 4 * v18;
        goto LABEL_18;
      }
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 8 * (v18 >> 19) - 2) + 8 * ((v18 >> 10) & 0x1FF));
    }
    v18 = v6 & 0x3FC;
    v25 = v24 + 4 * v18;
LABEL_18:
    v21 = v45;
LABEL_19:
    for ( j = 1; j < 0x100; ++j )
    {
      if ( v16 < 0 )
      {
        memset_0((void *)(16LL * j + v25), 0, 4096 - 16LL * j);
        v15 = v44;
        break;
      }
      if ( v9 && *(_QWORD *)&v8[8 * v15] != v6 + 4 * j )
        goto LABEL_24;
      v33 = (_DWORD *)(v21 + 16LL * j);
      if ( (*v33 & 0x40000) == 0 || !ExLockHandleTableEntry((__int64)a2, (signed __int64 *)(v21 + 16LL * j)) )
      {
        v9 = a3;
        if ( a3 )
          v16 = -1073741811;
        goto LABEL_24;
      }
      if ( (*v33 & 0x40000) == 0 )
      {
        ExUnlockHandleTableEntry(a2, v33);
        v9 = a3;
        if ( a3 )
          v16 = -1073741811;
        goto LABEL_24;
      }
      v34 = ExpDuplicateSingleHandle(
              v49,
              (unsigned int)v6 + 4 * j,
              (_DWORD)a2,
              (_DWORD)v33,
              (__int64)*a5,
              v25 + 16LL * j,
              a4 != 0LL);
      v16 = v34;
      if ( v34 < 0 )
        goto LABEL_85;
      if ( v34 == 263 )
      {
        v16 = 0;
LABEL_85:
        v9 = a3;
LABEL_24:
        v27 = (_QWORD *)(v25 + 16LL * j);
        *v17 = v27;
        v47[10] = v27;
        v17 = v27 + 1;
        *v27 = 0LL;
        goto LABEL_25;
      }
      v35 = *a5;
      v9 = a3;
      ++*((_DWORD *)*a5 + 22);
      if ( a3 )
      {
        v22 = v44;
        if ( v44 < a3 - 1 )
          v22 = ++v44;
      }
      if ( v35[12] )
        ExpUpdateDebugInfo((__int64)v35, (__int64)KeGetCurrentThread(), v6 + 4 * j, 1);
LABEL_25:
      v21 = v45;
      v15 = v44;
      v8 = a4;
    }
    v10 = a2;
    v6 += 1024LL;
    v7 = (__int64 *)a5;
  }
  while ( v6 < v46 );
  v28 = *a5;
  *v17 = 0LL;
  if ( v16 < 0 )
  {
    v28[44] |= 4u;
    *((_QWORD *)v28 + 4) = v28 + 24;
    *((_QWORD *)v28 + 3) = v28 + 24;
  }
  else
  {
    *((_DWORD *)v28 + 23) = *((_DWORD *)v28 + 22);
    v29 = KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
    v30 = v29;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v29, (__int64)&HandleTableListLock);
    if ( v30 )
      *((_BYTE *)v30 + 10) = 1;
    v31 = (_QWORD *)qword_140FD8FE0;
    v32 = (char *)*a5 + 24;
    if ( *(__int64 **)qword_140FD8FE0 != &HandleTableListHead )
      __fastfail(3u);
    *v32 = &HandleTableListHead;
    v32[1] = v31;
    *v31 = v32;
    qword_140FD8FE0 = (__int64)v32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v16 = 0;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v22, v18, v21);
  return (unsigned int)v16;
}
