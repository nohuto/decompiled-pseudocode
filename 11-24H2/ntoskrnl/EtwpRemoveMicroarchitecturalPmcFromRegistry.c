/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407A932C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407A7CAC (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromRegistry(wchar_t *Str1, size_t MaxCount, __int64 a3)
{
  unsigned int v4; // esi
  int CpuVendor; // eax
  __int64 v7; // r9
  int v8; // r15d
  unsigned int v9; // edi
  wchar_t *Pool2; // rax
  __int64 v11; // rcx
  WCHAR *v12; // rbx
  int MatchingPmcRegistryGroup; // edi

  v4 = MaxCount;
  CpuVendor = KiGetCpuVendor();
  v7 = -1LL;
  v8 = CpuVendor;
  do
    ++v7;
  while ( aRegistryMachin_28[v7] );
  v9 = 2 * v7 + 514;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v9, 0x50777445u);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v11, v8, a3, v9, Pool2);
  if ( MatchingPmcRegistryGroup >= 0 )
    MatchingPmcRegistryGroup = EtwpRemoveMicroarchitecturalPmcFromPmcGroup(v12, Str1, v4);
  ExFreePoolWithTag(v12, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
