/*
 * XREFs of HalpMcaReadErrorPresence @ 0x140478664
 * Callers:
 *     HalpCmcPollProcessor @ 0x1404784BC (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14053DD18 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4DA4C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaReadErrorPresence(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  unsigned int v7; // r15d
  __int64 v9; // rdx
  unsigned __int64 v10; // rax

  v2 = a2;
  v3 = -1073741275;
  if ( !HalpMcaNumberOfBanks )
  {
    a1 = 377LL;
    v10 = __readmsr(0x179u);
    a2 = (unsigned __int64)HIDWORD(v10) << 32;
    HalpMcaNumberOfBanks = v10;
  }
  v4 = 1025;
  v5 = -1073733631;
  v6 = 0;
  v7 = (unsigned __int8)HalpMcaNumberOfBanks;
  while ( v6 < v7 )
  {
    if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) != 1 || (v9 = v5, !HalpMcaScalableRasSupported) )
      v9 = v4;
    if ( guard_dispatch_icall_no_overrides(v2, v9) < 0 )
      return 0;
    ++v6;
    v5 += 16;
    v4 += 4;
  }
  return v3;
}
