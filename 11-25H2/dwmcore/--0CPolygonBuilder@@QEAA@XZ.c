/*
 * XREFs of ??0CPolygonBuilder@@QEAA@XZ @ 0x18005E110
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18005DC30 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::CPolygonBuilder(CPolygonBuilder *this)
{
  CPolygonBuilder *v1; // rcx

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>();
  *(_QWORD *)v1 = &CPolygonBuilder::`vftable';
  *((_QWORD *)v1 + 2) = (char *)v1 + 40;
  *((_QWORD *)v1 + 3) = (char *)v1 + 40;
  *((_QWORD *)v1 + 4) = (char *)v1 + 360;
  return v1;
}
