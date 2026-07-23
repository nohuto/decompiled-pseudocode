/*
 * XREFs of InitSpecialMachineFrames @ 0x18002C2A4
 * Callers:
 *     LdrpInitialize @ 0x18002C238 (LdrpInitialize.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180041B10 (RtlLookupFunctionEntry.c)
 *     ZwDelayExecution @ 0x1801606D0 (ZwDelayExecution.c)
 */

int InitSpecialMachineFrames()
{
  PRUNTIME_FUNCTION v0; // rax
  ULONG64 *v1; // rbx
  __int64 v2; // rdi
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v0) = _InterlockedIncrement(&SpecialMachineFramesInitCount);
  if ( (_DWORD)v0 == 1 )
  {
    ImageBase = 0LL;
    v1 = (ULONG64 *)RtlpContinuationContextMachineFrameEntries;
    v2 = 2LL;
    do
    {
      v0 = RtlLookupFunctionEntry(*v1, &ImageBase, 0LL);
      *v1++ = ImageBase + v0->UnwindInfoAddress;
      --v2;
    }
    while ( v2 );
    _InterlockedOr(v4, 0);
    SpecialMachineFramesInitialized = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !SpecialMachineFramesInitialized )
      LODWORD(v0) = ZwDelayExecution(0, &DelayInterval);
  }
  return (int)v0;
}
