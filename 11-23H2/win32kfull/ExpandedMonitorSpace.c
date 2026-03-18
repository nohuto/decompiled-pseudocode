/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01B8890
 * Callers:
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0151692 (VirtualizeMultiMonDigitizerSize.c)
 *     GetHimetricScaleForMonitor @ 0x1C01B9468 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00AF3A8 (ExpandMonitorSpaceVertex.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]

  v4 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2, a3) + 96) + 40LL) + 62LL);
  DpiForSystem = GetDpiForSystem(v5);
  v8 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v4, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v4, *((__int64 *)&v8 + 1));
  a1[1] = result;
  return result;
}
