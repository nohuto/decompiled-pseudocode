/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14003FBE0
 * Callers:
 *     Win32UAFMAllocateFromPagedLookasideList @ 0x1401BEF40 (Win32UAFMAllocateFromPagedLookasideList.c)
 * Callees:
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14003E6A8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040F98 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_QWORD *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  bool v4; // zf
  struct _PAGED_LOOKASIDE_LIST *v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rsi
  void *v8; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( a2[5] )
  {
    v7 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((struct _PAGED_LOOKASIDE_LIST *)(a2 + 16), a2);
    if ( v7 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 16);
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              this,
                              v7,
                              (unsigned __int8)a2[4],
                              BackTrace) )
        return v7 + 2;
      _InterlockedIncrement64((volatile signed __int64 *)this + 17);
      NSInstrumentation::PlatformFreeToPagedLookasideList((struct _PAGED_LOOKASIDE_LIST *)(a2 + 16), v7, v8);
    }
    return 0LL;
  }
  v4 = (*(_DWORD *)this & 0xFFFFFFFD) == 0;
  v5 = (struct _PAGED_LOOKASIDE_LIST *)(a2 + 16);
  if ( !v4 )
  {
    v7 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, a2);
    if ( v7 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 14);
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *((NSInstrumentation::CPointerHashTable **)this + 1),
        (const void *)*(unsigned int *)a2);
      *v7 = *(unsigned int *)a2;
      return v7 + 2;
    }
    return 0LL;
  }
  result = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, a2);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)this + 14);
  return result;
}
