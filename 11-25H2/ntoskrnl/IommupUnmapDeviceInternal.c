/*
 * XREFs of IommupUnmapDeviceInternal @ 0x140562918
 * Callers:
 *     IommuUnmapDevice @ 0x140562340 (IommuUnmapDevice.c)
 *     IommupDeviceDisableSvm @ 0x1406F34B8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvUnmapDevice @ 0x1405639CC (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupUnmapDeviceInternal(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v7; // rdi
  _QWORD *i; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rcx

  v3 = *(_QWORD **)(a2 + 96);
  v5 = v3[3];
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(v3[5]);
  }
  else
  {
    Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 16));
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v7 = 0LL;
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
  {
    v7 = i;
    if ( i[2] == v3[3] )
      break;
  }
  v9 = v7 + 3;
  v10 = (_QWORD *)v7[3];
  v11 = 0LL;
  while ( v10 != v9 )
  {
    v11 = v10;
    if ( (_QWORD *)v10[5] == v3 )
      break;
    v10 = (_QWORD *)*v10;
  }
  v12 = *v11;
  if ( *(_QWORD **)(*v11 + 8LL) != v11 )
    goto LABEL_30;
  v13 = (_QWORD *)v11[1];
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_30;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( (_QWORD *)*v9 != v9 )
  {
    v7 = 0LL;
    goto LABEL_20;
  }
  v14 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v15 = (_QWORD *)v7[1], (_QWORD *)*v15 != v7) )
LABEL_30:
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
LABEL_20:
  v16 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_30;
  v17 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v17 != v3 )
    goto LABEL_30;
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v19 = HalpHvIommu == 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  if ( v19 )
  {
    v19 = (*(_DWORD *)(a2 + 56))-- == 1;
    if ( v19 )
    {
      *(_DWORD *)(a2 + 60) = 0;
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
      _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
    }
  }
  HalpMmAllocCtxFree(v18, (__int64)v3);
  HalpMmAllocCtxFree(v20, (__int64)v11);
  if ( v7 )
    HalpMmAllocCtxFree(v21, (__int64)v7);
  return 0LL;
}
