/*
 * XREFs of ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14003E570
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14003E6A8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040F98 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char *__fastcall ScanLookAsideList_Allocate(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int *v2; // rsi
  __int64 UserSessionState; // rax
  void *v4; // rdx
  _QWORD *v5; // rbx
  NSInstrumentation *v6; // rcx
  __int64 v7; // rdi
  void *v8; // rax
  _QWORD *v10; // r14
  char *v11; // rbp
  void *v12; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = *(unsigned int **)(v1 + 4136);
  UserSessionState = W32GetUserSessionState(v1);
  v5 = 0LL;
  v6 = (NSInstrumentation *)(v2 + 4);
  v7 = UserSessionState + 72288;
  if ( *((_BYTE *)v2 + 5) )
  {
    v11 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v6, v4);
    if ( v11 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v7,
                              v11,
                              *((unsigned __int8 *)v2 + 4),
                              BackTrace) )
      {
        return v11 + 16;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((struct _PAGED_LOOKASIDE_LIST *)(v2 + 4), v11, v12);
      }
    }
  }
  else if ( (*(_DWORD *)v7 & 0xFFFFFFFD) != 0 )
  {
    v10 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v6, v4);
    if ( v10 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 112));
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *(NSInstrumentation::CPointerHashTable **)(v7 + 8),
        (const void *)*v2);
      v5 = v10 + 2;
      *v10 = *v2;
    }
  }
  else
  {
    v8 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v6, v4);
    if ( v8 )
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 112));
    return (char *)v8;
  }
  return (char *)v5;
}
