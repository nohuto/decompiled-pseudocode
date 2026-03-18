/*
 * XREFs of EtwpFreeLoggerContext @ 0x1409D77E0
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     ExDeleteTimer @ 0x1403BF730 (ExDeleteTimer.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14045ADC0 (ExReInitializeRundownProtectionCacheAware.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14045AE50 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     EtwpFreeCompression @ 0x140463FA8 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140464070 (KeRemoveQueueDpc.c)
 *     EtwpCancelPendingApcs @ 0x14048C6E8 (EtwpCancelPendingApcs.c)
 *     KeGenericCallDpc @ 0x140494DA0 (KeGenericCallDpc.c)
 *     EtwpFreeApcPool @ 0x14049A610 (EtwpFreeApcPool.c)
 *     EtwpClearPartitionContext @ 0x1404B9100 (EtwpClearPartitionContext.c)
 *     EtwpFreePmcData @ 0x1407A7E78 (EtwpFreePmcData.c)
 *     EtwpFreeLbrData @ 0x1407B1894 (EtwpFreeLbrData.c)
 *     EtwpDestructIptData @ 0x1407B1BCC (EtwpDestructIptData.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     SeDeleteClientSecurity @ 0x14088D080 (SeDeleteClientSecurity.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x1409D7BCC (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x1409D7DD4 (EtwpShutdownConsumers.c)
 *     EtwpFreeSoftRestartContext @ 0x1409D7ED4 (EtwpFreeSoftRestartContext.c)
 *     EtwpFreeStackCache @ 0x140A44770 (EtwpFreeStackCache.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  unsigned int i; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rcx
  char *v18; // rdi
  char *v19; // rcx
  char *v20; // rdi
  _QWORD *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  ULONG_PTR v24; // rcx
  char *v25; // rcx
  void *v26; // rcx
  __int128 v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 170);
  EtwpShutdownConsumers();
  v3 = *(unsigned int *)P;
  EtwpCancelPendingApcs((__int64)(P + 832));
  if ( (*((_DWORD *)P + 205) & 2) != 0 )
    EtwpCancelPendingApcs((__int64)(P + 1088));
  v4 = v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 704) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 704) + 8 * v3));
  if ( *((_WORD *)P + 664) )
  {
    v23 = (void *)*((_QWORD *)P + 167);
    *((_WORD *)P + 664) = 0;
    ExFreePoolWithTag(v23, 0);
    *((_QWORD *)P + 167) = 0LL;
  }
  v5 = *((_QWORD *)P + 168);
  if ( v5 )
  {
    v24 = *(_QWORD *)(v5 + 8);
    if ( v24 )
    {
      v28 = 0LL;
      v27 = 0LL;
      ExDeleteTimer(v24, 1, 1, (unsigned int *)&v27);
    }
    v26 = *(void **)(*((_QWORD *)P + 168) + 24LL);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    ExFreePoolWithTag(*((PVOID *)P + 168), 0);
    *((_QWORD *)P + 168) = 0LL;
  }
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  EtwpFreeSoftRestartContext(P);
  EtwpFreeTraceBufferPool(P, v6, v7);
  v8 = KeNumberProcessors_0;
  for ( i = 0; i < v8; *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v4) = 0LL )
  {
    v10 = *((_QWORD *)P + 170);
    if ( v10 == EtwpHostSiloState )
      v11 = *(_QWORD *)(KeGetPrcb(i) + 35752) + 320LL;
    else
      v11 = *(_QWORD *)(v10 + 4416) + ((unsigned __int64)i << 6);
    ++i;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)P + 23);
  if ( *((_QWORD *)P + 90) )
    SeDeleteClientSecurity((__int64)(P + 704));
  v12 = (void *)*((_QWORD *)P + 97);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v13 & 0xFFFFFFFFFFFFFFF0uLL, (v13 & 0xF) + 1);
  EtwpFreeApcPool((__int64)(P + 832));
  if ( (*((_DWORD *)P + 204) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 131), 0);
  if ( (*((_DWORD *)P + 204) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_140E28E90);
  if ( (*((_DWORD *)P + 204) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 132));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4520), (unsigned __int8)P[818]);
  if ( *((_QWORD *)P + 133) )
    EtwpFreePmcData((__int64)P, v14, v15, v16);
  if ( *((_QWORD *)P + 134) )
    EtwpFreeLbrData((__int64)P, v14, v15, v16);
  if ( *((_QWORD *)P + 135) )
    EtwpDestructIptData((__int64)P, v14, v15, v16);
  if ( (*((_DWORD *)P + 205) & 2) != 0 )
    EtwpFreeApcPool((__int64)(P + 1088));
  v17 = (void *)*((_QWORD *)P + 194);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = (char *)*((_QWORD *)P + 12);
  while ( v18 != P + 96 )
  {
    v19 = v18;
    v18 = *(char **)v18;
    ExFreePoolWithTag(v19, 0);
  }
  v20 = (char *)*((_QWORD *)P + 163);
  while ( v20 != P + 1304 )
  {
    v25 = v20;
    v20 = *(char **)v20;
    ExFreePoolWithTag(v25, 0);
  }
  while ( 1 )
  {
    v21 = (_QWORD *)*((_QWORD *)P + 14);
    if ( !v21 )
      break;
    *((_QWORD *)P + 14) = *v21;
    ExFreePoolWithTag(v21, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 198);
  v22 = (void *)*((_QWORD *)P + 199);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 704) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 712) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4404));
}
