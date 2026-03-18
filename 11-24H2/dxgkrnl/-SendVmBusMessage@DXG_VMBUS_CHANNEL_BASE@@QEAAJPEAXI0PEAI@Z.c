/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x14021E790
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x14021C828 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x140013980 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int v9; // ebx
  DXGGLOBAL *Global; // rax
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, this + 2);
  if ( *((_BYTE *)this + 68) )
  {
    if ( a3 <= 0x20000 && *a5 <= 0x20000 )
    {
      v9 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, int, void *, unsigned int *, _QWORD))qword_140160400)(
             this[1],
             a2,
             a3,
             0LL,
             1,
             a4,
             a5,
             0LL);
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::CheckDebugBreak(Global);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
      return v9;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 16230;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return 3221225485LL;
}
