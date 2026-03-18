/*
 * XREFs of EtwpFreeLoggerContext @ 0x14098EB6C
 * Callers:
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExDeleteTimer @ 0x14036F520 (ExDeleteTimer.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14045B910 (ExReInitializeRundownProtectionCacheAware.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14045B9C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     EtwpFreeCompression @ 0x1404649D8 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140464AA0 (KeRemoveQueueDpc.c)
 *     EtwpCancelPendingApcs @ 0x14048CB68 (EtwpCancelPendingApcs.c)
 *     KeGenericCallDpc @ 0x140495940 (KeGenericCallDpc.c)
 *     EtwpFreeApcPool @ 0x14049A350 (EtwpFreeApcPool.c)
 *     EtwpClearPartitionContext @ 0x1404BA2A8 (EtwpClearPartitionContext.c)
 *     EtwpFreePmcData @ 0x140798AA8 (EtwpFreePmcData.c)
 *     EtwpFreeLbrData @ 0x1407A24C4 (EtwpFreeLbrData.c)
 *     EtwpDestructIptData @ 0x1407A27FC (EtwpDestructIptData.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     SeDeleteClientSecurity @ 0x14098D0C0 (SeDeleteClientSecurity.c)
 *     EtwpFreeTraceBufferPool @ 0x14098EF58 (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x14098F160 (EtwpShutdownConsumers.c)
 *     EtwpFreeSoftRestartContext @ 0x14098F260 (EtwpFreeSoftRestartContext.c)
 *     EtwpFreeStackCache @ 0x140A3FE44 (EtwpFreeStackCache.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int i; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  char *v13; // rdi
  char *v14; // rcx
  char *v15; // rdi
  _QWORD *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  ULONG_PTR v19; // rcx
  char *v20; // rcx
  void *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 170);
  EtwpShutdownConsumers();
  v3 = *(unsigned int *)P;
  EtwpCancelPendingApcs((__int64)(P + 832));
  if ( (*((_DWORD *)P + 205) & 2) != 0 )
    EtwpCancelPendingApcs((__int64)(P + 1088));
  v4 = v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3));
  if ( *((_WORD *)P + 664) )
  {
    v18 = (void *)*((_QWORD *)P + 167);
    *((_WORD *)P + 664) = 0;
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)P + 167) = 0LL;
  }
  v5 = *((_QWORD *)P + 168);
  if ( v5 )
  {
    v19 = *(_QWORD *)(v5 + 8);
    if ( v19 )
    {
      v23 = 0LL;
      v22 = 0LL;
      ExDeleteTimer(v19, 1, 1, (unsigned int *)&v22);
    }
    v21 = *(void **)(*((_QWORD *)P + 168) + 24LL);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    ExFreePoolWithTag(*((PVOID *)P + 168), 0);
    *((_QWORD *)P + 168) = 0LL;
  }
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  EtwpFreeSoftRestartContext(P);
  EtwpFreeTraceBufferPool(P);
  v6 = KeNumberProcessors_0;
  for ( i = 0; i < v6; *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v4) = 0LL )
  {
    v8 = *((_QWORD *)P + 170);
    if ( v8 == EtwpHostSiloState )
      v9 = *(_QWORD *)(KeGetPrcb(i) + 35752) + 320LL;
    else
      v9 = *(_QWORD *)(v8 + 4144) + ((unsigned __int64)i << 6);
    ++i;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)P + 23);
  if ( *((_QWORD *)P + 90) )
    SeDeleteClientSecurity((__int64)(P + 704));
  v10 = (void *)*((_QWORD *)P + 97);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v11 & 0xFFFFFFFFFFFFFFF0uLL, (v11 & 0xF) + 1);
  EtwpFreeApcPool((__int64)(P + 832));
  if ( (*((_DWORD *)P + 204) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 131), 0);
  if ( (*((_DWORD *)P + 204) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_140E28C50);
  if ( (*((_DWORD *)P + 204) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 132));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4248), (unsigned __int8)P[818]);
  if ( *((_QWORD *)P + 133) )
    EtwpFreePmcData((__int64)P);
  if ( *((_QWORD *)P + 134) )
    EtwpFreeLbrData((__int64)P);
  if ( *((_QWORD *)P + 135) )
    EtwpDestructIptData((__int64)P);
  if ( (*((_DWORD *)P + 205) & 2) != 0 )
    EtwpFreeApcPool((__int64)(P + 1088));
  v12 = (void *)*((_QWORD *)P + 194);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = (char *)*((_QWORD *)P + 12);
  while ( v13 != P + 96 )
  {
    v14 = v13;
    v13 = *(char **)v13;
    ExFreePoolWithTag(v14, 0);
  }
  v15 = (char *)*((_QWORD *)P + 163);
  while ( v15 != P + 1304 )
  {
    v20 = v15;
    v15 = *(char **)v15;
    ExFreePoolWithTag(v20, 0);
  }
  while ( 1 )
  {
    v16 = (_QWORD *)*((_QWORD *)P + 14);
    if ( !v16 )
      break;
    *((_QWORD *)P + 14) = *v16;
    ExFreePoolWithTag(v16, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 198);
  v17 = (void *)*((_QWORD *)P + 199);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4132));
}
