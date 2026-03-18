/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14000B680
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1401B1D6C (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 13);
  if ( a2 )
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  *a1 = a2;
  return a2;
}
