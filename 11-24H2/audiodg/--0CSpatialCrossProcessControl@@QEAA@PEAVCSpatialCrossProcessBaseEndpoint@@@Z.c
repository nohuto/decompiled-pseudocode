/*
 * XREFs of ??0CSpatialCrossProcessControl@@QEAA@PEAVCSpatialCrossProcessBaseEndpoint@@@Z @ 0x140088D64
 * Callers:
 *     ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140088CE0 (--0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CSpatialCrossProcessControl *__fastcall CSpatialCrossProcessControl::CSpatialCrossProcessControl(
        CSpatialCrossProcessControl *this,
        struct CSpatialCrossProcessBaseEndpoint *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CSpatialCrossProcessControl::`vftable';
  return this;
}
