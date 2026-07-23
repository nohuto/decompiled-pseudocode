/*
 * XREFs of RtlInitializeHistoryTable @ 0x140C38F50
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140C38E8C (RtlpFunctionAddressTableEntry.c)
 *     RtlpInitMachineFrameEntries @ 0x140C38F00 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__cdecl __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  ImageBase = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_141201945 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_141201948 )
      qword_141201948 = v4;
    if ( v5 > qword_141201950 )
      qword_141201950 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  RtlpInitMachineFrameEntries((DWORD64 *)RtlpSafeMachineFrameEntries, 4u);
}
