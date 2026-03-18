/*
 * XREFs of RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0
 * Callers:
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409EB8A0 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x140466084 (RtlpRemoveArchDisallowedXStateFeatures.c)
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
