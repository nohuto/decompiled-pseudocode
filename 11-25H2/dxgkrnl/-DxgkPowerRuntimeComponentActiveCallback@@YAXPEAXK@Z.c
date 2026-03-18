/*
 * XREFs of ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x140013D40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140013DA0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeComponentActiveCallback(DXGADAPTER *a1, unsigned int a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      (_DWORD)a1,
      (unsigned int)&Dxgk_PowerRuntimeComponentActiveCallback,
      a3,
      (_DWORD)a1,
      a2,
      1);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(a1, a2, 1u);
}
