/*
 * XREFs of RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E0BB8
 * Callers:
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409E0800 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x14045B69C (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

unsigned __int64 __fastcall RtlWow64GetCpuAreaEnabledFeatures(int *a1)
{
  unsigned __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int *v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v2 = *a1;
  if ( (v2 & 0x10000) != 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8];
    RtlpRemoveArchDisallowedXStateFeatures(v2, &v5);
    result = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v5 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      *v4 = v3 | 0x10040;
  }
  return result;
}
