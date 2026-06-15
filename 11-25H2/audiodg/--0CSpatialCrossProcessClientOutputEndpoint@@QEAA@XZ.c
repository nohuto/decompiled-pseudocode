/*
 * XREFs of ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140089260
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140088D54 (--0-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140088ED0 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x1400891C8 (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessControl@@QEAA@PEAVCSpatialCrossProcessBaseEndpoint@@@Z @ 0x1400892E4 (--0CSpatialCrossProcessControl@@QEAA@PEAVCSpatialCrossProcessBaseEndpoint@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessClientOutputEndpoint *__fastcall CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  *((_DWORD *)this + 352) = 0;
  *(_OWORD *)((char *)this + 1416) = 0LL;
  *(_OWORD *)((char *)this + 1432) = 0LL;
  *((_QWORD *)this + 181) = 0LL;
  *((_BYTE *)this + 1456) = 0;
  CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(this);
  CSpatialCrossProcessControl::CSpatialCrossProcessControl(
    (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1392),
    this);
  *((_QWORD *)this + 183) = 0LL;
  *((_DWORD *)this + 368) = 0;
  *((_DWORD *)this + 369) = 0;
  *((_DWORD *)this + 370) = 0;
  *((_DWORD *)this + 371) = 0;
  *((_BYTE *)this + 1488) = 0;
  return this;
}
