/*
 * XREFs of ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x18020DCF8
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016A778 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ??1CBspNode@@EEAA@XZ @ 0x18020DC7C (--1CBspNode@@EEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18003BCF8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::ReleaseSubTree(CBspNode *this)
{
  ReleaseInterface<CPolygon>((__int64 *)this + 2);
  ReleaseInterface<CPolygon>((__int64 *)this + 3);
}
