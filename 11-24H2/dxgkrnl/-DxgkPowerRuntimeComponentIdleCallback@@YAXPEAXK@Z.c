/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x140010AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140010BB0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeComponentIdleCallback(DXGADAPTER *this, unsigned int a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      (_DWORD)this,
      (unsigned int)&Dxgk_PowerRuntimeComponentActiveCallback,
      a3,
      (_DWORD)this,
      a2,
      0);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 0);
  PoFxCompleteIdleCondition(*((_QWORD *)this + 404), a2);
}
