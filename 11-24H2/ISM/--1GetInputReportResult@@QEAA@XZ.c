/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x180081BD4
 * Callers:
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x1801D5B53 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x1801D5B77 (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x1801D7F2A (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall GetInputReportResult::~GetInputReportResult(void **this, const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 1, a2);
}
