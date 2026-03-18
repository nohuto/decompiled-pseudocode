/*
 * XREFs of ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x14020EAD0
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403B56B0 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x14020E9C4 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::ReportState(struct _KTHREAD **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( bTracingEnabled )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v6, this + 5);
    v4 = (_QWORD **)(this + 13);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
      DXGK_VIRTUAL_GPU::ReportState((DXGK_VIRTUAL_GPU *)(i - 15), v2, v3);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
  }
}
