/*
 * XREFs of IopAddStackSegmentKernelShadowStackToDump @ 0x14059D0B4
 * Callers:
 *     IoAddThreadStackToDump @ 0x14059CA40 (IoAddThreadStackToDump.c)
 *     IopMarkPagesForProcessorData @ 0x14059D9F0 (IopMarkPagesForProcessorData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopAddStackSegmentKernelShadowStackToDump(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 48) )
    return MmAddRangeToCrashDump(a1, (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFF000uLL) + 4096, 4096LL);
  else
    return 0LL;
}
