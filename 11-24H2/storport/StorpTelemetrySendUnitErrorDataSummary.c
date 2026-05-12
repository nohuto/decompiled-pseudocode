/*
 * XREFs of StorpTelemetrySendUnitErrorDataSummary @ 0x1400BB15C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x14003C190 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpIsTelemetryErrorEntryEmpty @ 0x140055A68 (StorpIsTelemetryErrorEntryEmpty.c)
 *     McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer @ 0x1400AD8E4 (McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1400B4A48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1400B4D58 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorDataSummary(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r12
  unsigned __int8 v4; // dl
  char IsTelemetryErrorEntryEmpty; // al
  char v6; // dl
  unsigned __int16 v7; // r8
  __int16 v8; // r9
  unsigned __int8 v9; // r10
  __int64 v10; // r14
  const wchar_t *v11; // rsi
  int v12; // [rsp+80h] [rbp-138h]
  int v13; // [rsp+88h] [rbp-130h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-80h] BYREF
  unsigned __int16 v15; // [rsp+188h] [rbp-30h]
  unsigned __int16 v16; // [rsp+18Ah] [rbp-2Eh]

  result = 0LL;
  v2 = (_WORD *)(a1 + 2480);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 2480) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2472), &LockHandle);
    v15 = *v2 - 1;
    if ( v15 >= 0xAu )
      v15 = 10;
    v4 = 0;
    do
    {
      IsTelemetryErrorEntryEmpty = StorpIsTelemetryErrorEntryEmpty((_BYTE *)(a1 + 8 * (v4 + 4LL * v4 + 367)));
      if ( IsTelemetryErrorEntryEmpty == (_BYTE)v8 )
        break;
      v7 += v8;
      v4 = v8 + v6;
    }
    while ( v4 < v9 );
    v16 = v7;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == (_BYTE)v8 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 2124) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitErrorDataCriticalData(a1);
    else
LABEL_18:
      StorpTelemetryLogUnitErrorDataMeasures(a1);
    if ( (byte_140171464 & 8) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = (const wchar_t *)&unk_140151214;
      if ( *(_QWORD *)(v10 + 5080) )
        v11 = *(const wchar_t **)(v10 + 5080);
      McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer(
        40 * (unsigned int)v15,
        a1 + 2536,
        40 * (unsigned int)v16,
        *(_DWORD *)(v10 + 56),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a1 + 2104,
        v10 + 5064,
        *(_DWORD *)(a1 + 3432),
        *(const wchar_t **)(v10 + 4720),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v11,
        v12,
        v13,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 2484),
        *(_DWORD *)(a1 + 2488),
        *(_DWORD *)(a1 + 2492),
        *(_DWORD *)(a1 + 2264),
        *(_DWORD *)(a1 + 1400),
        *(_DWORD *)(a1 + 2508),
        *(_DWORD *)(a1 + 2512),
        *(_BYTE *)(a1 + 2501),
        *(_BYTE *)(a1 + 2496),
        *(_BYTE *)(a1 + 2497),
        *(_BYTE *)(a1 + 2498),
        *(_BYTE *)(a1 + 2499),
        *(_BYTE *)(a1 + 2500),
        *(_DWORD *)(a1 + 2504),
        *(_DWORD *)(a1 + 2516),
        *(_QWORD *)(a1 + 2520),
        40 * v15,
        a1 + 2536,
        40 * v16,
        a1 + 2936);
    }
    memset_0(v2, 0, 0x1C8uLL);
    memset_0((void *)(a1 + 2936), 0, 0x190uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
