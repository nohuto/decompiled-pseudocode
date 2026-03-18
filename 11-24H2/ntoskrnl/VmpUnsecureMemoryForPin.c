/*
 * XREFs of VmpUnsecureMemoryForPin @ 0x14079F88C
 * Callers:
 *     VmpSplitMemoryRange @ 0x1403AB5D4 (VmpSplitMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404D06B0 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14064B360 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x1407EDB58 (MmAdjustSecuredVirtualMemorySize.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmpUnsecureMemoryForPin(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx

  if ( a4 == a6 )
  {
    MmUnsecureVirtualMemory(a2);
    ExReleaseRundownProtection_0(a1 + 16);
  }
  else
  {
    v8 = a5 + a4;
    if ( a3 != a5 )
      v8 = a5;
    if ( (int)MmAdjustSecuredVirtualMemorySize(a2, v8 << 12, (a6 - a4) << 12) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
}
