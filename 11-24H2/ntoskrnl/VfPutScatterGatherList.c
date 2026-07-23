/*
 * XREFs of VfPutScatterGatherList @ 0x140B89980
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B86C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B86E20 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B86F40 (VF_ASSERT_IRQL.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x140B87170 (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViFlushDoubleBuffer @ 0x140B8A9E0 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 */

void __fastcall VfPutScatterGatherList(int a1, int *a2, char a3)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  _QWORD *v8; // rsi
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // r8
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  int v15; // esi
  _QWORD *v16; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v8 = (_QWORD *)(AdapterInformationInternal + 88), (_QWORD *)*v8 == v8) )
  {
LABEL_12:
    guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
    v10 = (_QWORD *)*v8;
    v11 = v9;
    while ( 1 )
    {
      v12 = v10 - 9;
      v13 = v12 + 9;
      if ( v8 == v12 + 9 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v9);
        goto LABEL_12;
      }
      if ( (int *)v12[8] == a2 )
        break;
      v10 = (_QWORD *)*v13;
    }
    v14 = (_QWORD *)*v13;
    v15 = *a2;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v12[10], (_QWORD *)*v16 != v13) )
      __fastfail(3u);
    *v16 = v14;
    v14[1] = v16;
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v11);
    VF_UNMARK_SCATTER_GATHER_LIST((__int64)a2, v12[12]);
    guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v15);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v12[12], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v12);
  }
}
