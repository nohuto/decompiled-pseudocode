/*
 * XREFs of IommupUnmapDeviceInternal @ 0x1405651A8
 * Callers:
 *     IommuUnmapDevice @ 0x140564BD0 (IommuUnmapDevice.c)
 *     IommupDeviceDisableSvm @ 0x1406FF2A8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvUnmapDevice @ 0x14056623C (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupUnmapDeviceInternal(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v10; // rdi
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rcx

  v3 = *(_QWORD **)(a2 + 96);
  v5 = v3[3];
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(v3[5]);
  }
  else
  {
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    {
      v6 = 0LL;
      v8 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      LOBYTE(v6) = 1;
      v8 = v3[5];
    }
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 16), v8, v6, v7);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v10 = 0LL;
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
  {
    v10 = i;
    if ( i[2] == v3[3] )
      break;
  }
  v12 = v10 + 3;
  v13 = (_QWORD *)v10[3];
  v14 = 0LL;
  while ( v13 != v12 )
  {
    v14 = v13;
    if ( (_QWORD *)v13[5] == v3 )
      break;
    v13 = (_QWORD *)*v13;
  }
  v15 = *v14;
  if ( *(_QWORD **)(*v14 + 8LL) != v14 )
    goto LABEL_33;
  v16 = (_QWORD *)v14[1];
  if ( (_QWORD *)*v16 != v14 )
    goto LABEL_33;
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  if ( (_QWORD *)*v12 != v12 )
  {
    v10 = 0LL;
    goto LABEL_23;
  }
  v17 = *v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v18 = (_QWORD *)v10[1], (_QWORD *)*v18 != v10) )
LABEL_33:
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
LABEL_23:
  v19 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_33;
  v20 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v20 != v3 )
    goto LABEL_33;
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v22 = HalpHvIommu == 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  if ( v22 )
  {
    v22 = (*(_DWORD *)(a2 + 56))-- == 1;
    if ( v22 )
    {
      *(_DWORD *)(a2 + 60) = 0;
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
      _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
    }
  }
  HalpMmAllocCtxFree(v21, (__int64)v3);
  HalpMmAllocCtxFree(v23, (__int64)v14);
  if ( v10 )
    HalpMmAllocCtxFree(v24, (__int64)v10);
  return 0LL;
}
