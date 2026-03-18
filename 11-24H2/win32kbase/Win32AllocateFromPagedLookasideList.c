/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x14003F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14003E6A8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040F98 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char *__fastcall Win32AllocateFromPagedLookasideList(unsigned int *a1)
{
  __int64 UserSessionState; // rax
  void *v3; // rdx
  struct _PAGED_LOOKASIDE_LIST *v4; // rcx
  __int64 v5; // rbx
  char *result; // rax
  char *v7; // rsi
  char *v8; // rsi
  void *v9; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v4 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 4);
  v5 = UserSessionState + 72288;
  if ( *((_BYTE *)a1 + 5) )
  {
    v8 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v3);
    if ( v8 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v5,
                              v8,
                              *((unsigned __int8 *)a1 + 4),
                              BackTrace) )
        return v8 + 16;
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
      NSInstrumentation::PlatformFreeToPagedLookasideList((struct _PAGED_LOOKASIDE_LIST *)(a1 + 4), v8, v9);
    }
    return 0LL;
  }
  if ( (*(_DWORD *)v5 & 0xFFFFFFFD) != 0 )
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v3);
    v7 = result;
    if ( result )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
        (const void *)*a1);
      result = v7 + 16;
      *(_QWORD *)v7 = *a1;
    }
  }
  else
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, v3);
    if ( result )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
  }
  return result;
}
