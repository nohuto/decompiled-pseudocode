/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x14047DA4C
 * Callers:
 *     HalpHvLpReadMcaStatusMsr @ 0x14047CFC8 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  if ( qword_140FC0F18 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( (_DWORD)a2 )
    memset_0(a4, 0, 8LL * (unsigned int)a2);
  return 3221225473LL;
}
