/*
 * XREFs of IommuDisableDevicePasid @ 0x140563850
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 *     IommupDeviceDisableSvm @ 0x1406FF2A8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IommuHvSetAddressSpace @ 0x140565420 (IommuHvSetAddressSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDisableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  _QWORD *i; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  _QWORD *j; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  bool v16; // zf
  unsigned int v17; // ebp
  ULONG_PTR v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  _QWORD *v24; // rax
  KSPIN_LOCK *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int8 v32; // [rsp+30h] [rbp-58h]
  bool v35; // [rsp+A0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 96);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v35 = *(_DWORD *)(a2 + 392) == 1;
  v5 = *(_QWORD **)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  CurrentIrql = KeGetCurrentIrql();
  v32 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 24));
  v9 = 0LL;
  for ( i = *(_QWORD **)(v4 + 40); i != (_QWORD *)(v4 + 40); i = (_QWORD *)*i )
  {
    v9 = i;
    if ( (_QWORD *)i[2] == v5 )
      break;
  }
  v11 = v9 + 3;
  v12 = 0LL;
  for ( j = (_QWORD *)v9[3]; j != v11; j = (_QWORD *)*j )
  {
    v12 = j;
    if ( j[5] == v2 )
      break;
  }
  v14 = *v12;
  if ( *(_QWORD **)(*v12 + 8LL) != v12 )
    goto LABEL_44;
  v15 = (_QWORD *)v12[1];
  if ( (_QWORD *)*v15 != v12 )
    goto LABEL_44;
  v16 = HalpHvIommu == 0;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  if ( !v16 )
  {
    v17 = *(_DWORD *)(v4 + 16);
    v18 = *(_QWORD *)(v2 + 40);
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v18, v17, v7, v8) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, v18, v17, 0LL);
    v3 = a2;
    CurrentIrql = v32;
  }
  if ( (_QWORD *)*v11 != v11 )
  {
    v9 = 0LL;
    goto LABEL_24;
  }
  if ( !HalpHvIommu )
    guard_dispatch_icall_no_overrides(v5[2], *(_QWORD *)(v3 + 40), *(unsigned int *)(v4 + 16), 0LL);
  v19 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v20 = (_QWORD *)v9[1], (_QWORD *)*v20 != v9) )
LABEL_44:
    __fastfail(3u);
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
LABEL_24:
  if ( HalpHvIommu && *(_QWORD *)(v4 + 40) == v4 + 40 )
    IommuHvSetAddressSpace(a1, 0LL);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  --*(_DWORD *)(v2 + 36);
  v23 = v12[2];
  if ( *(_QWORD **)(v23 + 8) != v12 + 2 )
    goto LABEL_44;
  v24 = (_QWORD *)v12[3];
  if ( (_QWORD *)*v24 != v12 + 2 )
    goto LABEL_44;
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  if ( !*(_DWORD *)(v2 + 36) && !HalpHvIommu )
  {
    LOBYTE(v21) = 1;
    LOBYTE(v22) = v35;
    guard_dispatch_icall_no_overrides(v5[2], *(_QWORD *)(v3 + 40), v21, v22);
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  KxReleaseSpinLock((volatile signed __int64 *)(v4 + 24));
  v25 = v5 + 51;
  if ( HalpHvIommu )
    v25 = v5 + 4;
  KxAcquireSpinLock(v25);
  v26 = v2 + 88;
  v27 = 512LL;
  do
  {
    v28 = *(_DWORD *)(v26 + 4);
    if ( (v28 & 1) != 0 && ((v28 >> 1) & 0xFFFFF) == *(_DWORD *)(v4 + 16) )
      *(_QWORD *)v26 = 0LL;
    v26 += 8LL;
    --v27;
  }
  while ( v27 );
  KxReleaseSpinLock((volatile signed __int64 *)v25);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v29, (__int64)v12);
  KeReleaseSpinLock(&IommupPasidTableLock, NewIrql);
  if ( v9 )
    HalpMmAllocCtxFree(v30, (__int64)v9);
  return 0LL;
}
