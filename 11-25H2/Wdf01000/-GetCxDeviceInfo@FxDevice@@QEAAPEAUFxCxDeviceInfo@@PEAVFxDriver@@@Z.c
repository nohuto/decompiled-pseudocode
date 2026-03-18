/*
 * XREFs of ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BD90
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140014104 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x14005C7F0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091980 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1400E3B34 (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     <none>
 */

FxCxDeviceInfo *__fastcall FxDevice::GetCxDeviceInfo(FxDevice *this, FxDriver *CxDriver)
{
  FxCxDeviceInfo *p_m_CxDeviceInfoListHead; // rcx
  FxCxDeviceInfo *result; // rax

  p_m_CxDeviceInfoListHead = (FxCxDeviceInfo *)&this->m_CxDeviceInfoListHead;
  for ( result = (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead->ListEntry.Flink;
        result != p_m_CxDeviceInfoListHead;
        result = (FxCxDeviceInfo *)result->ListEntry.Flink )
  {
    if ( result->Driver == CxDriver )
      return result;
  }
  return 0LL;
}
