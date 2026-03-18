/*
 * XREFs of ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x14018D36C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140405200 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall GetDriverCapsSizeFromDdiVersion(unsigned int a1)
{
  __int64 v2; // rbx

  if ( a1 >= 0xE003 )
    return 592LL;
  if ( a1 >= 0x9002 )
    return 584LL;
  if ( a1 >= 0x5011 )
    return 576LL;
  if ( a1 >= 0x4000 )
    return 552LL;
  if ( a1 >= 0x3000 )
    return 544LL;
  if ( a1 >= 0x2001 )
    return 528LL;
  if ( a1 < 0x2000 )
  {
    if ( a1 >= 0x104E )
      return 336LL;
    v2 = a1;
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 6543;
  }
  else
  {
    v2 = a1;
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 6513;
  }
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Miniport returned unknown/unsupported driver version 0x%I64x",
    v2,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
