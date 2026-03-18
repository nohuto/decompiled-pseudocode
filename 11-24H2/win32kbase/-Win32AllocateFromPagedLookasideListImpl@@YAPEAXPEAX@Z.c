/*
 * XREFs of ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C
 * Callers:
 *     AllocQueue @ 0x140052060 (AllocQueue.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C19A0 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 * Callees:
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14003E6A8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040F98 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char *__fastcall Win32AllocateFromPagedLookasideListImpl(char *a1)
{
  __int64 UserSessionState; // rax
  void *v3; // rdx
  _QWORD *v4; // rbx
  struct _PAGED_LOOKASIDE_LIST *v5; // rcx
  __int64 v6; // rdi
  PVOID v7; // rax
  _QWORD *v9; // r14
  char *v10; // rbp
  void *v11; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v4 = 0LL;
  v5 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 16);
  v6 = UserSessionState + 72288;
  if ( a1[5] )
  {
    v10 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, v3);
    if ( v10 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v6,
                              v10,
                              (unsigned __int8)a1[4],
                              BackTrace) )
      {
        return v10 + 16;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((struct _PAGED_LOOKASIDE_LIST *)(a1 + 16), v10, v11);
      }
    }
  }
  else if ( (*(_DWORD *)v6 & 0xFFFFFFFD) != 0 )
  {
    v9 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, v3);
    if ( v9 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
        *(unsigned int *)a1);
      v4 = v9 + 2;
      *v9 = *(unsigned int *)a1;
    }
  }
  else
  {
    v7 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, v3);
    if ( v7 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    return (char *)v7;
  }
  return (char *)v4;
}
