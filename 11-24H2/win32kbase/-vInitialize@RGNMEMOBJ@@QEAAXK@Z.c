/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1400259B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140026664 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14002686C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140068C60 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x140173EA0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140027710 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140027B90 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
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

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  __int64 v2; // r15
  struct REGION_CORE *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  char *SystemArgument1; // r14
  Win32kRS *v9; // rbx
  __int64 v10; // r12
  char *v11; // rbx
  __int64 v12; // rdi
  int v13; // r14d
  bool v14; // zf
  char *v15; // r14
  struct SCAN **v16; // rbx
  __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int8 *v20; // r14
  __int64 v21; // rax
  void *v22; // rdx
  NSInstrumentation *v23; // rcx
  __int64 v24; // rdi
  void *v25; // rax
  struct SCAN *pScan_mut; // rax
  unsigned __int64 v27; // rax
  struct SCAN *v28; // rax
  __int64 UserSessionState; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // r14
  int v32; // eax
  __int64 Pool2; // rdi
  _QWORD *v34; // r15
  _QWORD *v35; // rax
  void *v36; // r8
  unsigned int v37; // r10d
  char v38; // r15
  _QWORD v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v40[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[28]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v42; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v43; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v44; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v45; // [rsp+208h] [rbp+108h] BYREF

  v2 = 112LL;
  if ( a2 >= 0x70 )
    v2 = a2;
  v4 = *(struct REGION_CORE **)(W32GetSessionState(this) + 88);
  if ( !*(_QWORD *)(*((_QWORD *)v4 + 534) + 56LL) )
    goto LABEL_11;
  v5 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  v7 = v5;
  if ( !v5 )
    goto LABEL_12;
  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v9 = (Win32kRS *)(v5 + 24);
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v10 = (unsigned __int64)v9 & -(__int64)(v5 != 0);
    v11 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v12 = *(_QWORD *)SystemArgument1;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)SystemArgument1 + 144LL))(v10, (unsigned int)v2);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v12 + 216))(v10) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v10, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v11, 2LL);
    KeLeaveCriticalRegion();
    v14 = v13 == 0;
    goto LABEL_9;
  }
  *(_QWORD *)(v5 + 40) = 0LL;
  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    *(_QWORD *)(v5 + 32) = (unsigned int)v2;
    if ( (unsigned __int64)(unsigned int)v2 < *(_QWORD *)(v5 + 40) )
    {
      *(_QWORD *)(v5 + 40) = (unsigned int)v2;
      RustOnZeroSizedScanCallback();
    }
  }
  if ( (_DWORD)v2 != 112 )
  {
    UserSessionState = W32GetUserSessionState(v6);
    v30 = (unsigned int)v2;
    v43 = 1852011335;
    v44 = 256LL;
    v31 = UserSessionState + 72288;
    v45 = (unsigned int)v2;
    v32 = *(_DWORD *)(UserSessionState + 72288);
    switch ( v32 )
    {
      case 0:
        Pool2 = ExAllocatePool2(258LL, (unsigned int)v2, 1852011335LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v31 + 112));
        goto LABEL_41;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v31,
               0x6E637347u)
          && v2 + 16 > (unsigned __int64)(unsigned int)v2 )
        {
          v35 = (_QWORD *)ExAllocatePool2(v44 | 2, v2 + 16, v43);
          Pool2 = (__int64)v35;
          if ( !v35
            || (_InterlockedIncrement64((volatile signed __int64 *)(v31 + 112)),
                *v35 = 1852011335LL,
                Pool2 = (__int64)(v35 + 2),
                v35 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v31 + 8),
              (const void *)0x6E637347);
          }
          goto LABEL_41;
        }
        break;
      case 2:
        v42 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v31,
                0x6E637347u,
                &v42) )
        {
          v39[0] = &v44;
          v39[1] = &v43;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v31,
                    v39,
                    &v45);
LABEL_41:
          *(_QWORD *)v9 = Pool2;
          goto LABEL_28;
        }
        v38 = 0;
        if ( v30 < 0x1000 || (v30 & 0xFFF) != 0 )
        {
          v30 += 16LL;
          v38 = 1;
          v45 = v30;
        }
        Pool2 = ExAllocatePool2(258LL, v30, v37);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v31 + 128));
          memset(v40, 0, sizeof(v40));
          RtlCaptureStackBackTrace(0, 0x14u, v40, 0LL);
          if ( v38 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v31,
                                    Pool2,
                                    v42,
                                    v40) )
            {
              Pool2 += 16LL;
              goto LABEL_41;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v31,
                                       Pool2,
                                       v42,
                                       v40) )
          {
            goto LABEL_41;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v31 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_41;
  }
  v19 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  v20 = *(unsigned __int8 **)(v19 + 4136);
  v21 = W32GetUserSessionState(v19);
  v23 = (NSInstrumentation *)(v20 + 16);
  v24 = v21 + 72288;
  if ( v20[5] )
  {
    v34 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v23, v22);
    if ( v34 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 128));
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v24,
                              v34,
                              v20[4],
                              BackTrace) )
        goto LABEL_44;
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 136));
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v20 + 16), v34, v36);
    }
LABEL_54:
    v25 = 0LL;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)v24 & 0xFFFFFFFD) == 0 )
  {
    v25 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v23, v22);
    if ( v25 )
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 112));
    goto LABEL_27;
  }
  v34 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v23, v22);
  if ( !v34 )
    goto LABEL_54;
  _InterlockedIncrement64((volatile signed __int64 *)(v24 + 112));
  NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
    *(NSInstrumentation::CPointerHashTable **)(v24 + 8),
    (const void *)*(unsigned int *)v20);
  *v34 = *(unsigned int *)v20;
LABEL_44:
  v25 = v34 + 2;
LABEL_27:
  *(_QWORD *)v9 = v25;
LABEL_28:
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v9, v4);
  else
    pScan_mut = *(struct SCAN **)v9;
  v14 = pScan_mut == 0LL;
LABEL_9:
  if ( !v14 )
    goto LABEL_12;
  REGION::vDeleteREGION((REGION *)v7);
LABEL_11:
  v7 = 0LL;
LABEL_12:
  *(_QWORD *)this = v7;
  if ( v7 )
  {
    v15 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v16 = (struct SCAN **)(v7 + 24);
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v15 + 8, 2LL);
      v17 = *(_QWORD *)v15;
      (*(void (__fastcall **)(struct SCAN **))(*(_QWORD *)v15 + 160LL))(v16);
      if ( !(*(unsigned int (__fastcall **)(struct SCAN **))(v17 + 216))(v16) )
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v16, 0LL, 0LL, 0LL, 0LL, 0);
      ExReleasePushLockSharedEx(v15 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v27 = *(_QWORD *)(v7 + 32);
      *(_QWORD *)(v7 + 40) = 16LL;
      if ( v27 < 0x10 )
      {
        *(_QWORD *)(v7 + 40) = v27;
        RustOnZeroSizedScanCallback();
      }
      v14 = WPP_MAIN_CB.Dpc.SystemArgument1 == 0LL;
      *(_OWORD *)(v7 + 52) = 0LL;
      *(_DWORD *)(v7 + 48) = 1;
      if ( v14 )
        v28 = *v16;
      else
        v28 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v7 + 24), v4);
      *(_DWORD *)v28 = 0;
      *((_DWORD *)v28 + 1) = 0x80000000;
      *((_QWORD *)v28 + 1) = 0x7FFFFFFFLL;
    }
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    v18 = (_QWORD *)(*(_QWORD *)this + 80LL);
    v18[1] = v18;
    *v18 = v18;
  }
}
