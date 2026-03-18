/*
 * XREFs of ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x14006AD00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x140065E78 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 */

void __fastcall DxgkPowerRuntimeDeviceDirectedPowerUpCallback(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    v5 = 1;
    v4 = 0;
    McTemplateK0pqq_EtwWriteTransfer(
      (__int64)this,
      (__int64)&Dxgk_PowerRuntimeDeviceDirectedPowerCallback,
      a3,
      this,
      v4,
      v5);
  }
  DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(this, 1u);
}
