/*
 * XREFs of ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140400E0C
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1401C1514 (-IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 */

unsigned __int8 __fastcall IsValidCloneConfiguration(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // edx
  __int64 v3; // rax
  unsigned int j; // edi

  if ( !a1 )
    return 0;
  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *((_QWORD *)a1 + 37 * v3 + 7) &= ~0x2000000000uLL )
    v3 = i++;
  for ( j = 0; j < *((unsigned __int16 *)a1 + 10); ++j )
  {
    if ( !_bittest64((const signed __int64 *)a1 + 37 * j + 7, 0x25u) && !IsValidCloneGroup(a1, j) )
      return 0;
  }
  return 1;
}
