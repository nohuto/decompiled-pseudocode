/*
 * XREFs of ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x180038D80
 * Callers:
 *     ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x180038C40 (--_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1LampMultiUpdateDeviceReport@@QEAA@XZ @ 0x180038DC8 (--1LampMultiUpdateDeviceReport@@QEAA@XZ.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(
        HidLampMultiUpdateReportBuilder *this)
{
  InputContext *v2; // rcx

  *(_QWORD *)this = &HidLampMultiUpdateReportBuilder::`vftable';
  v2 = (InputContext *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    InputContext::Release(v2);
  }
  LampMultiUpdateDeviceReport::~LampMultiUpdateDeviceReport((HidLampMultiUpdateReportBuilder *)((char *)this + 24));
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
