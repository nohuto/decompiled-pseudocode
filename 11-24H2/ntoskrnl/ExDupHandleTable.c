/*
 * XREFs of ExDupHandleTable @ 0x140891770
 * Callers:
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExLockHandleTableEntry @ 0x140401530 (ExLockHandleTableEntry.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     ExpDuplicateSingleHandle @ 0x140891D94 (ExpDuplicateSingleHandle.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     ExCreateHandleTable @ 0x14094D1CC (ExCreateHandleTable.c)
 *     ExpAllocateHandleTable @ 0x14094D2D4 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1409DFCA4 (ExpFreeHandleTable.c)
 */

__int64 __fastcall ExDupHandleTable(ULONG_PTR a1, unsigned int *a2, unsigned int a3, _BYTE *a4, PVOID *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  PVOID *v7; // rbp
  _BYTE *v8; // r15
  unsigned int v9; // r14d
  unsigned int *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rcx
  unsigned int v15; // r11d
  int v16; // r12d
  _QWORD *v17; // r13
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned int j; // esi
  _QWORD *v26; // rcx
  _BYTE *v27; // rcx
  char *v28; // rax
  char *v29; // rbx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _DWORD *v32; // r15
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r9
  int v37; // edx
  _DWORD *v38; // rcx
  unsigned int i; // edx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r8
  __int64 HandleTable; // rax
  unsigned int v43; // [rsp+40h] [rbp-78h]
  __int64 v44; // [rsp+48h] [rbp-70h]
  unsigned __int64 v45; // [rsp+50h] [rbp-68h]
  _QWORD *v46; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  ULONG_PTR v48; // [rsp+C0h] [rbp+8h]

  v48 = a1;
  v5 = *a2;
  v6 = 0LL;
  v7 = a5;
  v8 = a4;
  v45 = v5;
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
    v40 = *(_QWORD *)&a4[8 * v9 - 8];
    if ( v40 >= v11 )
      return 3221225485LL;
    v11 = v40 + 4;
    v45 = v40 + 4;
  }
  else if ( (_DWORD)v5 )
  {
LABEL_56:
    v35 = ExpLookupHandleTableEntry(v10, v11 - 1024);
    v37 = 255;
    v38 = (_DWORD *)(v35 + 4080);
    while ( (*v38 & 0x40000) == 0 )
    {
      if ( (*(v38 - 4) & 0x40000) != 0 )
      {
        --v37;
LABEL_73:
        if ( !v37 )
        {
          v11 = v36;
          if ( v36 )
            goto LABEL_56;
        }
        break;
      }
      if ( (*(v38 - 8) & 0x40000) != 0 )
      {
        v37 -= 2;
        goto LABEL_73;
      }
      if ( (*(v38 - 12) & 0x40000) != 0 )
      {
        v37 -= 3;
        goto LABEL_73;
      }
      if ( (*(v38 - 16) & 0x40000) != 0 )
      {
        v37 -= 4;
        goto LABEL_73;
      }
      v38 -= 20;
      v37 -= 5;
      if ( !v37 )
        goto LABEL_73;
    }
    a1 = v48;
    v45 = v11;
  }
  if ( !v11 )
  {
    HandleTable = ExCreateHandleTable(a1, 1LL);
    *a5 = (PVOID)HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v12 = ExpAllocateHandleTable(a1);
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
  v46 = *a5;
  v43 = 0;
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
    v44 = v21;
    if ( v18 >= *(unsigned int *)*v7 )
    {
      v24 = 0LL;
      goto LABEL_18;
    }
    v22 = *((_QWORD *)*v7 + 1);
    if ( (v22 & 3) == 1 )
    {
      v23 = *(_QWORD *)(v22 + 8 * (v18 >> 10) - 1);
    }
    else
    {
      if ( (v22 & 3) == 0 )
      {
        v24 = v22 + 4 * v18;
        goto LABEL_18;
      }
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8 * (v18 >> 19) - 2) + 8 * ((v18 >> 10) & 0x1FF));
    }
    v24 = v23 + 4 * (v6 & 0x3FC);
LABEL_18:
    for ( j = 1; j < 0x100; ++j )
    {
      if ( v16 < 0 )
      {
        memset_0((void *)(16LL * j + v24), 0, 4096 - 16LL * j);
        v15 = v43;
        break;
      }
      if ( v9 && *(_QWORD *)&v8[8 * v15] != v6 + 4 * j )
        goto LABEL_23;
      v32 = (_DWORD *)(v21 + 16LL * j);
      if ( (*v32 & 0x40000) == 0 || !ExLockHandleTableEntry((__int64)a2, (signed __int64 *)(v21 + 16LL * j)) )
      {
        v9 = a3;
        if ( a3 )
          v16 = -1073741811;
        goto LABEL_23;
      }
      if ( (*v32 & 0x40000) == 0 )
      {
        ExUnlockHandleTableEntry(a2, v32);
        v9 = a3;
        if ( a3 )
          v16 = -1073741811;
        goto LABEL_23;
      }
      v33 = ExpDuplicateSingleHandle(
              v48,
              (unsigned int)v6 + 4 * j,
              (_DWORD)a2,
              (_DWORD)v32,
              (__int64)*a5,
              v24 + 16LL * j,
              a4 != 0LL);
      v16 = v33;
      if ( v33 < 0 )
        goto LABEL_79;
      if ( v33 == 263 )
      {
        v16 = 0;
LABEL_79:
        v9 = a3;
LABEL_23:
        v26 = (_QWORD *)(v24 + 16LL * j);
        *v17 = v26;
        v46[10] = v26;
        v17 = v26 + 1;
        *v26 = 0LL;
        goto LABEL_24;
      }
      v34 = *a5;
      v9 = a3;
      ++*((_DWORD *)*a5 + 22);
      if ( a3 && v43 < a3 - 1 )
        ++v43;
      if ( v34[12] )
        ExpUpdateDebugInfo((__int64)v34, (__int64)KeGetCurrentThread(), v6 + 4 * j, 1);
LABEL_24:
      v21 = v44;
      v15 = v43;
      v8 = a4;
    }
    v10 = a2;
    v6 += 1024LL;
    v7 = a5;
  }
  while ( v6 < v45 );
  v27 = *a5;
  *v17 = 0LL;
  if ( v16 < 0 )
  {
    v27[44] |= 4u;
    *((_QWORD *)v27 + 4) = v27 + 24;
    *((_QWORD *)v27 + 3) = v27 + 24;
  }
  else
  {
    *((_DWORD *)v27 + 23) = *((_DWORD *)v27 + 22);
    v28 = (char *)KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v28, (__int64)&HandleTableListLock);
    if ( v29 )
      v29[10] = 1;
    v30 = (_QWORD *)qword_140FD9FC0;
    v31 = (char *)*a5 + 24;
    if ( *(__int64 **)qword_140FD9FC0 != &HandleTableListHead )
      __fastfail(3u);
    *v31 = &HandleTableListHead;
    v31[1] = v30;
    *v30 = v31;
    qword_140FD9FC0 = (__int64)v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v16 = 0;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v16;
}
