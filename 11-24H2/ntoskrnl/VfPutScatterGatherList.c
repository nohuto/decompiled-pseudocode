/*
 * XREFs of VfPutScatterGatherList @ 0x140B87980
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B84C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x140B85170 (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViFlushDoubleBuffer @ 0x140B889E0 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

void __fastcall VfPutScatterGatherList(int a1, int *a2, char a3)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  KIRQL v11; // al
  _QWORD *v12; // rbx
  KIRQL v13; // r8
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // esi
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v10 = (_QWORD *)(AdapterInformationInternal + 88), (_QWORD *)*v10 == v10) )
  {
LABEL_12:
    LOBYTE(v8) = a3;
    guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v8, v9);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
    v12 = (_QWORD *)*v10;
    v13 = v11;
    while ( 1 )
    {
      v14 = v12 - 9;
      v15 = v14 + 9;
      if ( v10 == v14 + 9 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v11);
        goto LABEL_12;
      }
      if ( (int *)v14[8] == a2 )
        break;
      v12 = (_QWORD *)*v15;
    }
    v16 = (_QWORD *)*v15;
    v17 = *a2;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v18 = (_QWORD *)v14[10], (_QWORD *)*v18 != v15) )
      __fastfail(3u);
    *v18 = v16;
    v16[1] = v18;
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v13);
    VF_UNMARK_SCATTER_GATHER_LIST((__int64)a2, v14[12]);
    LOBYTE(v19) = a3;
    guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v19, v20);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v17);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v14[12], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v14);
  }
}
