/*
 * XREFs of RIMGetVirtualDesktopPhysicalSize @ 0x140053BB0
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x14020ED30 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053C20 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 */

__int64 __fastcall RIMGetVirtualDesktopPhysicalSize(__int64 a1)
{
  int v2; // r10d
  int v3; // r9d
  _DWORD v5[5]; // [rsp+20h] [rbp-2D8h] BYREF
  unsigned __int16 v6; // [rsp+34h] [rbp-2C4h]

  *(_OWORD *)a1 = 0LL;
  InputConfig::Mouse::GetUnionRegion(v5);
  v2 = v6;
  v3 = v5[3] - v5[1];
  *(_DWORD *)(a1 + 8) = 2540 * (v5[2] - v5[0]) / v6;
  *(_DWORD *)(a1 + 12) = 2540 * v3 / v2;
  return a1;
}
