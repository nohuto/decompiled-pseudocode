/*
 * XREFs of ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x14021DEE8
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401D3EF8 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14021B7CC (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14021C124 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(struct _KTHREAD **this)
{
  struct _DEVICE_OBJECT *v3; // rdx
  int VmBusChannel; // eax
  __int64 v5; // rdi
  _BYTE v6[40]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 2);
  if ( *((_BYTE *)this + 68) )
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
    return 0LL;
  }
  else
  {
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
    VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(this, v3);
    v5 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      WdLogSingleEntry1(2LL, VmBusChannel);
      WdLogGlobalForLineNumber = 13784;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create global VM bus channel in the VM, returning 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v5;
  }
}
