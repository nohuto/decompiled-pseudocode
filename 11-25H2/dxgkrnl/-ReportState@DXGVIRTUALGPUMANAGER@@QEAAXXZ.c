/*
 * XREFs of ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x14020840C
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403C10F8 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x140208300 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
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
