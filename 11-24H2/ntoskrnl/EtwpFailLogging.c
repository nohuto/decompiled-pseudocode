/*
 * XREFs of EtwpFailLogging @ 0x1403FABA0
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     EtwpReleaseTraceBuffer @ 0x1403FAE70 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x1403FAEA8 (EtwpTraceLostEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x1403FB298 (EtwpUpdateEventsLostCount.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpFailLogging(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        char a12)
{
  __int64 v12; // r14
  unsigned int v14; // esi
  __int64 v16; // r9
  unsigned __int16 v17; // bx
  bool v18; // zf
  unsigned int v19; // ecx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r11
  unsigned int *v23; // r11
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rax
  BOOLEAN v29; // al
  __int64 v31; // [rsp+A8h] [rbp+10h]
  __int64 v32; // [rsp+B0h] [rbp+18h]
  int v33; // [rsp+B0h] [rbp+18h]
  _QWORD *v34; // [rsp+B8h] [rbp+20h]

  v31 = a2;
  v12 = *(_QWORD *)(a3 + 648);
  v14 = 0;
  v16 = a1;
  if ( *(_DWORD *)(a4 + 768) )
  {
    v20 = 0LL;
    do
    {
      v21 = (_QWORD *)(a4 + 48 * v20);
      v34 = v21;
      v22 = *v21;
      v32 = *v21;
      if ( (*(_DWORD *)(*v21 + 12LL) & 0x8000000) == 0 )
      {
        *(_WORD *)(v21[1] + 2LL) = -16371;
        EtwpUpdateEventsLostCount(v22);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 40, a8, v32 + 136, a6, a7, a10, a11, a9, a12);
      }
      EtwpReleaseTraceBuffer(v34 + 2, a2, a3, v16);
      if ( a9 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 704) + 8LL * *v23),
          1u);
      v20 = ++v14;
    }
    while ( v14 < *(_DWORD *)(a4 + 768) );
    a2 = v31;
    LOBYTE(v16) = a1;
  }
  v17 = a5;
  v18 = !_BitScanForward(&v19, a5);
  if ( !v18 )
  {
    while ( 1 )
    {
      v17 &= v17 - 1;
      if ( EtwpLevelKeywordEnabled(a3 + 32 * (v19 + 4LL), v16, a2) )
        break;
LABEL_14:
      a2 = v31;
      v18 = !_BitScanForward(&v19, v17);
      if ( v18 )
        return;
    }
    v25 = *(unsigned __int16 *)(v24 + 6);
    v26 = v25;
    if ( a9 )
    {
      v29 = ExAcquireRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 704) + 8 * v25),
              1u);
      LOBYTE(v16) = a1;
      if ( !v29 )
        goto LABEL_14;
      LODWORD(v25) = v26;
    }
    v27 = 8 * v26;
    if ( (unsigned int)v25 >= *(_DWORD *)(v12 + 16)
      || (v28 = *(_QWORD *)(v27 + *(_QWORD *)(v12 + 712)), v33 = v28, (v28 & 1) != 0) )
    {
      if ( !a9 )
        goto LABEL_14;
    }
    else
    {
      EtwpUpdateEventsLostCount(v28);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(a3 + 40, a8, v33 + 136, a6, a7, a10, a11, a9, a12);
      if ( !a9 )
        goto LABEL_23;
    }
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 704) + v27), 1u);
LABEL_23:
    LOBYTE(v16) = a1;
    goto LABEL_14;
  }
}
