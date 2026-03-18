/*
 * XREFs of UserDeleteW32Process @ 0x1C0036230
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall UserDeleteW32Process(struct _RTL_BITMAP *a1)
{
  PULONG v2; // rdx
  struct _RTL_BITMAP **v3; // rdx
  void **Buffer; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( !LODWORD(a1->Buffer) )
  {
    if ( *(&a1[66].SizeOfBitMap + 1) )
    {
      v3 = *(struct _RTL_BITMAP ***)&a1[67].SizeOfBitMap;
      if ( v3[1] != &a1[67] || (Buffer = (void **)a1[67].Buffer, *Buffer != &a1[67]) )
        __fastfail(3u);
      *Buffer = v3;
      v3[1] = (struct _RTL_BITMAP *)Buffer;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v2 = a1[45].Buffer;
    if ( v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
      RtlInitializeBitMap(a1 + 45, 0LL, 0);
    }
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
    PsSetProcessWin32Process(*(_QWORD *)&a1->SizeOfBitMap, 0LL, a1);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
  if ( !v5 )
    UserSessionSwitchLeaveCrit();
}
