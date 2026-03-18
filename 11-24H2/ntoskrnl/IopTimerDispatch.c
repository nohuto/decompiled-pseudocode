/*
 * XREFs of IopTimerDispatch @ 0x140495850
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceTimedEvent @ 0x1403B1020 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     _local_unwind @ 0x1404FDE70 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x14051AB4C (RtlpComputeEpilogueOffset.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine1 @ 0x1406B5360 (KiCustomAccessRoutine1.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  KIRQL v11; // r12
  int v12; // esi
  struct _LIST_ENTRY *i; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD v16[72]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v17; // [rsp+120h] [rbp-C8h]
  _BYTE v18[10]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+13Ah] [rbp-AEh]
  __int64 v20; // [rsp+172h] [rbp-76h]
  __int64 v21; // [rsp+182h] [rbp-66h]
  _DWORD *v22; // [rsp+190h] [rbp-58h]
  _OWORD v23[2]; // [rsp+198h] [rbp-50h] BYREF

  v22 = v16;
  v17 = a2;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v16[33] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset_0(v18, 0, 0x5AuLL);
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    v16[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v21 = a3;
    v19 = __ROL8__(a2, a3);
    v20 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine1(a2);
  }
  if ( *(_DWORD *)a2 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v12 = *(_DWORD *)a2;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v12; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v8 )
        {
          memset(v23, 0, sizeof(v23));
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v23, 0x40800000u);
          guard_dispatch_icall_no_overrides(i[2].Flink, i[1].Blink, v14, v15);
          EtwTraceTimedEvent(3910, 0x40800000u, (__int64)&i[1], 8, 0x500A02u, (__int64)v23);
        }
        else
        {
          guard_dispatch_icall_no_overrides(i[2].Flink, i[1].Blink, v9, v10);
        }
        --v12;
      }
    }
    KeReleaseSpinLock(&IopTimerLock, v11);
  }
}
