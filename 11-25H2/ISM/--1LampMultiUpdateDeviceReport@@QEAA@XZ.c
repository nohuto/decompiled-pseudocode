/*
 * XREFs of ??1LampMultiUpdateDeviceReport@@QEAA@XZ @ 0x180038DC8
 * Callers:
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x180038D80 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

void __fastcall LampMultiUpdateDeviceReport::~LampMultiUpdateDeviceReport(void **this, const struct std::nothrow_t *a2)
{
  const struct std::nothrow_t *v3; // rdx
  const struct std::nothrow_t *v4; // rdx
  const struct std::nothrow_t *v5; // rdx
  const struct std::nothrow_t *v6; // rdx

  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 5, a2);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 4, v3);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 3, v4);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 2, v5);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 1, v6);
}
