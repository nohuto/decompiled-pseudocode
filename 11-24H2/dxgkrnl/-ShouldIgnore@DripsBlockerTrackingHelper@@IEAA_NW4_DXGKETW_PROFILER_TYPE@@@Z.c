/*
 * XREFs of ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E7568
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E6EA4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1402E72A8 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E73EC (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::ShouldIgnore(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp+8h]

  v2 = 0LL;
  v4 = 0x1F4E000003F1LL;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= 2 )
      return 0;
    if ( a2 == *((_DWORD *)&v4 + v2) )
      break;
    v2 = (unsigned int)(v2 + 1);
  }
  return 1;
}
