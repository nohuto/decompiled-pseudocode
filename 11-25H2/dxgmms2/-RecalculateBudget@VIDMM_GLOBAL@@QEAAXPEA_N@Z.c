/*
 * XREFs of ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DB3C8
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140036650 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1400382D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038934 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400DB544 (-SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400DB9CC (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400DC388 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RecalculateBudget(VIDMM_GLOBAL *this, bool *a2)
{
  __int64 v2; // r15
  bool *v3; // r14
  unsigned __int16 v5; // si
  int v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h]
  _BYTE v8[8]; // [rsp+30h] [rbp-30h] BYREF
  void *v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+40h] [rbp-20h]
  _BYTE v11[24]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v12; // [rsp+A0h] [rbp+40h] BYREF
  bool *v13; // [rsp+A8h] [rbp+48h]

  v13 = a2;
  v2 = *((_QWORD *)this + 5583);
  v3 = a2;
  if ( v2 == *((_QWORD *)this + 5584) )
  {
    *a2 = 0;
  }
  else
  {
    v7 = 0LL;
    v6 = 14001;
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v5 = 0;
    if ( *((_DWORD *)this + 1736) )
    {
      do
      {
        v12 = 0;
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v11, (struct _KTHREAD **)this + 5135);
        v9 = &VIDMM_PARTITION::_PartitionLock;
        v10 = 0;
        ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
        v10 = 1;
        VIDMM_GLOBAL::SetupBudgetState(this, (struct VIDMM_BUDGET_STATE *)&v12, v5);
        VIDMM_GLOBAL::AssignBudgets(this, (struct VIDMM_BUDGET_STATE *)&v12, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v5) + 576LL) & 2) != 0 )
          VIDMM_GLOBAL::AssignBudgets(this, (struct VIDMM_BUDGET_STATE *)&v12, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
        DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v8);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
        ++v5;
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 1736) );
      v3 = v13;
    }
    *((_QWORD *)this + 5584) = v2;
    VIDMM_GLOBAL::SendBudgetChangeNotifications(this);
    *v3 = 1;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
}
