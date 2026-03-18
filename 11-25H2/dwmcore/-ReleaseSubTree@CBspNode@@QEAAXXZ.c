/*
 * XREFs of ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180219D58
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18010BB38 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ??1CBspNode@@EEAA@XZ @ 0x180219CDC (--1CBspNode@@EEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::ReleaseSubTree(CBspNode *this)
{
  ReleaseInterface<CPolygon>((__int64 *)this + 2);
  ReleaseInterface<CPolygon>((__int64 *)this + 3);
}
