/*
 * XREFs of ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x140081720
 * Callers:
 *     <none>
 * Callees:
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14004B0F8 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ @ 0x1400706DC (-FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A394 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall FxCommonBuffer::Dispose(FxCommonBuffer *this)
{
  char v2; // bl

  v2 = 0;
  if ( Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() && this->m_DmaEnabler->m_RunningUserModeDriver )
    FxObject::CallCleanup(this);
  else
    v2 = 1;
  FxCommonBuffer::FreeCommonBuffer(this);
  return v2;
}
