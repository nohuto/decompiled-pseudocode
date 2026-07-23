/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x140478BDC
 * Callers:
 *     HalpHvLpReadMcaStatusMsr @ 0x140478158 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  if ( qword_140FC1178 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  if ( (_DWORD)a2 )
    memset_0(a4, 0, 8LL * (unsigned int)a2);
  return 3221225473LL;
}
