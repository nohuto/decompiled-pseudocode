/*
 * XREFs of PoDiagCaptureUsermodeStack @ 0x1409B2070
 * Callers:
 *     NtSetTimerResolution @ 0x1409B1920 (NtSetTimerResolution.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_DWORD *PoDiagCaptureUsermodeStack()
{
  __int64 Pool2; // rax
  _DWORD *v1; // rbx
  ULONG v2; // eax

  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v2 = RtlWalkFrameChain((PVOID *)(Pool2 + 8), 0x20u, 1u);
    if ( v2 )
    {
      *v1 = v2;
    }
    else
    {
      ExFreePoolWithTag(v1, 0x50455654u);
      return 0LL;
    }
  }
  return v1;
}
