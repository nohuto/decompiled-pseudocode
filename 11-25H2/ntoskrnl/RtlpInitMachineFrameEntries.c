/*
 * XREFs of RtlpInitMachineFrameEntries @ 0x140C25AF0
 * Callers:
 *     RtlInitKernelModeSpecialMachineFrameEntries @ 0x140C25A58 (RtlInitKernelModeSpecialMachineFrameEntries.c)
 *     RtlInitializeHistoryTable @ 0x140C25B40 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 */

void __fastcall RtlpInitMachineFrameEntries(DWORD64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  PRUNTIME_FUNCTION v4; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    ImageBase = 0LL;
    v3 = a2;
    do
    {
      v4 = RtlLookupFunctionEntry(*a1, &ImageBase, 0LL);
      *a1++ = ImageBase + v4->UnwindInfoAddress;
      --v3;
    }
    while ( v3 );
  }
}
