/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x140894D8C
 * Callers:
 *     EtwpTransitionToRealtime @ 0x140643468 (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14079B570 (EtwpIncrementTraceFile.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x140895150 (EtwpQueryTrace.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rax
  char PreviousMode; // r12
  volatile signed __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int *v16; // r8
  __int64 v17; // r9
  size_t v18; // r13
  _OWORD v19[2]; // [rsp+50h] [rbp-58h]

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v14 = 32LL * *(unsigned __int8 *)(a2 + 818);
    v15 = *(_QWORD *)(a2 + 1360);
    v19[0] = *(_OWORD *)(v14 + v15 + 4284);
    v19[1] = *(_OWORD *)(v14 + v15 + 4300);
    v16 = EtwpEnableFlagMap;
    v17 = 8LL;
    do
    {
      if ( (v16[1] & *((_DWORD *)v19 + ((unsigned __int64)(unsigned int)v16[1] >> 29)) & 0x1FFFFFFF) != 0 )
        *((_DWORD *)v19 + ((unsigned __int64)(unsigned int)*v16 >> 29)) |= *v16 & 0x1FFFFFFF;
      v16 += 2;
      --v17;
    }
    while ( v17 );
    *(_DWORD *)(a1 + 72) = v19[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 228);
  v4 = *(_DWORD *)(a2 + 248);
  if ( v4 <= *(_DWORD *)(a2 + 256) )
    v4 = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (*(_DWORD *)(a2 + 816) >> 4) & 1;
  *(_QWORD *)(a1 + 80) = v5;
  *(_QWORD *)(a1 + 80) = v5 | (*(_DWORD *)(a2 + 816) >> 26) & 2;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 212);
  if ( *(_DWORD *)a2 )
    v6 = *(_WORD *)a2;
  else
    v6 = -1;
  *(_WORD *)(a1 + 8) = v6;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v7 + 1296);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 200);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = (volatile signed __int64 *)(a2 + 688);
  v10 = KeAbPreAcquire(a2 + 688, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 688), v10, a2 + 688);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = *(unsigned __int16 *)(a2 + 152);
  if ( (_WORD)v12 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v12 + 2, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 152));
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 688));
  KeAbPostRelease(a2 + 688);
  if ( *(_WORD *)(a2 + 136) && *(_WORD *)(a1 + 146) )
  {
    if ( PreviousMode && *(_WORD *)(a1 + 144) && (*(_QWORD *)(a1 + 152) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    PsGetCurrentServerSiloGlobals();
    v18 = *(unsigned __int16 *)(a2 + 136);
    if ( (_WORD)v18 != *(_WORD *)(a1 + 144) || memcmp(*(const void **)(a2 + 144), *(const void **)(a1 + 152), v18) )
    {
      if ( PreviousMode )
        ProbeForWrite(*(volatile void **)(a1 + 152), v18 + 2, 2u);
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 136));
    }
  }
  return 0LL;
}
