/*
 * XREFs of EtwpTrackProviderRegistration @ 0x14083A130
 * Callers:
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 */

void __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // r15
  bool v4; // bp
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int *v7; // rdi
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned int *v11; // rdi
  unsigned int *v12; // rdi

  v1 = *(_WORD *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (v1 & 1) == 0;
  v5 = *(_QWORD *)(v3 + 648);
  if ( (v1 & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      v6 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v3 + 648), *(unsigned __int16 *)(v3 + 88), 0LL);
      v7 = (unsigned int *)v6;
      if ( v6 )
      {
        EtwpProviderArrivalCallback(v6, v4, a1);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v7 + 170) + 704LL) + 8LL * *v7),
          1u);
      }
    }
  }
  else
  {
    v8 = 1;
    v9 = 0LL;
    v10 = 16LL;
    do
    {
      if ( (*(_WORD *)(a1 + 100) & (unsigned __int16)v8) != 0 )
      {
        v11 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v3 + v9 + 134), 0LL);
        if ( v11 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(a1 + 98), 0xAu)
            || (v11[204] & 0x2000000) != 0 )
          {
            EtwpProviderArrivalCallback(v11, v4, a1);
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v11 + 170) + 704LL) + 8LL * *v11),
            1u);
        }
      }
      if ( (*(_WORD *)(a1 + 104) & (unsigned __int16)v8) != 0 )
      {
        v12 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                EtwpHostSiloState,
                                *(unsigned __int16 *)(*(_QWORD *)(v3 + 656) + v9 + 134),
                                0LL);
        if ( v12 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(a1 + 98), 0xAu)
            || (v12[204] & 0x2000000) != 0 )
          {
            EtwpProviderArrivalCallback(v12, v4, a1);
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v12 + 170) + 704LL) + 8LL * *v12),
            1u);
        }
      }
      v8 = __ROL4__(v8, 1);
      v9 += 32LL;
      --v10;
    }
    while ( v10 );
  }
}
