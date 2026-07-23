/*
 * XREFs of PoDiagCaptureUsermodeStack @ 0x1409A93C0
 * Callers:
 *     NtSetTimerResolution @ 0x1409A8C70 (NtSetTimerResolution.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_DWORD *PoDiagCaptureUsermodeStack()
{
  __int64 Pool2; // rax
  _DWORD *v1; // rbx
  ULONG v2; // eax

  Pool2 = ExAllocatePool2(0x100uLL, 0x108uLL, 0x50455654u);
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
