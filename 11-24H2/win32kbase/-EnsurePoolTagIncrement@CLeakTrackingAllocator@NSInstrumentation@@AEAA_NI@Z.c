/*
 * XREFs of ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8
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
 *     Win32AllocPoolZInit @ 0x14003EF50 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x14003F1D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x140041A40 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x14004ACF8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 *     AllocFreeTmpBuffer @ 0x140068090 (AllocFreeTmpBuffer.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
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
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040F98 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x140157D64 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rsi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
         *((NSInstrumentation::CPointerHashTable **)this + 1),
         (const void *)a2) )
  {
    return 1;
  }
  GreEnterCriticalRegionAndAcquirePushLockExclusive((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 16));
  _InterlockedCompareExchange((volatile signed __int32 *)this + 8, 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 11);
  if ( *((_DWORD *)this + 10) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)this + 3) = &Event;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 8, -1, 0) != 1 )
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  if ( NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
         *((NSInstrumentation::CPointerHashTable **)this + 1),
         (const void *)v3)
    || NSInstrumentation::CPointerHashTable::Insert(
         *((NSInstrumentation::CPointerHashTable **)this + 1),
         (const void *)v3,
         (const void *)1) )
  {
    _InterlockedAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF);
    W32ReleasePushLockExclusive((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 16));
    return 1;
  }
  _InterlockedAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF);
  W32ReleasePushLockExclusive((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 16));
  return 0;
}
