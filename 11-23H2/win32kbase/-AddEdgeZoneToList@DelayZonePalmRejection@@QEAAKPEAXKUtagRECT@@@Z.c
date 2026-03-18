/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01E5994
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C01E74A0 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  __int64 Pool2; // rbx
  char v11; // si
  _QWORD *v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // edi
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  CInpLockGuard *v25[8]; // [rsp+78h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v27; // [rsp+188h] [rbp+80h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v8 = gpLeakTrackingAllocator;
  v27 = 2053403477;
  v23 = 260LL;
  v24 = 104LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 104LL, 2053403477LL);
    v11 = 1;
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
    goto LABEL_16;
  }
  v11 = 1;
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v22[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053403477, v22) )
      {
        v22[0] = (unsigned __int64)&v23;
        v22[1] = (unsigned __int64)&v27;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v8,
                  (__int64)v22,
                  &v24);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v14, 120LL, v13);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v8,
                 Pool2,
                 v22[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v8,
                    (const void *)Pool2,
                    v22[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_31:
    v16 = 0;
    goto LABEL_32;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
    goto LABEL_31;
  v12 = (_QWORD *)ExAllocatePool2(v23 & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v27);
  Pool2 = (__int64)v12;
  if ( !v12
    || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
        *v12 = 2053403477LL,
        Pool2 = (__int64)(v12 + 2),
        v12 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v8 + 1),
      0x7A647355uLL);
  }
LABEL_16:
  if ( !Pool2 )
    goto LABEL_31;
LABEL_19:
  *(_QWORD *)(Pool2 + 72) = 0LL;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  *(struct tagRECT *)(Pool2 + 24) = *a4;
  *(_OWORD *)(Pool2 + 40) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(Pool2 + 64) = 0;
  *(_QWORD *)(Pool2 + 16) = CurrentThread;
  v16 = *((_DWORD *)this + 22);
  v17 = v16 + 1;
  if ( v16 == -1 )
    v17 = 1;
  *((_DWORD *)this + 22) = v17;
  v18 = (__int64 *)((char *)this + 72);
  *(_DWORD *)(Pool2 + 88) = 0;
  *(_DWORD *)(Pool2 + 56) = v16;
  *(_DWORD *)(Pool2 + 92) = a3;
  *(_QWORD *)(Pool2 + 96) = a2;
  *(_BYTE *)(Pool2 + 60) = 1;
  v19 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v19 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v19;
  *(_QWORD *)(Pool2 + 8) = v18;
  *(_QWORD *)(v19 + 8) = Pool2;
  *v18 = Pool2;
  v20 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v20;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      4u,
      0x1Au,
      (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
      v16,
      v20);
LABEL_32:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
  return v16;
}
