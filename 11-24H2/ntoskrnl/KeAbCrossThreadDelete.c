/*
 * XREFs of KeAbCrossThreadDelete @ 0x1405C11AC
 * Callers:
 *     KeDeleteMutant @ 0x14040F588 (KeDeleteMutant.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAbCrossThreadRelease @ 0x1402F2188 (KiAbCrossThreadRelease.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KeAbThreadAreAllEntriesFree @ 0x1403E29D0 (KeAbThreadAreAllEntriesFree.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeAbCrossThreadDelete(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // r15
  bool v9; // zf
  unsigned int v10; // ecx
  char v11; // al
  unsigned __int8 v12; // r12
  volatile __int64 *v13; // rdi
  unsigned __int64 v14; // rcx
  char v15; // al
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r14d
  signed __int32 v25[8]; // [rsp+0h] [rbp-99h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-79h]
  __int64 v27; // [rsp+30h] [rbp-69h] BYREF
  __int128 v28; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-51h] BYREF
  __int128 Object; // [rsp+50h] [rbp-49h] BYREF
  __int128 v31; // [rsp+60h] [rbp-39h]
  __int128 v32; // [rsp+70h] [rbp-29h]
  struct _KDPC Dpc; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int8 v34; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v35; // [rsp+118h] [rbp+7Fh]

  v3 = 0LL;
  v35 = 0;
  Object = 0LL;
  v34 = 0;
  v31 = 0LL;
  v32 = 0LL;
  memset(&Dpc, 0, 60);
  v28 = 0LL;
  result = KeAbThreadAreAllEntriesFree(a2);
  if ( (_DWORD)result )
    return result;
  v6 = *(_QWORD *)(a2 + 1136);
  v27 = 0LL;
  result = *(unsigned __int16 *)(v6 + 8) | (unsigned int)*(unsigned __int16 *)(v6 + 10);
  v7 = result ^ ((1LL << *(_BYTE *)(v6 + 12)) - 1);
  do
  {
    v9 = !_BitScanReverse(&v10, v7);
    v35 = v10;
    if ( v9 )
      return result;
    v7 &= ~(1 << v10);
    v8 = v6 + 88LL * v10 + 16;
    result = *(_QWORD *)v8;
  }
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != (a1 & 0x7FFFFFFFFFFFFFFCLL) || !*(_BYTE *)(v8 + 10) );
  if ( result < 0 )
  {
    v11 = *(_BYTE *)v8 | 1;
    goto LABEL_53;
  }
  KiAcquireThreadLockRaiseToDpc(a2, &v34);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *(_BYTE *)(a2 + 388);
        v13 = 0LL;
        v14 = (unsigned int)v12 - 1;
        if ( v12 == 1 )
          break;
        if ( v12 == 2 )
        {
LABEL_17:
          v16 = *(unsigned int *)(a2 + 536);
          v3 = 0LL;
          if ( (int)v16 >= 0 )
          {
            v3 = KiProcessorBlock[v16];
            KiAcquirePrcbLocksForIsolationUnit(v3, 0LL, (unsigned __int64 *)&v27);
            if ( a2 == *(_QWORD *)(v3 + 8) )
              goto LABEL_47;
            if ( *(_BYTE *)(a2 + 388) == 2 && *(_DWORD *)(a2 + 536) == (_DWORD)v16 )
              __fastfail(0x4Au);
            goto LABEL_46;
          }
        }
        else
        {
          v14 = (unsigned int)v12 - 3;
          if ( v12 != 3 )
          {
            if ( v12 != 5 )
              goto LABEL_47;
            v15 = *(_BYTE *)(a2 + 112) & 7;
            if ( v15 == 1 || (unsigned __int8)(v15 - 3) <= 3u )
              goto LABEL_47;
            v12 = 2;
            goto LABEL_17;
          }
          v17 = *(unsigned int *)(a2 + 536);
          v3 = 0LL;
          if ( (int)v17 >= 0 )
          {
            v3 = KiProcessorBlock[v17];
            KiAcquirePrcbLocksForIsolationUnit(v3, 0LL, (unsigned __int64 *)&v27);
            if ( a2 == *(_QWORD *)(v3 + 16) )
              goto LABEL_47;
            if ( *(_BYTE *)(a2 + 388) == 3 && *(_DWORD *)(a2 + 536) == (_DWORD)v17 )
              __fastfail(0x1Eu);
            goto LABEL_46;
          }
        }
      }
      v18 = *(unsigned int *)(a2 + 536);
      v3 = 0LL;
      if ( (int)v18 < 0 )
        break;
      v3 = KiProcessorBlock[v18];
      KiAcquirePrcbLocksForIsolationUnit(v3, 0LL, (unsigned __int64 *)&v27);
      if ( *(_BYTE *)(a2 + 388) == 1 && *(_DWORD *)(a2 + 536) == (_DWORD)v18 )
        goto LABEL_47;
LABEL_46:
      KiReleasePrcbLocksForIsolationUnit(&v27);
      v3 = 0LL;
    }
    v19 = (unsigned int)v18;
    LODWORD(v19) = v18 & 0x7FFFFFFF;
    v20 = KiProcessorBlock[v19];
    v13 = *(volatile __int64 **)(v20 + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(v20 + 36424);
      *(_QWORD *)&v28 = 0LL;
      v21 = (_QWORD *)_InterlockedExchange64(v13, (__int64)&v28);
      if ( v21 )
        KxWaitForLockOwnerShip((__int64)&v28, v21);
    }
    else
    {
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *v13 );
      }
    }
    if ( *(_BYTE *)(a2 + 388) == 1 && *(_DWORD *)(a2 + 536) == (_DWORD)v18 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(&v28);
      v22 = v28;
      if ( (_QWORD)v28 )
      {
LABEL_37:
        *(_QWORD *)&v28 = 0LL;
        v23 = *((_QWORD *)&v28 + 1);
        if ( (((unsigned __int8)v23 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v22 + 8),
                                                         *((__int64 *)&v28 + 1))) & 4) != 0 )
          KeWakeAddressAll(v22 + 8, v23);
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)&v28 + 1),
                              0LL,
                              (signed __int64)&v28) != &v28 )
      {
        v22 = KxWaitForLockChainValid((__int64 *)&v28);
        goto LABEL_37;
      }
    }
    else
    {
      _InterlockedAnd64(v13, 0LL);
    }
  }
LABEL_47:
  if ( v12 == 2 )
  {
    v24 = *(_DWORD *)(a2 + 536);
    KiReleaseThreadStateLock(v14, v3, &v27, v13, (volatile signed __int64 **)&v28);
    KiReleaseThreadLockLowerIrql(a2, v34);
    *((_QWORD *)&v31 + 1) = a1;
    Dpc.DpcData = 0LL;
    *(_QWORD *)&v31 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&KeAbCrossThreadDeleteDpcRoutine;
    Dpc.DeferredContext = &Object;
    *(_QWORD *)&v32 = v8;
    *((_QWORD *)&v32 + 1) = a2;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    LOWORD(Dpc.TargetInfoAsUlong) = 275;
    Dpc.ProcessorHistory = 0LL;
    Dpc.Number = v24 + 2048;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    goto LABEL_54;
  }
  v9 = *(_BYTE *)(a2 + 113) == 0;
  Timeout = (PLARGE_INTEGER)&v28;
  if ( v9 )
  {
    KiReleaseThreadStateLock(v14, v3, &v27, v13, (volatile signed __int64 **)Timeout);
    KiReleaseThreadLockLowerIrql(a2, v34);
  }
  else
  {
    KiReleaseThreadStateLock(v14, v3, &v27, v13, (volatile signed __int64 **)Timeout);
    KiReleaseThreadLockLowerIrql(a2, v34);
    KeGenericCallDpcEx((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  }
  v11 = *(_BYTE *)v8 | 1;
LABEL_53:
  *(_BYTE *)v8 = v11;
LABEL_54:
  _InterlockedOr(v25, 0);
  return KiAbCrossThreadRelease(a1, v8, a2, v6);
}
