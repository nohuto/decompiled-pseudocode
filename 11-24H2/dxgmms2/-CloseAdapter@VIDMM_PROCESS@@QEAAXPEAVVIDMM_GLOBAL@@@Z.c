/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400BB46C
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x140039B14 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     VidMmCloseAdapter @ 0x140041F40 (VidMmCloseAdapter.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400BABD8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1400BBBAC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F95B8 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER@@QEAAXJ@Z @ 0x1400BA830 (-UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER@@QEAAXJ@Z.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400BC068 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAFC (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned __int16 v2; // bx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  bool v8; // r8
  _BYTE v9[32]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v10[12]; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = a2;
    *(_QWORD *)(v5 + 32) = this;
    WdLogGlobalForLineNumber = 448;
  }
  v6 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, this + 33);
  v7 = *((_QWORD *)this[2] + v6);
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) <= 1 )
  {
    if ( *(_QWORD *)(v7 + 184) )
    {
      memset(v10, 0, 0x58uLL);
      v10[5] = *((_QWORD *)a2 + 5048);
      v10[0] = -4294967181LL;
      v10[6] = v7;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v10, v8);
    }
    VIDMM_PROCESS::DestroyAdapterInfo((VIDMM_PROCESS *)this, v6);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v6);
    if ( *((_DWORD *)a2 + 1736) )
    {
      do
        VIDMM_PHYSICAL_ADAPTER::UpdateWorkingSets(
          *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)a2 + 5029) + 8LL * v2++),
          *((_DWORD *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v6));
      while ( (unsigned int)v2 < *((_DWORD *)a2 + 1736) );
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
}
