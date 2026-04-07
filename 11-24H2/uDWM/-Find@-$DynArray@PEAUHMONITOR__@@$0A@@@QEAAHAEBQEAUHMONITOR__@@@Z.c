/*
 * XREFs of ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x1800D1CF4
 * Callers:
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800D3CFC (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x1800D50B0 (-_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<HMONITOR__ *,0>::Find(__int64 a1, _QWORD *a2)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *a2 == *(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
      return 1LL;
  }
  return 0LL;
}
