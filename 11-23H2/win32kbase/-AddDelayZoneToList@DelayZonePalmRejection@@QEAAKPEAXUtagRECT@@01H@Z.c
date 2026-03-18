/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01E5504
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x1C01E74F4 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0099700 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01FBECC (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  __int64 v10; // r8
  unsigned int v11; // r15d
  char v12; // si
  int v13; // edx
  NSInstrumentation::CLeakTrackingAllocator *v14; // rdi
  int v15; // eax
  __int64 Pool2; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned int v19; // r10d
  __int64 v20; // r11
  __int128 v21; // xmm0
  struct tagRECT *v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  CInpLockGuard *v37[7]; // [rsp+88h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v39; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v40; // [rsp+198h] [rbp+98h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v37,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v11 = 0;
  Object = 0LL;
  v33 = 0LL;
  v12 = 1;
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    v13 = CompositionInputObject::ResolveHandle(a2, 1LL, v10, (struct CompositionInputObject **)&Object);
    if ( v13 < 0 )
      goto LABEL_45;
  }
  if ( a4 )
  {
    LOBYTE(v10) = 1;
    v13 = CompositionInputObject::ResolveHandle(a4, 1LL, v10, (struct CompositionInputObject **)&v33);
    if ( v13 < 0 )
      goto LABEL_45;
  }
  v14 = gpLeakTrackingAllocator;
  v39 = 2053403477;
  v34 = 260LL;
  v36 = 104LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 104LL, 2053403477LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL);
    goto LABEL_20;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v40 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053403477, &v40) )
      {
        *(_QWORD *)&v35 = &v34;
        *((_QWORD *)&v35 + 1) = &v39;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v14,
                  (__int64)&v35,
                  &v36);
        goto LABEL_20;
      }
      Pool2 = ExAllocatePool2(v20, 120LL, v19);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v14 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v14,
                 Pool2,
                 v40,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_23;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v14,
                    (const void *)Pool2,
                    v40,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_20;
        }
        _InterlockedAdd64((volatile signed __int64 *)v14 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_44:
    v13 = -1073741801;
LABEL_45:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v12 = 0;
    }
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        4u,
        0x19u,
        (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
        v13);
    goto LABEL_52;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
    goto LABEL_44;
  v18 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v39);
  Pool2 = (__int64)v18;
  if ( !v18
    || (_InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL),
        *v18 = 2053403477LL,
        Pool2 = (__int64)(v18 + 2),
        v18 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v14 + 1),
      0x7A647355uLL);
  }
LABEL_20:
  if ( !Pool2 )
    goto LABEL_44;
LABEL_23:
  if ( Object )
    ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  if ( v33 )
    ObReferenceObjectByPointer(v33, 3u, ExCompositionObjectType, 0);
  v21 = (__int128)*a3;
  *(_QWORD *)(Pool2 + 72) = Object;
  *(_QWORD *)(Pool2 + 80) = v33;
  v22 = a5;
  *(_OWORD *)(Pool2 + 24) = v21;
  *(struct tagRECT *)(Pool2 + 40) = *v22;
  *(_QWORD *)(Pool2 + 16) = KeGetCurrentThread();
  if ( a6 )
    v23 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 53) + 56LL);
  else
    v23 = 0;
  *(_DWORD *)(Pool2 + 64) = v23;
  v11 = *((_DWORD *)this + 22);
  v24 = v11 + 1;
  if ( v11 == -1 )
    v24 = 1;
  *((_DWORD *)this + 22) = v24;
  *(_DWORD *)(Pool2 + 56) = v11;
  *(_DWORD *)(Pool2 + 92) = 3;
  v25 = *((_DWORD *)this + 26);
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_DWORD *)(Pool2 + 88) = v25;
  v26 = (__int64 *)((char *)this + 72);
  *(_BYTE *)(Pool2 + 60) = 0;
  v27 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v27 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v27;
  *(_QWORD *)(Pool2 + 8) = v26;
  *(_QWORD *)(v27 + 8) = Pool2;
  *v26 = Pool2;
  v28 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v28;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v12 = 0;
  }
  LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v17,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      4u,
      0x18u,
      (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
      v11,
      v28);
  v29 = *((_QWORD *)this + 16);
  if ( v29 )
  {
    v30 = *((unsigned int *)this + 1);
    v35 = (__int128)*a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v29, v30, v17, 3LL, &v35);
  }
LABEL_52:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v37);
  return v11;
}
