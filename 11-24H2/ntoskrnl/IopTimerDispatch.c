/*
 * XREFs of IopTimerDispatch @ 0x140490110
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x14051840C (RtlpComputeEpilogueOffset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine1 @ 0x1406B6300 (KiCustomAccessRoutine1.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v8; // r14d
  KIRQL v9; // r12
  int v10; // esi
  struct _LIST_ENTRY *i; // rbx
  _DWORD v12[72]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v13; // [rsp+120h] [rbp-C8h]
  _BYTE v14[10]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+13Ah] [rbp-AEh]
  __int64 v16; // [rsp+172h] [rbp-76h]
  __int64 v17; // [rsp+182h] [rbp-66h]
  _DWORD *v18; // [rsp+190h] [rbp-58h]
  _OWORD v19[2]; // [rsp+198h] [rbp-50h] BYREF

  v18 = v12;
  v13 = a2;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v12[33] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset_0(v14, 0, 0x5AuLL);
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    v12[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v17 = a3;
    v15 = __ROL8__(a2, a3);
    v16 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine1(a2);
  }
  if ( *(_DWORD *)a2 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v10 = *(_DWORD *)a2;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v10; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v8 )
        {
          memset(v19, 0, sizeof(v19));
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v19, 0x40800000u);
          guard_dispatch_icall_no_overrides(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(3910, 0x40800000u, (__int64)&i[1], 8, 0x500A02u, (__int64)v19);
        }
        else
        {
          guard_dispatch_icall_no_overrides(i[2].Flink, i[1].Blink);
        }
        --v10;
      }
    }
    KeReleaseSpinLock(&IopTimerLock, v9);
  }
}
