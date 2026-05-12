/*
 * XREFs of NvmeControllerInitPhase3 @ 0x1400F0108
 * Callers:
 *     NvmeControllerAdvancedInitialize @ 0x1400EA71C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F3C7C (NvmeControllerReinitialize.c)
 * Callees:
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400C74E4 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400C7A20 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400C7C64 (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400C7EF4 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400C81A8 (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerConfigAsyncEvent @ 0x1400C8A10 (NvmeControllerConfigAsyncEvent.c)
 *     NvmeControllerGetCurrentWriteCacheState @ 0x1400C8B78 (NvmeControllerGetCurrentWriteCacheState.c)
 *     NvmeControllerGetTemperatureThreshold @ 0x1400C8FE0 (NvmeControllerGetTemperatureThreshold.c)
 *     NvmeControllerSetHostBehaviorSupport @ 0x1400C985C (NvmeControllerSetHostBehaviorSupport.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400C9A0C (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetWriteCacheEnable @ 0x1400CA614 (NvmeControllerSetWriteCacheEnable.c)
 *     NvmeControllerSyncHostTime @ 0x1400CA8F8 (NvmeControllerSyncHostTime.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400EB71C (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerCreateAsyncEventContext @ 0x1400EBF04 (NvmeControllerCreateAsyncEventContext.c)
 *     NvmeControllerStartAsyncEventCommands @ 0x1400F5140 (NvmeControllerStartAsyncEventCommands.c)
 */

__int64 __fastcall NvmeControllerInitPhase3(__int64 a1, char a2)
{
  int v2; // esi
  _BYTE *v3; // r14
  char v6; // bp
  __int64 v7; // rax
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = 0;
  v3 = *(_BYTE **)(a1 + 592);
  v6 = (*(_QWORD *)(a1 + 968) & 0x800000LL) != 0;
  if ( v3 )
  {
    NvmeControllerGetCommandEffectsLog((_QWORD *)a1, a2);
    NvmeControllerGetSupportedLogPagesLog((_QWORD *)a1, a2);
    NvmeControllerGetFeatureIdentifiersSupportedLog((_QWORD *)a1, a2);
    NvmeControllerCheckOCPCompliance(a1, a2);
    v7 = *(_QWORD *)(a1 + 1048);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 24) & 0x2000) != 0 )
      {
        v8 = v3[76];
        if ( (v8 & 1) == 0 && (v8 & 6) == 2 && (v8 & 8) == 0 && (*(_DWORD *)(a1 + 136) & 0x200000) == 0 )
          NvmeControllerGetHealthInfoLog((_QWORD *)a1, a2);
      }
    }
    v9 = *(_QWORD *)(a1 + 1048);
    if ( v9 && (*(_DWORD *)(v9 + 24) & 4) == 0 )
      NvmeControllerGetTemperatureThreshold(a1, a2);
    if ( *(_BYTE *)(a1 + 1728) != 1 )
    {
      if ( (*(_DWORD *)(a1 + 136) & 0x1000000) == 0 )
        NvmeControllerGetCloudSSDErrorRecoveryLog(a1, a2);
      if ( (v3[261] & 0x48) == 0x48 )
        NvmeControllerSetHostBehaviorSupport(a1, a2);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 520LL) & 0x40) != 0 )
        NvmeControllerSyncHostTime(a1, a2);
      NvmeControllerGetCurrentWriteCacheState(a1, a2);
      NvmeControllerSetWriteCacheEnable(a1, a2);
      if ( (v3[520] & 0x20) != 0 )
        NvmeControllerSetHostIdentifier(a1, a2);
      NvmeControllerConfigAsyncEvent(a1);
      if ( (int)NvmeControllerCreateAsyncEventContext(a1, v6) >= 0 )
        NvmeControllerStartAsyncEventCommands(a1);
    }
    v10 = *(_QWORD *)(a1 + 968);
    *(_DWORD *)(a1 + 1192) = 0;
    *(_QWORD *)(a1 + 968) = v10 | 1;
    *(_QWORD *)(a1 + 968) &= ~0x20000uLL;
    *(_QWORD *)(a1 + 968) &= ~0x200000uLL;
  }
  else
  {
    v2 = -1073741595;
  }
  v11 = *(_QWORD *)(a1 + 1288);
  if ( v11 )
  {
    if ( v2 < 0 )
      ++*(_DWORD *)(v11 + 28);
    else
      ++*(_DWORD *)(v11 + 24);
  }
  return (unsigned int)v2;
}
