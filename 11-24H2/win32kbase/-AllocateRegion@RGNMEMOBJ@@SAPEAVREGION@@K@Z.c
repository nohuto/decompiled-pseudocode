/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0
 * Callers:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1400653B4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140027710 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140027B90 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14003E6A8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040F98 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BEFB4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140151C9C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // rax
  struct REGION_CORE *v3; // rdx
  __int64 v4; // rcx
  REGION *v5; // rdi
  __int64 *SystemArgument1; // rsi
  Win32kRS *v7; // r14
  char *v8; // rbx
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // rcx
  unsigned __int8 *v12; // rsi
  __int64 UserSessionState; // rax
  void *v14; // rdx
  NSInstrumentation *v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  struct SCAN *pScan_mut; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  int v23; // eax
  __int64 Pool2; // rsi
  _QWORD *v25; // r15
  _QWORD *v26; // rax
  void *v27; // r8
  unsigned int v28; // edx
  char v29; // r15
  unsigned __int64 v30; // [rsp+50h] [rbp-198h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-188h] BYREF
  PVOID v32[20]; // [rsp+70h] [rbp-178h] BYREF
  PVOID BackTrace[20]; // [rsp+110h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+1F8h] [rbp+10h] BYREF
  unsigned __int64 v35; // [rsp+200h] [rbp+18h] BYREF
  __int64 v36; // [rsp+208h] [rbp+20h] BYREF

  v1 = (unsigned int)a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL) + 56LL) )
    return 0LL;
  v2 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  v5 = (REGION *)v2;
  if ( !v2 )
    return v5;
  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v7 = (Win32kRS *)(v2 + 24);
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
    v9 = *SystemArgument1;
    v10 = (*(__int64 (__fastcall **)(Win32kRS *, _QWORD))(v9 + 144))(v7, (unsigned int)v1);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v9 + 216))(v7) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v7, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v8, 2LL);
    KeLeaveCriticalRegion();
    if ( !v10 )
    {
      REGION::vDeleteREGION(v5);
      return 0LL;
    }
    return v5;
  }
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = v1;
  if ( v1 < *(_QWORD *)(v2 + 40) )
  {
    *(_QWORD *)(v2 + 40) = v1;
    RustOnZeroSizedScanCallback();
    SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  }
  if ( (_DWORD)v1 == 112 )
  {
    v11 = *(_QWORD *)(W32GetSessionState(v4) + 88);
    v12 = *(unsigned __int8 **)(v11 + 4136);
    UserSessionState = W32GetUserSessionState(v11);
    v15 = (NSInstrumentation *)(v12 + 16);
    v16 = UserSessionState + 72288;
    if ( v12[5] )
    {
      v25 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v15, v14);
      if ( v25 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v16,
                                v25,
                                v12[4],
                                BackTrace) )
          goto LABEL_31;
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v12 + 16), v25, v27);
      }
    }
    else
    {
      if ( (*(_DWORD *)v16 & 0xFFFFFFFD) == 0 )
      {
        v17 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v15, v14);
        if ( v17 )
          _InterlockedIncrement64((volatile signed __int64 *)(v16 + 112));
        goto LABEL_15;
      }
      v25 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v15, v14);
      if ( v25 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 112));
        NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
          *(NSInstrumentation::CPointerHashTable **)(v16 + 8),
          (const void *)*(unsigned int *)v12);
        *v25 = *(unsigned int *)v12;
LABEL_31:
        v17 = v25 + 2;
LABEL_15:
        *(_QWORD *)v7 = v17;
LABEL_16:
        SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
        goto LABEL_17;
      }
    }
    v17 = 0LL;
    goto LABEL_15;
  }
  if ( (unsigned int)v1 > 0x70 )
  {
    v20 = W32GetUserSessionState(v4);
    v34 = 1852011335;
    v21 = v1;
    v36 = 256LL;
    v30 = v1;
    v22 = v20 + 72288;
    v23 = *(_DWORD *)(v20 + 72288);
    switch ( v23 )
    {
      case 0:
        Pool2 = ExAllocatePool2(258LL, v1, 1852011335LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v22 + 112));
        goto LABEL_28;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v22,
               0x6E637347u)
          && v1 + 16 > v1 )
        {
          v26 = (_QWORD *)ExAllocatePool2(v36 | 2, v1 + 16, v34);
          Pool2 = (__int64)v26;
          if ( !v26
            || (_InterlockedIncrement64((volatile signed __int64 *)(v22 + 112)),
                *v26 = 1852011335LL,
                Pool2 = (__int64)(v26 + 2),
                v26 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v22 + 8),
              (const void *)0x6E637347);
          }
          goto LABEL_28;
        }
        break;
      case 2:
        v35 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v22,
                0x6E637347u,
                &v35) )
        {
          v31[0] = &v36;
          v31[1] = &v34;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v22,
                    v31,
                    &v30);
LABEL_28:
          *(_QWORD *)v7 = Pool2;
          goto LABEL_16;
        }
        v29 = 0;
        if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
        {
          v21 += 16LL;
          v29 = 1;
          v30 = v21;
        }
        Pool2 = ExAllocatePool2(258LL, v21, v28);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v22 + 128));
          memset(v32, 0, sizeof(v32));
          RtlCaptureStackBackTrace(0, 0x14u, v32, 0LL);
          if ( v29 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v22,
                                    Pool2,
                                    v35,
                                    v32) )
            {
              Pool2 += 16LL;
              goto LABEL_28;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v22,
                                       Pool2,
                                       v35,
                                       v32) )
          {
            goto LABEL_28;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v22 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_28;
  }
LABEL_17:
  if ( SystemArgument1 )
    pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v7, v3);
  else
    pScan_mut = *(struct SCAN **)v7;
  if ( !pScan_mut )
  {
    REGION::vDeleteREGION(v5);
    return 0LL;
  }
  return v5;
}
