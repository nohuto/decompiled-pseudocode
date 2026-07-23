/*
 * XREFs of IommupUnmapDeviceInternal @ 0x140562DD8
 * Callers:
 *     IommuUnmapDevice @ 0x140562800 (IommuUnmapDevice.c)
 *     IommupDeviceDisableSvm @ 0x1406FCEE8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvUnmapDevice @ 0x140563F3C (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupUnmapDeviceInternal(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v8; // rdi
  _QWORD *i; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rcx

  v3 = *(_QWORD **)(a2 + 96);
  v5 = v3[3];
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(v3[5]);
  }
  else
  {
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      v6 = *(_QWORD *)(a2 + 40);
    else
      v6 = v3[5];
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 16), v6);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v8 = 0LL;
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
  {
    v8 = i;
    if ( i[2] == v3[3] )
      break;
  }
  v10 = v8 + 3;
  v11 = (_QWORD *)v8[3];
  v12 = 0LL;
  while ( v11 != v10 )
  {
    v12 = v11;
    if ( (_QWORD *)v11[5] == v3 )
      break;
    v11 = (_QWORD *)*v11;
  }
  v13 = *v12;
  if ( *(_QWORD **)(*v12 + 8LL) != v12 )
    goto LABEL_33;
  v14 = (_QWORD *)v12[1];
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_33;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( (_QWORD *)*v10 != v10 )
  {
    v8 = 0LL;
    goto LABEL_23;
  }
  v15 = *v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v16 = (_QWORD *)v8[1], (_QWORD *)*v16 != v8) )
LABEL_33:
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
LABEL_23:
  v17 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_33;
  v18 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v18 != v3 )
    goto LABEL_33;
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v20 = HalpHvIommu == 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  if ( v20 )
  {
    v20 = (*(_DWORD *)(a2 + 56))-- == 1;
    if ( v20 )
    {
      *(_DWORD *)(a2 + 60) = 0;
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
      _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
    }
  }
  HalpMmAllocCtxFree(v19, (__int64)v3);
  HalpMmAllocCtxFree(v21, (__int64)v12);
  if ( v8 )
    HalpMmAllocCtxFree(v22, (__int64)v8);
  return 0LL;
}
