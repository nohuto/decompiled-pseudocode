/*
 * XREFs of NvmeAdapterStop @ 0x1400D901C
 * Callers:
 *     NvmeAdapterDevicePowerStopAdapter @ 0x14012DFFC (NvmeAdapterDevicePowerStopAdapter.c)
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019C384 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     NvmeIsAdapterControlSupported @ 0x140071734 (NvmeIsAdapterControlSupported.c)
 *     Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline @ 0x1400CB6AC (Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400CF800 (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterStopAdapter @ 0x1400D9520 (NvmeAdapterStopAdapter.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400DABE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 *     NvmeControllerStop @ 0x1400F51D8 (NvmeControllerStop.c)
 *     NvmeControllerTerminateCommandTimeoutDetectThread @ 0x1400F5B04 (NvmeControllerTerminateCommandTimeoutDetectThread.c)
 */

__int64 __fastcall NvmeAdapterStop(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // eax
  struct _ERESOURCE *v10; // r13
  char v11; // r12
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  int v14; // ecx
  __int64 v15; // rbx
  __int64 **v16; // rcx
  __int64 **v17; // r14
  __int64 *v18; // r13
  __int64 *i; // r15
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 **v23; // rax

  v2 = *(_QWORD *)(a1 + 400);
  v5 = 0;
  v6 = 0;
  if ( !v2 || !*(_QWORD *)(a1 + 408) )
    return (unsigned int)v5;
  if ( (*(_DWORD *)(v2 + 184) & 0x40000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1136);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 192LL) )
    {
      KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 128LL));
      KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 64LL));
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 192LL), 0, 1);
    }
    if ( a2 != 2 )
      NvmeControllerTerminateCommandTimeoutDetectThread(*(_QWORD *)(a1 + 1136));
    v8 = *(_DWORD *)(a1 + 84);
    if ( (unsigned int)(v8 - 5) <= 1 )
    {
      v9 = NvmeControllerRemove(*(_QWORD *)(a1 + 1136));
    }
    else
    {
      if ( v8 != 8 )
        goto LABEL_52;
      v9 = NvmeControllerStop(*(_QWORD *)(a1 + 1136));
    }
    v5 = v9;
    if ( v9 >= 0 )
      goto LABEL_52;
    return (unsigned int)v5;
  }
  if ( (*(_BYTE *)(a1 + 416) & 0x40) == 0 )
  {
    if ( (unsigned int)Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline() )
    {
      v15 = *(_QWORD *)(a1 + 592);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v15 + 24), 1u);
      v16 = *(__int64 ***)(a1 + 592);
      v17 = (__int64 **)*v16;
      while ( v17 != v16 )
      {
        v5 = NvmeAdapterHostGatewayAcquireRundown((__int64)(v17 - 3));
        if ( v5 >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(v17 + 45), 1u);
          v18 = (__int64 *)(v17 + 42);
          for ( i = v17[42]; i != v18; i = (__int64 *)*i )
          {
            v5 = NvmeAdapterSubsystemPortAcquireRundown(i - 1);
            if ( v5 >= 0 )
            {
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)i + 6, 1u);
              v20 = (__int64 *)i[75];
              if ( v20 != i + 75 )
              {
                do
                {
                  if ( *(_DWORD *)(*(_QWORD *)(v20[153] + 40) + 192LL) )
                  {
                    KeCancelTimer((PKTIMER)(*(_QWORD *)(v20[153] + 40) + 128LL));
                    KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(v20[153] + 40) + 64LL));
                    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v20[153] + 40) + 192LL), 0, 1);
                  }
                  v21 = v20[9];
                  *((_DWORD *)v20 + 126) = 3;
                  if ( (v21 & 1) == 0 )
                  {
                    v20[9] = v21 | 8;
                    v22 = (__int64 *)*v20;
                    if ( *(__int64 **)(*v20 + 8) != v20 || (v23 = (__int64 **)v20[1], *v23 != v20) )
                      __fastfail(3u);
                    *v23 = v22;
                    v22[1] = (__int64)v23;
                    --*((_DWORD *)i + 154);
                  }
                  NvmeAdapterDisconnectControllerInternal(
                    a1,
                    (__int64)(v20 - 8),
                    (const char *)i + 52,
                    (v20[9] & 1) == 0);
                  v20 = (__int64 *)*v20;
                }
                while ( v20 != i + 75 );
                v18 = (__int64 *)(v17 + 42);
              }
              ExReleaseResourceLite((PERESOURCE)i + 6);
              KeLeaveCriticalRegion();
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[4]);
            }
          }
          ExReleaseResourceLite((PERESOURCE)(v17 + 45));
          KeLeaveCriticalRegion();
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v17[4]);
        }
        v17 = (__int64 **)*v17;
        v16 = *(__int64 ***)(a1 + 592);
      }
      ExReleaseResourceLite((PERESOURCE)(v16 + 3));
      KeLeaveCriticalRegion();
    }
    goto LABEL_52;
  }
  KeEnterCriticalRegion();
  v10 = (struct _ERESOURCE *)(a1 + 1176);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v11 = 0;
  v12 = *(_QWORD **)(a1 + 1288);
  if ( v12 == (_QWORD *)(a1 + 1288) )
    goto LABEL_29;
  do
  {
    v13 = v12 - 14;
    if ( *(_DWORD *)(*(_QWORD *)(v12[147] + 40LL) + 192LL) )
    {
      KeCancelTimer((PKTIMER)(*(_QWORD *)(v13[161] + 40LL) + 128LL));
      KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(v13[161] + 40LL) + 64LL));
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v13[161] + 40LL) + 192LL), 0, 1);
    }
    NvmeControllerTerminateCommandTimeoutDetectThread(v12 - 14);
    v14 = *(_DWORD *)(a1 + 84);
    if ( (unsigned int)(v14 - 5) <= 1 )
    {
      NvmeControllerSetStorMQProperty(v12 - 14, 2147483657LL, 4LL);
      v5 = NvmeControllerRemove((int)v12 - 112);
      if ( v5 >= 0 )
        goto LABEL_27;
      *((_DWORD *)v13 + 298) = 48;
    }
    else if ( v14 == 8 )
    {
      v5 = NvmeControllerStop((int)v12 - 112);
      if ( v5 >= 0 )
        goto LABEL_27;
      *((_DWORD *)v13 + 298) = 47;
    }
    else if ( v5 >= 0 )
    {
      goto LABEL_27;
    }
    v11 = 1;
    v6 = v5;
LABEL_27:
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != (_QWORD *)(a1 + 1288) );
  v10 = (struct _ERESOURCE *)(a1 + 1176);
LABEL_29:
  ExReleaseResourceLite(v10);
  KeLeaveCriticalRegion();
  if ( v11 )
    return v6;
LABEL_52:
  if ( NvmeIsAdapterControlSupported(a1 + 168, 1) )
    return (unsigned int)NvmeAdapterStopAdapter(a1);
  return (unsigned int)v5;
}
