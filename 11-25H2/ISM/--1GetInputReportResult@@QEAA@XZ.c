/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x180081B34
 * Callers:
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x1801CE4A6 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x1801CE4CA (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x1801D06EA (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall GetInputReportResult::~GetInputReportResult(void **this, const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 1, a2);
}
