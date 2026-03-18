/*
 * XREFs of ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14021C0D4
 * Callers:
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401B1E58 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1401D44B8 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1403921A4 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(struct _KTHREAD **this, unsigned int a2)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v4, this + 2);
  if ( *((_BYTE *)this + 68) )
    ((void (__fastcall *)(struct _KTHREAD *, _QWORD))qword_140160370)(*this, a2);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4);
}
