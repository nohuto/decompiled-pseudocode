/*
 * XREFs of IommuEnableDevicePasid @ 0x140561750
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IommuEnableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  _QWORD *v14; // rax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 96);
  v3 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v8 = (_QWORD *)HalpMmAllocCtxAlloc(v7, 40LL);
  v10 = v8;
  if ( !v8
    || (v8[2] = *(_QWORD *)(v2 + 24),
        v8[4] = v8 + 3,
        v8[3] = v8 + 3,
        v14 = (_QWORD *)HalpMmAllocCtxAlloc(v9, 64LL),
        (v3 = v14) == 0LL) )
  {
    v11 = -1073741670;
    goto LABEL_3;
  }
  memset_0(v14, 0, 0x40uLL);
  v15 = HalpHvIommu == 0;
  v3[5] = v2;
  v3[6] = v5;
  if ( v15 )
  {
    if ( !*(_BYTE *)(a2 + 274) && (*(_DWORD *)(v2 + 48) & 4) == 0 )
    {
      v11 = -1073741436;
      goto LABEL_3;
    }
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 16), *(_QWORD *)(a2 + 40));
    if ( v11 < 0 )
      goto LABEL_3;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 16), *(_QWORD *)(a2 + 40));
  }
  else
  {
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 40), *(unsigned int *)(v5 + 16));
    if ( v11 < 0 )
      goto LABEL_3;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 24));
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  ++*(_DWORD *)(v2 + 36);
  v17 = (_QWORD *)(v5 + 40);
  v18 = *(_QWORD **)(v5 + 40);
  if ( v18 == (_QWORD *)(v5 + 40) )
    goto LABEL_23;
  v19 = *(_QWORD *)(v2 + 24);
  do
  {
    v20 = v18[2];
    v21 = v18;
    if ( v20 == v19 )
      goto LABEL_25;
    v18 = (_QWORD *)*v18;
  }
  while ( v18 != v17 );
  if ( v20 != v19 )
  {
LABEL_23:
    v22 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) != v17 )
      goto LABEL_30;
    *v10 = v22;
    v21 = v10;
    v10[1] = v17;
    *(_QWORD *)(v22 + 8) = v10;
    *v17 = v10;
    v10 = 0LL;
  }
LABEL_25:
  v23 = v21 + 3;
  v24 = v21[3];
  if ( *(_QWORD **)(v24 + 8) != v21 + 3 )
    goto LABEL_30;
  v3[1] = v23;
  *v3 = v24;
  *(_QWORD *)(v24 + 8) = v3;
  v25 = (_QWORD *)(v2 + 56);
  *v23 = v3;
  v26 = v3;
  v27 = *(_QWORD *)(v2 + 56);
  v3 = 0LL;
  v28 = v26 + 2;
  if ( *(_QWORD *)(v27 + 8) != v2 + 56 )
LABEL_30:
    __fastfail(3u);
  v28[1] = v25;
  *v28 = v27;
  *(_QWORD *)(v27 + 8) = v28;
  *v25 = v28;
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  KxReleaseSpinLock((volatile signed __int64 *)(v5 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  KeReleaseSpinLock(&IommupPasidTableLock, NewIrql);
  if ( v10 )
    HalpMmAllocCtxFree(v12, (__int64)v10);
  if ( v3 )
    HalpMmAllocCtxFree(v12, (__int64)v3);
  return (unsigned int)v11;
}
