/*
 * XREFs of RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140008324
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline @ 0x14005669C (Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidLogPower @ 0x140065B30 (RaidLogPower.c)
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x140076B48 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int *v4; // r14
  __int64 v7; // rsi
  unsigned int v9; // edi
  __int64 v10; // r13
  bool v11; // zf
  int v12; // ecx
  __int64 *i; // rsi
  int v14; // r8d
  __int64 v15; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF

  v4 = (unsigned int *)(a1 + 4976);
  v7 = a2;
  if ( (qword_140170460 & 0x100) != 0 )
    RaidLogPower(
      a1,
      53,
      a2,
      *v4,
      (a4 != 0 ? 3LL : 1LL) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 111) >> 1) & 4,
      *(unsigned int *)(a1 + 6028));
  v9 = -1;
  if ( a2 == -1 )
    v10 = -1LL;
  else
    v10 = 10000 * v7;
  if ( (*(_BYTE *)(a1 + 110) & 0x40) == 0 || a4 )
  {
    result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4960), v10);
    v9 = v7;
    goto LABEL_29;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned int)Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = *(_DWORD *)(a1 + 6028) == *(_DWORD *)(a1 + 168);
LABEL_15:
    if ( !v11 || (*(_BYTE *)(a1 + 111) & 8) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v12 = *(_DWORD *)(a1 + 168);
  if ( (*(_BYTE *)(a1 + 112) & 0x20) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 6028) == v12;
    goto LABEL_15;
  }
  if ( v12 && *(_DWORD *)(a1 + 6028) == v12 )
  {
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  v9 = a2;
LABEL_18:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  if ( *(_DWORD *)(a1 + 160) )
  {
    for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
    {
      if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(i - 8) )
      {
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
        {
          v15 = i[226];
          McTemplateK0quuuqqtt_EtwWriteTransfer(
            (*(_DWORD *)(v15 + 32) >> 10) & 1,
            *(_DWORD *)(v15 + 28),
            v14,
            *(_DWORD *)(*(i - 5) + 56),
            *((_BYTE *)i + 40),
            *((_BYTE *)i + 41),
            *((_BYTE *)i + 42),
            *(_DWORD *)(v15 + 28),
            a2,
            (*(_DWORD *)(v15 + 32) & 0x400) != 0,
            (*(_DWORD *)(v15 + 32) & 0x800) != 0);
        }
        *(_DWORD *)(i[226] + 28) = a2;
        PoFxSetDeviceIdleTimeout(*(_QWORD *)i[226], v10);
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[225]);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4960), 10000LL * v9);
  *(_DWORD *)(a1 + 6024) = a2;
LABEL_29:
  *v4 = v9;
  return result;
}
