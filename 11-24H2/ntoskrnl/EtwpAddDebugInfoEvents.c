/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x1409D6910
 * Callers:
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409D3224 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpAddEventToBuffer @ 0x1409D6B64 (EtwpAddEventToBuffer.c)
 */

_UNKNOWN **__fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v6; // edi
  __int64 *v7; // r12
  __int64 v8; // rsi
  char v10; // r15
  bool v11; // zf
  int v12; // r13d
  unsigned __int64 *v13; // rbx
  _UNKNOWN **v14; // rsi
  __int64 v15; // rax
  int v16; // r15d
  int v17; // edx
  __int64 *v18; // rsi
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rcx
  _OWORD *v22; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  result = &retaddr;
  v25 = 0;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v7 = a4;
  v26 = 0LL;
  v8 = a2;
  if ( !a4 )
  {
    v26 = 0LL;
    v7 = &v26;
  }
  v10 = a5;
  v11 = (a5 & 2) == 0;
  v12 = a5 & 2;
  a5 = v12;
  if ( !v11 )
  {
    v13 = (unsigned __int64 *)(a1 + 688);
    result = (_UNKNOWN **)KeAbPreAcquire(a1 + 688, 0LL);
    v14 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      result = (_UNKNOWN **)ExfAcquirePushLockExclusiveEx(v13, (char *)result, (__int64)v13);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    v8 = a2;
  }
  if ( (v10 & 1) != 0 )
  {
    result = (_UNKNOWN **)(a1 + 96);
    if ( *result != (_UNKNOWN *)result )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( NtBuildLabEx[v15] );
      result = (_UNKNOWN **)EtwpAddEventToBuffer(v8, 66LL, v7, NtBuildLabEx, (int)v15 + 1, v6, &v25);
      if ( !result )
        goto LABEL_24;
      v6 -= v25;
    }
  }
  v16 = v10 & 4;
  if ( v16 )
  {
    result = *(_UNKNOWN ***)(a1 + 112);
    v17 = 0;
    if ( !result )
      goto LABEL_18;
    do
    {
      if ( *((_BYTE *)result + 40) )
        break;
      result = (_UNKNOWN **)*result;
      ++v17;
    }
    while ( result );
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 120);
  }
  if ( v17 )
  {
    v19 = 32 * v17 + 16;
    v25 = v19;
    if ( v19 <= v6 )
    {
      v20 = *(unsigned int *)(v8 + 48);
      v21 = v8 + v20;
      *(_DWORD *)(v8 + 48) = v19 + v20;
      *(_WORD *)(v21 + 4) = v19;
      *(_DWORD *)v21 = -1072627710;
      *(_WORD *)(v21 + 6) = 68;
      result = (_UNKNOWN **)*v7;
      *(_QWORD *)(v21 + 8) = *v7;
      v22 = (_OWORD *)(v21 + 16);
      if ( v22 )
      {
        result = *(_UNKNOWN ***)(a1 + 112);
        do
        {
          *v22 = *(_OWORD *)(result + 1);
          v22 += 2;
          *(v22 - 1) = *(_OWORD *)(result + 3);
          result = (_UNKNOWN **)*result;
          --v17;
        }
        while ( v17 );
        v6 -= v19;
      }
    }
  }
LABEL_18:
  v18 = *(__int64 **)(a1 + 96);
  if ( v18 != (__int64 *)(a1 + 96) )
  {
    do
    {
      if ( !v16 || !*((_BYTE *)v18 + 16) )
      {
        result = (_UNKNOWN **)EtwpAddEventToBuffer(a2, 64LL, v7, (char *)v18 + 28, *((_DWORD *)v18 + 5) - 4, v6, &v25);
        if ( !result )
          break;
        v6 -= v25;
      }
      v18 = (__int64 *)*v18;
    }
    while ( v18 != (__int64 *)(a1 + 96) );
    v12 = a5;
  }
LABEL_24:
  if ( v12 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    return (_UNKNOWN **)KeAbPostRelease(a1 + 688);
  }
  return result;
}
