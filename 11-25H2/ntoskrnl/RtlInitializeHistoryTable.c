/*
 * XREFs of RtlInitializeHistoryTable @ 0x140C25B40
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140C25A7C (RtlpFunctionAddressTableEntry.c)
 *     RtlpInitMachineFrameEntries @ 0x140C25AF0 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__fastcall __noreturn *v1)(int); // rax
  unsigned int *v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_141201945 = i;
    v2 = RtlLookupFunctionEntry((unsigned __int64)v1, &v6, 0LL);
    v3 = 2LL * i;
    v4 = v6 + *v2;
    v5 = v6 + v2[1];
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = v6;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_141201948 )
      qword_141201948 = v4;
    if ( v5 > qword_141201950 )
      qword_141201950 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  RtlpInitMachineFrameEntries((unsigned __int64 *)RtlpSafeMachineFrameEntries, 4u);
}
