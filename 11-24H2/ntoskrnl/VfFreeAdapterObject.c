/*
 * XREFs of VfFreeAdapterObject @ 0x140B86540
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B84B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeAdapterObject(int a1, unsigned int a2)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  KIRQL v8; // r15
  __int64 i; // rbx
  __int64 v10; // rbx
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  __int64 **v13; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v6, v7);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 176));
    for ( i = *(_QWORD *)(AdapterInformationInternal + 160); ; i = *v11 )
    {
      v10 = i - 72;
      v11 = (__int64 *)(v10 + 72);
      if ( AdapterInformationInternal + 160 == v10 + 72 )
        break;
      if ( *(_DWORD *)(v10 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v10 + 52) = 3;
        }
        else
        {
          v12 = (__int64 *)*v11;
          if ( *(__int64 **)(*v11 + 8) != v11 || (v13 = *(__int64 ***)(v10 + 80), *v13 != v11) )
            __fastfail(3u);
          *v13 = v12;
          v12[1] = (__int64)v13;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
          if ( *(_QWORD *)(v10 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v10);
        }
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 176), v8);
  }
}
