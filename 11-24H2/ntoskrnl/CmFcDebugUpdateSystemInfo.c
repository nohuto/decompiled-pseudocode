/*
 * XREFs of CmFcDebugUpdateSystemInfo @ 0x140667398
 * Callers:
 *     CmFcInitSystem1 @ 0x140C4C340 (CmFcInitSystem1.c)
 * Callees:
 *     Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline @ 0x14066861C (Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline @ 0x140668C2C (Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline @ 0x1406692F4 (Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmFcDebugUpdateSystemInfo(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // eax
  int v6; // ecx
  __int64 result; // rax

  dword_140E3EE68 = 1;
  v2 = &qword_140009558;
  v3 = 2511;
  v4 = 32LL;
  do
  {
    v5 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 && v5 != 9999 && v5 > v3 && (unsigned int)guard_dispatch_icall_no_overrides(0LL, a2) )
      v3 = *(_DWORD *)v2;
    v2 += 2;
    --v4;
  }
  while ( v4 );
  dword_140E3EE68 = dword_140E3EE68 & 0xFFFC003F | ((v3 & 0xFFF) << 6);
  dword_140E3EE68 = ((unsigned int)Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline() != 0 ? 0x40000 : 0) | dword_140E3EE68 & 0xFFFBFFFF;
  dword_140E3EE68 = ((unsigned int)Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline() != 0 ? 0x80000 : 0) | dword_140E3EE68 & 0xFFF7FFFF;
  v6 = (unsigned int)Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline() != 0 ? 0x100000 : 0;
  result = v6 | dword_140E3EE68 & 0xFFEFFFFF;
  dword_140E3EE68 = v6 | dword_140E3EE68 & 0xFFEFFFFF;
  return result;
}
