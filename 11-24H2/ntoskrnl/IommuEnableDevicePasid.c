/*
 * XREFs of IommuEnableDevicePasid @ 0x140563B20
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall IommuEnableDevicePasid(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  bool v7; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  int v13; // esi
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // r9
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 96);
  v3 = 0LL;
  v5 = a1[1];
  v6 = *a1;
  v7 = *(_DWORD *)(a2 + 392) == 1;
  v8 = *(_QWORD *)(v2 + 24);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v10 = (_QWORD *)HalpMmAllocCtxAlloc(v9, 40LL);
  v12 = v10;
  if ( !v10
    || (v10[2] = *(_QWORD *)(v2 + 24),
        v10[4] = v10 + 3,
        v10[3] = v10 + 3,
        v16 = (_QWORD *)HalpMmAllocCtxAlloc(v11, 64LL),
        (v3 = v16) == 0LL) )
  {
    v13 = -1073741670;
    goto LABEL_3;
  }
  memset_0(v16, 0, 0x40uLL);
  v19 = HalpHvIommu == 0;
  v3[5] = v2;
  v3[6] = v5;
  if ( v19 )
  {
    if ( !*(_BYTE *)(a2 + 274) && (*(_DWORD *)(v2 + 48) & 4) == 0 )
    {
      v13 = -1073741436;
      goto LABEL_3;
    }
    v13 = guard_dispatch_icall_no_overrides(
            *(_QWORD *)(v8 + 16),
            *(_QWORD *)(a2 + 40),
            *(unsigned int *)(v6 + 16),
            *(unsigned int *)(v5 + 16));
    if ( v13 < 0 )
      goto LABEL_3;
    LOBYTE(v20) = v7;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16), *(_QWORD *)(a2 + 40), 0LL, v20);
  }
  else
  {
    v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 40), *(unsigned int *)(v5 + 16), v17, v18);
    if ( v13 < 0 )
      goto LABEL_3;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 24));
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  ++*(_DWORD *)(v2 + 36);
  v22 = (_QWORD *)(v5 + 40);
  v23 = *(_QWORD **)(v5 + 40);
  if ( v23 == (_QWORD *)(v5 + 40) )
    goto LABEL_23;
  v24 = *(_QWORD *)(v2 + 24);
  do
  {
    v25 = v23[2];
    v26 = v23;
    if ( v25 == v24 )
      goto LABEL_25;
    v23 = (_QWORD *)*v23;
  }
  while ( v23 != v22 );
  if ( v25 != v24 )
  {
LABEL_23:
    v27 = *v22;
    if ( *(_QWORD **)(*v22 + 8LL) != v22 )
      goto LABEL_30;
    *v12 = v27;
    v26 = v12;
    v12[1] = v22;
    *(_QWORD *)(v27 + 8) = v12;
    *v22 = v12;
    v12 = 0LL;
  }
LABEL_25:
  v28 = v26 + 3;
  v29 = v26[3];
  if ( *(_QWORD **)(v29 + 8) != v26 + 3 )
    goto LABEL_30;
  v3[1] = v28;
  *v3 = v29;
  *(_QWORD *)(v29 + 8) = v3;
  v30 = (_QWORD *)(v2 + 56);
  *v28 = v3;
  v31 = v3;
  v32 = *(_QWORD *)(v2 + 56);
  v3 = 0LL;
  v33 = v31 + 2;
  if ( *(_QWORD *)(v32 + 8) != v2 + 56 )
LABEL_30:
    __fastfail(3u);
  v33[1] = v30;
  *v33 = v32;
  *(_QWORD *)(v32 + 8) = v33;
  *v30 = v33;
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  KxReleaseSpinLock((volatile signed __int64 *)(v5 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  KeReleaseSpinLock(&IommupPasidTableLock, NewIrql);
  if ( v12 )
    HalpMmAllocCtxFree(v14, (__int64)v12);
  if ( v3 )
    HalpMmAllocCtxFree(v14, (__int64)v3);
  return (unsigned int)v13;
}
