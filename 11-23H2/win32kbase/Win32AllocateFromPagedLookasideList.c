/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C003E520
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C0096B94 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C0096E20 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F650 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

char *__fastcall Win32AllocateFromPagedLookasideList(unsigned __int8 *a1, void *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  NSInstrumentation *v4; // rcx
  char *result; // rax
  char *v6; // rsi
  char *v7; // rsi
  void *v8; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  if ( a1[5] )
  {
    v7 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a1 + 16), a2);
    if ( v7 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              v7,
                              a1[4],
                              BackTrace) )
        return v7 + 16;
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 16), v7, v8);
    }
    return 0LL;
  }
  v4 = (NSInstrumentation *)(a1 + 16);
  if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, a2);
    v6 = result;
    if ( result )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)*(unsigned int *)a1);
      result = v6 + 16;
      *(_QWORD *)v6 = *(unsigned int *)a1;
    }
  }
  else
  {
    result = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList(v4, a2);
    if ( result )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
  }
  return result;
}
