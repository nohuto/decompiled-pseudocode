/*
 * XREFs of IommuDisableDevicePasid @ 0x140561480
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 *     IommupDeviceDisableSvm @ 0x1406FCEE8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IommuHvSetAddressSpace @ 0x140563050 (IommuHvSetAddressSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDisableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // r15
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v7; // rbx
  _QWORD *i; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *j; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned int v15; // ebp
  ULONG_PTR v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  KSPIN_LOCK *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int8 v28; // [rsp+30h] [rbp-58h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 96);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 24));
  v7 = 0LL;
  for ( i = *(_QWORD **)(v4 + 40); i != (_QWORD *)(v4 + 40); i = (_QWORD *)*i )
  {
    v7 = i;
    if ( (_QWORD *)i[2] == v5 )
      break;
  }
  v9 = v7 + 3;
  v10 = 0LL;
  for ( j = (_QWORD *)v7[3]; j != v9; j = (_QWORD *)*j )
  {
    v10 = j;
    if ( j[5] == v2 )
      break;
  }
  v12 = *v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 )
    goto LABEL_44;
  v13 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v13 != v10 )
    goto LABEL_44;
  v14 = HalpHvIommu == 0;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( !v14 )
  {
    v15 = *(_DWORD *)(v4 + 16);
    v16 = *(_QWORD *)(v2 + 40);
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v16, v15) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, v16, v15, 0LL);
    v3 = a2;
    CurrentIrql = v28;
  }
  if ( (_QWORD *)*v9 != v9 )
  {
    v7 = 0LL;
    goto LABEL_24;
  }
  if ( !HalpHvIommu )
    guard_dispatch_icall_no_overrides(v5[2], *(_QWORD *)(v3 + 40));
  v17 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v18 = (_QWORD *)v7[1], (_QWORD *)*v18 != v7) )
LABEL_44:
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
LABEL_24:
  if ( HalpHvIommu && *(_QWORD *)(v4 + 40) == v4 + 40 )
    IommuHvSetAddressSpace(a1, 0LL);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  --*(_DWORD *)(v2 + 36);
  v19 = v10[2];
  if ( *(_QWORD **)(v19 + 8) != v10 + 2 )
    goto LABEL_44;
  v20 = (_QWORD *)v10[3];
  if ( (_QWORD *)*v20 != v10 + 2 )
    goto LABEL_44;
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  if ( !*(_DWORD *)(v2 + 36) && !HalpHvIommu )
    guard_dispatch_icall_no_overrides(v5[2], *(_QWORD *)(v3 + 40));
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  KxReleaseSpinLock((volatile signed __int64 *)(v4 + 24));
  v21 = v5 + 51;
  if ( HalpHvIommu )
    v21 = v5 + 4;
  KxAcquireSpinLock(v21);
  v22 = v2 + 88;
  v23 = 512LL;
  do
  {
    v24 = *(_DWORD *)(v22 + 4);
    if ( (v24 & 1) != 0 && ((v24 >> 1) & 0xFFFFF) == *(_DWORD *)(v4 + 16) )
      *(_QWORD *)v22 = 0LL;
    v22 += 8LL;
    --v23;
  }
  while ( v23 );
  KxReleaseSpinLock((volatile signed __int64 *)v21);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v25, (__int64)v10);
  KeReleaseSpinLock(&IommupPasidTableLock, NewIrql);
  if ( v7 )
    HalpMmAllocCtxFree(v26, (__int64)v7);
  return 0LL;
}
