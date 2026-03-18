/*
 * XREFs of ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400E0F9C
 * Callers:
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1400E0E38 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140101B10 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBand(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(struct _KTHREAD **)(v2 + 44560) != KeGetCurrentThread() )
      goto LABEL_3;
  }
  else if ( *(struct _KTHREAD **)(v2 + 44560) != KeGetCurrentThread() )
  {
LABEL_3:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v7,
      (struct _KTHREAD **)(*a1 + 44552));
    LOBYTE(v6) = a2;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, v6);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
    return;
  }
  LOBYTE(v5) = a2;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, v5);
}
