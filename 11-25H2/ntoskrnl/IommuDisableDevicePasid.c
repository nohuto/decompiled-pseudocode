/*
 * XREFs of IommuDisableDevicePasid @ 0x140560FB0
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 *     IommupDeviceDisableSvm @ 0x1406F34B8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IommuHvSetAddressSpace @ 0x140562C10 (IommuHvSetAddressSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDisableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  _QWORD *v4; // r15
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v6; // rbx
  _QWORD *i; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *j; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  bool v13; // zf
  unsigned int v14; // ebp
  ULONG_PTR v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  KSPIN_LOCK *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int8 v27; // [rsp+30h] [rbp-58h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 96);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  CurrentIrql = KeGetCurrentIrql();
  v27 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 24));
  v6 = 0LL;
  for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
  {
    v6 = i;
    if ( (_QWORD *)i[2] == v4 )
      break;
  }
  v8 = v6 + 3;
  v9 = 0LL;
  for ( j = (_QWORD *)v6[3]; j != v8; j = (_QWORD *)*j )
  {
    v9 = j;
    if ( j[5] == v2 )
      break;
  }
  v11 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 )
    goto LABEL_44;
  v12 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v12 != v9 )
    goto LABEL_44;
  v13 = HalpHvIommu == 0;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( !v13 )
  {
    v14 = *(_DWORD *)(v3 + 16);
    v15 = *(_QWORD *)(v2 + 40);
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v15) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, v15, v14, 0LL);
    CurrentIrql = v27;
  }
  if ( (_QWORD *)*v8 != v8 )
  {
    v6 = 0LL;
    goto LABEL_24;
  }
  if ( !HalpHvIommu )
    guard_dispatch_icall_no_overrides(v4[2]);
  v16 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v17 = (_QWORD *)v6[1], (_QWORD *)*v17 != v6) )
LABEL_44:
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
LABEL_24:
  if ( HalpHvIommu && *(_QWORD *)(v3 + 40) == v3 + 40 )
    IommuHvSetAddressSpace(a1, 0LL);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  --*(_DWORD *)(v2 + 36);
  v18 = v9[2];
  if ( *(_QWORD **)(v18 + 8) != v9 + 2 )
    goto LABEL_44;
  v19 = (_QWORD *)v9[3];
  if ( (_QWORD *)*v19 != v9 + 2 )
    goto LABEL_44;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( !*(_DWORD *)(v2 + 36) && !HalpHvIommu )
    guard_dispatch_icall_no_overrides(v4[2]);
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  KxReleaseSpinLock((volatile signed __int64 *)(v3 + 24));
  v20 = v4 + 51;
  if ( HalpHvIommu )
    v20 = v4 + 4;
  KxAcquireSpinLock(v20);
  v21 = v2 + 88;
  v22 = 512LL;
  do
  {
    v23 = *(_DWORD *)(v21 + 4);
    if ( (v23 & 1) != 0 && ((v23 >> 1) & 0xFFFFF) == *(_DWORD *)(v3 + 16) )
      *(_QWORD *)v21 = 0LL;
    v21 += 8LL;
    --v22;
  }
  while ( v22 );
  KxReleaseSpinLock((volatile signed __int64 *)v20);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v24, (__int64)v9);
  KeReleaseSpinLock(&IommupPasidTableLock, NewIrql);
  if ( v6 )
    HalpMmAllocCtxFree(v25, (__int64)v6);
  return 0LL;
}
