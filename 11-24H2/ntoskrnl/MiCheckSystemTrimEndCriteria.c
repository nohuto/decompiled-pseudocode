/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x1402F33B8
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     MiCanFlushMakeProgress @ 0x140261320 (MiCanFlushMakeProgress.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiLogContinueTrim @ 0x1404B3950 (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // r9

  v4 = a1[2200];
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 2) - 2) <= 1u )
  {
    v17 = *(_QWORD *)(v4 + 288);
    if ( *(_QWORD *)(a2 + 96) < v17 )
      v18 = v17 - *(_QWORD *)(a2 + 80);
    else
      v18 = 0LL;
    *(_QWORD *)(v4 + 288) = v18;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v7 = a1[2336];
  if ( v7 >= *(_QWORD *)(a2 + 72) )
    return 1LL;
  if ( *(_QWORD *)(a2 + 96) >= *(_QWORD *)(a2 + 80) )
  {
    if ( v7 >= 0x420 )
      return 1LL;
    *(_QWORD *)(a2 + 96) = 0LL;
  }
  v8 = 0LL;
  v9 = (_QWORD *)(v4 + 344);
  v10 = 0;
  v11 = a2 - v4;
  do
  {
    v12 = *(_QWORD *)((char *)v9 + v11 - 336);
    *v9++ = v12;
    v13 = v12 + v8;
    if ( v10 < 6 )
      v13 = v8;
    ++v10;
    v8 = v13;
  }
  while ( v10 < 8 );
  *(_QWORD *)(v4 + 336) = v13;
  MiReleaseSpinLockExclusive(&SpinLock, a3);
  if ( a1[2424] >= 0x420uLL && (unsigned int)MiCanFlushMakeProgress((__int64)a1, 0, 0x22uLL) )
  {
    ++*(_DWORD *)(v4 + 488);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  else
  {
    ++*(_DWORD *)(v4 + 492);
  }
  v14 = a1[2336];
  v15 = *(_QWORD *)(a2 + 72);
  if ( v14 >= v15 )
  {
    ExAcquireSpinLockExclusive(&SpinLock);
    return 1LL;
  }
  v19 = v15 - v14;
  v20 = 0LL;
  v21 = *((unsigned __int8 *)&MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
  if ( (unsigned int)v21 < 8 )
  {
    v22 = (_QWORD *)(v4 + 344 + 8 * v21);
    v23 = (unsigned int)(8 - v21);
    do
    {
      v20 += *v22++;
      --v23;
    }
    while ( v23 );
  }
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  if ( v20 < v19 + 256 || *(char *)a2 < 0 )
    *(_BYTE *)a2 ^= (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    *(_BYTE *)a2 |= 0x80u;
  MiLogContinueTrim(a1, a2);
  ExAcquireSpinLockExclusive(&SpinLock);
  return 0LL;
}
