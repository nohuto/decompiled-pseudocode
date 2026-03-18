/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4
 * Callers:
 *     AllocAce @ 0x1400175A0 (AllocAce.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140019D9C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserReAllocPool @ 0x14001B940 (UserReAllocPool.c)
 *     EngAllocMem @ 0x14001C1E0 (EngAllocMem.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001CA10 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14003E570 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     Win32AllocPoolZInit @ 0x14003EF50 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x14003F1D0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14003F7D0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14003FBE0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x140041A40 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x14004ACF8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     AllocFreeTmpBuffer @ 0x140068090 (AllocFreeTmpBuffer.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x140079430 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     AllocThreadBufferWithTag @ 0x1400ABB70 (AllocThreadBufferWithTag.c)
 *     Win32AllocPool @ 0x1400BA170 (Win32AllocPool.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400BBF50 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401CF6D8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401CF948 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x140157D64 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Create@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAV12@XZ @ 0x140198758 (-Create@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x140198FAC (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?AcquireBackTrace@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x14019D3A0 (-AcquireBackTrace@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrum.c)
 *     ?Destroy@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401D005C (-Destroy@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1401D0328 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        NSInstrumentation::CBackTrace *a4)
{
  NSInstrumentation::CPrioritizedWriterLock *v6; // rcx
  void *v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  __int64 v11; // rsi
  bool v12; // r8
  NSInstrumentation::CPointerHashTable **v13; // rdi

  v6 = *(NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104);
  if ( v6 )
    goto LABEL_16;
  v9 = (void *)NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Create();
  if ( v9 && _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), (signed __int64)v9, 0LL) )
    NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Destroy(v9);
  v6 = *(NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104);
  if ( v6 )
  {
LABEL_16:
    v11 = NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::AcquireBackTrace(v6, a4);
    if ( v11 )
    {
      v13 = (NSInstrumentation::CPointerHashTable **)(a1 + 88);
      if ( !*(_QWORD *)(a1 + 88) )
        NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
          v10,
          (struct NSInstrumentation::CPointerHashTable **)(a1 + 88),
          v12);
      if ( *v13 && NSInstrumentation::CPointerHashTable::Insert(*v13, a2, (const void *)(a3 | v11)) )
        return 1;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104));
    }
  }
  return 0;
}
