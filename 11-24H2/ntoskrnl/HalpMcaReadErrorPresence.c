/*
 * XREFs of HalpMcaReadErrorPresence @ 0x14047D4D4
 * Callers:
 *     HalpCmcPollProcessor @ 0x14047D32C (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140540418 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4BA0C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaReadErrorPresence(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  unsigned int v7; // r15d
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = -1073741275;
  if ( !HalpMcaNumberOfBanks )
  {
    a1 = 377LL;
    v11 = __readmsr(0x179u);
    a2 = (unsigned __int64)HIDWORD(v11) << 32;
    HalpMcaNumberOfBanks = v11;
  }
  v4 = 1025;
  v12 = 0LL;
  v5 = -1073733631;
  v6 = 0;
  v7 = (unsigned __int8)HalpMcaNumberOfBanks;
  while ( v6 < v7 )
  {
    if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) != 1 || (v10 = v5, !HalpMcaScalableRasSupported) )
      v10 = v4;
    if ( guard_dispatch_icall_no_overrides(v2, v10, &v12, v9) < 0 )
      return 0;
    ++v6;
    v5 += 16;
    v4 += 4;
  }
  return v3;
}
