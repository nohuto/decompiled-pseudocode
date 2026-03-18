/*
 * XREFs of EtwpTrackProviderRegistration @ 0x14089E6D0
 * Callers:
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x1408B74C4 (EtwpRegisterKMProvider.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 */

void __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // r15
  char v4; // r14
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  BOOLEAN v11; // al
  __int64 v12; // r13
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // [rsp+60h] [rbp+8h]

  v1 = *(_WORD *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (v1 & 1) == 0;
  v5 = *(_QWORD *)(v3 + 392);
  v18 = v5;
  if ( (v1 & 8) == 0 )
  {
    v6 = 1;
    v7 = 0LL;
    v8 = 8LL;
    while ( 1 )
    {
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 100)) == 0 )
        goto LABEL_4;
      v9 = *(unsigned __int16 *)(v3 + v7 + 134);
      if ( (unsigned int)v9 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_4;
      if ( (*(_QWORD *)(*(_QWORD *)(v5 + 456) + 8 * v9) & 1) != 0 )
        goto LABEL_4;
      v10 = 8 * v9;
      v11 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v5 + 448) + 8 * v9), 1u);
      v5 = v18;
      if ( !v11 )
        goto LABEL_4;
      if ( (unsigned int)v9 >= *(_DWORD *)(v18 + 16) )
        goto LABEL_13;
      _mm_lfence();
      v12 = *(_QWORD *)(*(_QWORD *)(v18 + 456) + 8 * v9);
      if ( (v12 & 1) != 0 )
        break;
      if ( !*(_DWORD *)(v12 + 320) )
      {
        EtwpReleaseLoggerContext(v12, 0LL);
        goto LABEL_25;
      }
      if ( v12 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0 || (*(_DWORD *)(v12 + 816) & 0x2000000) != 0 )
          EtwpProviderArrivalCallback(v12, v4, a1);
        v13 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*(_QWORD *)(v12 + 1360) + 448LL)
                                                     + 8LL * *(unsigned int *)v12);
        goto LABEL_22;
      }
LABEL_4:
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 102)) != 0 )
      {
        v16 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + v7 + 134),
                0LL);
        v17 = v16;
        if ( v16 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0 || (*(_DWORD *)(v16 + 816) & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(v16, v4, a1);
          EtwpReleaseLoggerContext(v17, 0LL);
        }
        v5 = v18;
      }
      v6 = __ROL4__(v6, 1);
      v7 += 32LL;
      if ( !--v8 )
        return;
    }
    v10 = 8 * v9;
LABEL_13:
    v13 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v18 + 448) + v10);
LABEL_22:
    ExReleaseRundownProtectionCacheAwareEx(v13, 1u);
LABEL_25:
    v5 = v18;
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
  {
    v14 = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v3 + 88), 0LL);
    v15 = (unsigned int *)v14;
    if ( v14 )
    {
      EtwpProviderArrivalCallback(v14, v4, a1);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v15 + 170) + 448LL) + 8LL * *v15),
        1u);
    }
  }
}
