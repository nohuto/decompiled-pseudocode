/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x1409D6BE4
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x1409D3224 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // esi
  __int64 v6; // r13
  unsigned __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  __int64 *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // edx
  int v15; // r8d
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rcx
  size_t v19; // rbx
  char *v22; // [rsp+68h] [rbp+10h]

  v5 = a3 - *(_DWORD *)(a2 + 48);
  v6 = a1;
  if ( (a4 & 2) != 0 )
  {
    v7 = (unsigned __int64 *)(a1 + 688);
    v8 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      v9[10] = 1;
  }
  v10 = (__int64 *)(v6 + 1304);
  v11 = *(__int64 **)(v6 + 1304);
  if ( v11 != (__int64 *)(v6 + 1304) )
  {
    v12 = a2;
    while ( 1 )
    {
      if ( (a4 & 4) != 0 )
        v13 = *((_DWORD *)v11 + 6);
      else
        v13 = *((_DWORD *)v11 + 5);
      if ( v13 )
      {
        v15 = 16 * v13 + *((_DWORD *)v11 + 4) + 20;
        v16 = (v15 + 7) & 0xFFFFFFF8;
        if ( v16 > v5
          || (v17 = *(unsigned int *)(v12 + 48),
              v18 = v17 + v12,
              *(_DWORD *)(v12 + 48) = v16 + v17,
              *(_WORD *)(v18 + 4) = v15,
              *(_DWORD *)v18 = -1072627710,
              *(_WORD *)(v18 + 6) = 67,
              *(_QWORD *)(v18 + 8) = *(_QWORD *)(v12 + 88),
              v17 + v12 == -16) )
        {
LABEL_12:
          v6 = a1;
          break;
        }
        *(_DWORD *)(v17 + v12 + 16) = v13;
        v19 = 16LL * v13;
        v22 = (char *)(v17 + v12 + 20);
        memmove(v22, (char *)&v11[2 * (*((_DWORD *)v11 + 5) - v13) + 3] + 4, v19);
        memmove(&v22[v19], (char *)&v11[2 * *((unsigned int *)v11 + 5) + 3] + 4, *((unsigned int *)v11 + 4));
        if ( (a4 & 4) != 0 )
          *((_DWORD *)v11 + 6) = 0;
        v5 -= v16;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == v10 )
        goto LABEL_12;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 688));
    KeAbPostRelease(v6 + 688);
  }
  return 0LL;
}
