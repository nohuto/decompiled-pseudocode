/*
 * XREFs of ??1GetFeatureReportResult@DockableDeviceCollection@@QEAA@XZ @ 0x1800DE208
 * Callers:
 *     ?OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z @ 0x1800DEB00 (-OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

void __fastcall DockableDeviceCollection::GetFeatureReportResult::~GetFeatureReportResult(
        void **this,
        const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 2, a2);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this);
}
