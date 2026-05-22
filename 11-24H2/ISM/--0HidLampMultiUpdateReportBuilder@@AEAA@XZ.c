/*
 * XREFs of ??0HidLampMultiUpdateReportBuilder@@AEAA@XZ @ 0x180035E50
 * Callers:
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x180035D90 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

HidLampMultiUpdateReportBuilder *__fastcall HidLampMultiUpdateReportBuilder::HidLampMultiUpdateReportBuilder(
        HidLampMultiUpdateReportBuilder *this,
        const struct std::nothrow_t *a2)
{
  const struct std::nothrow_t *v3; // rdx
  const struct std::nothrow_t *v4; // rdx
  const struct std::nothrow_t *v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  void *v8; // [rsp+28h] [rbp-28h] BYREF
  void *v9; // [rsp+30h] [rbp-20h] BYREF
  void *v10; // [rsp+38h] [rbp-18h] BYREF
  void *v11; // [rsp+40h] [rbp-10h] BYREF
  void *v12; // [rsp+48h] [rbp-8h] BYREF

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &HidLampMultiUpdateReportBuilder::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v12, a2);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v11, v3);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v10, v4);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v9, v5);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v8, v6);
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
